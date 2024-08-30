import java.util.*;

/**
 * q1
 */
public class q1 {

    public static void main(String[] args) {
        PhoneDirectory phoneDirectory = new PhoneDirectory();
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\nPhone Directory Menu:");
            System.out.println("1. Create Contact");
            System.out.println("2. Add Number to Contact");
            System.out.println("3. Delete Contact");
            System.out.println("4. Search Contact");
            System.out.println("5. Display All Contacts");
            System.out.println("6. Exit");
            System.out.print("Enter your choice: ");

            String choice = scanner.nextLine();

            switch (choice) {
                case "1":
                    System.out.print("Enter contact name: ");
                    String name = scanner.nextLine();
                    System.out.print("Enter contact numbers (comma-separated): ");
                    List<String> numbers = Arrays.asList(scanner.nextLine().split(","));
                    phoneDirectory.createContact(name.trim(), numbers);
                    break;
                case "2":
                    System.out.print("Enter contact name: ");
                    name = scanner.nextLine();
                    System.out.print("Enter new contact numbers (comma-separated): ");
                    List<String> newNumbers = Arrays.asList(scanner.nextLine().split(","));
                    phoneDirectory.addNumberToContact(name.trim(), newNumbers);
                    break;
                case "3":
                    System.out.print("Enter contact name to delete: ");
                    name = scanner.nextLine();
                    phoneDirectory.deleteContact(name.trim());
                    break;
                case "4":
                    System.out.print("Enter name prefix to search: ");
                    String namePrefix = scanner.nextLine();
                    phoneDirectory.searchContact(namePrefix.trim());
                    break;
                case "5":
                    phoneDirectory.displayContacts();
                    break;
                case "6":
                    System.out.println("Exiting the phone directory. Goodbye!");
                    scanner.close();
                    return;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}

class PhoneNumber {
    private String number;

    public PhoneNumber(String number) {
        if (isValid(number)) {
            this.number = number;
        } else {
            throw new IllegalArgumentException("Invalid phone number: " + number);
        }
    }

    public String getNumber() {
        return number;
    }

    public static boolean isValid(String number) {
        // Basic validation: phone number should only contain digits and be of length 10 (you can adjust the validation as needed)
        return number.matches( "\\ d{10}");
    }

    @Override
    public String toString() {
        return number;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        PhoneNumber that = (PhoneNumber) obj;
        return Objects.equals(number, that.number);
    }

    @Override
    public int hashCode() {
        return Objects.hash(number);
    }
}

class PhoneDirectory {
    private Map<String, Set<PhoneNumber>> contacts;

    public PhoneDirectory() {
        contacts = new HashMap<>();
    }

    public void createContact(String name, List<String> numbers) {
        if (contacts.containsKey(name)) {
            System.out.println("Contact with name " + name + " already exists.");
        } else {
            Set<PhoneNumber> phoneNumbers = new HashSet<>();
            for (String number : numbers) {
                try {
                    phoneNumbers.add(new PhoneNumber(number.trim()));
                } catch (IllegalArgumentException e) {
                    System.out.println(e.getMessage());
                }
            }
            if (!phoneNumbers.isEmpty()) {
                contacts.put(name, phoneNumbers);
                System.out.println("Contact " + name + " created with numbers: " + phoneNumbers);
            }
        }
    }

    public void addNumberToContact(String name, List<String> newNumbers) {
        if (contacts.containsKey(name)) {
            Set<PhoneNumber> phoneNumbers = contacts.get(name);
            for (String number : newNumbers) {
                try {
                    phoneNumbers.add(new PhoneNumber(number.trim()));
                } catch (IllegalArgumentException e) {
                    System.out.println(e.getMessage());
                }
            }
            System.out.println("New numbers added to contact " + name + ": " + phoneNumbers);
        } else {
            createContact(name, newNumbers);
        }
    }

    public void deleteContact(String name) {
        if (contacts.containsKey(name)) {
            contacts.remove(name);
            System.out.println("Contact " + name + " deleted.");
        } else {
            System.out.println("Contact with name " + name + " does not exist.");
        }
    }

    public void searchContact(String namePrefix) {
        boolean found = false;
        for (Map.Entry<String, Set<PhoneNumber>> entry : contacts.entrySet()) {
            if (entry.getKey().startsWith(namePrefix)) {
                System.out.println("Name: " + entry.getKey() + ", Numbers: " + entry.getValue());
                found = true;
            }
        }
        if (!found) {
            System.out.println("No contacts found with the given prefix.");
        }
    }

    public void displayContacts() {
        if (contacts.isEmpty()) {
            System.out.println("No contacts in the directory.");
        } else {
            System.out.println("All contacts:");
            for (Map.Entry<String, Set<PhoneNumber>> entry : contacts.entrySet()) {
                System.out.print("Name: " + entry.getKey() + ", Numbers: ");
                for (PhoneNumber number : entry.getValue()) {
                    System.out.print(number + " ");
                }
                System.out.println();
            
            }
        }
    }
}
    

