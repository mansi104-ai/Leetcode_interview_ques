#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct Contact{
    string name;
    vector<string> phoneNumbers;
};

vector<Contact> Directory;

void addContact(){
    string name;
    cout << "Enter name:";
    cin.ignore();
    getline(cin,name);

    Contact newContact;

    newContact.name = name;

    // vector<string> phoneNumbers;
    int n;
    cout << "Write the number of contacts to be added: "  ;
    cin >> n;

    for(int i =0 ;i< n;++i){
        string phoneNumber;
        cout << "Enter Phone Number " << i+1 << ": ";
        cin >> phoneNumber;
        newContact.phoneNumbers.push_back(phoneNumber); 
    }


    Directory.push_back(newContact);

    cout << "Contact added successfully : " << endl;

}

void searchContact(){
    string prefix;
    cout << "Enter name prefix to search: ";
    cin.ignore();

    getline(cin, prefix);

    bool found  = false;
    for(const auto& contact:Directory){
        if(contact.name.find(prefix) == 0){
            cout << "Name : " << contact.name << endl;
            for(const auto& number: contact.phoneNumbers){
                cout << "Phone Number :"  << number<< endl;

            }
            found = true;
        }


    }
    if(!found){
        cout << "No contacts found with the given prefix :" << endl;
    }
}


void updateContact(){
    string name;
    cout << "Enter the name of the contact to update :";
    cin.ignore();
    getline(cin,name);

    for(auto& contact : Directory){
        if(contact.name == name){
            cout << "Enter the new name ";
            getline(cin , contact.name);


            int num;
            cout << "Enter new phone numbers to add :" ;
            cin >> num;
            contact.phoneNumbers.clear();

            for(int i =0;i< num ; ++i){
                string phoneNumber;
                cout << "Enter the phone Number " << i+1 << " ";
                cin >> phoneNumber;
                contact.phoneNumbers.push_back(phoneNumber);

            }
            cout << "Contact updated succcessfully: "<< endl;
            return;
        }
    }

    cout << " Contact not found " <<endl;
}
void displayMenu(){
    cout << "\nPhone Directory Menu :\n";
    cout << "1. Add Contact\n";
    cout << "2. Search Contact\n";
    cout << "3. Update Contact\n";
    cout << "4. Exit\n";
    cout << "5.Enter your choice :\n";
}

int main(){
    int choice;
    while(true){
        displayMenu();
        cin >> choice;

        switch(choice){
            case 1:
              addContact();
              break;

            case 2:
              searchContact();
              break;

            case 3:
              updateContact();
              break;

            case 4:
              cout << "Exiting program :"<< endl;
              return 0;

            default :
              cout << "Invalid choice, please try again : "<<endl;

        }
    }
}


/*
Problem Statement:
The current implementation of the Phone Directory application is limited in its functionality and usability. Users can manage contacts by creating, updating, deleting, searching, and displaying them. However, several areas in the program could be optimized to enhance the user experience, including improving input validation, error handling, and ensuring better scalability and maintainability of the code.

Background:
The Phone Directory application is designed to allow users to manage contacts and their associated phone numbers. The current system employs a menu-driven approach, where users can interact with the application via a console interface. The contacts are stored in memory using a HashMap, with contact names as keys and associated phone numbers as values in a Set.

While the system is functional, it has some limitations:

Input Validation: Although basic validation is provided for phone numbers, there is no validation for contact names or handling of edge cases such as empty input.
Error Handling: The application lacks comprehensive error handling, which can lead to crashes or unintended behavior if unexpected input is provided.
User Experience: The current console interface is basic, with no provision for guiding the user or offering feedback beyond simple messages.
Scalability: As the number of contacts grows, the current in-memory storage might become a bottleneck, especially without a persistent storage solution.
Relevance:
Enhancing the Phone Directory application is crucial to provide a more robust and user-friendly experience. Improving input validation, error handling, and scalability will ensure that users can rely on the system for managing their contacts efficiently without encountering errors or limitations. Additionally, a more refined user interface will lead to greater user satisfaction, making the application more appealing for regular use.

Objectives:
The primary objective of this project is to improve the functionality, user experience, and scalability of the Phone Directory application. The specific objectives include:

Enhancing Input Validation:

Implement comprehensive validation for both contact names and phone numbers to prevent invalid data entry.
Introduce error messages and feedback for users when invalid input is detected.
Improving Error Handling:

Incorporate robust error handling mechanisms to prevent the application from crashing due to unexpected input or scenarios.
Ensure that users receive clear and helpful messages when errors occur.
Optimizing the User Interface:

Revamp the console interface to be more user-friendly, providing clear instructions and better feedback.
Consider implementing a graphical user interface (GUI) for an enhanced user experience.
Ensuring Scalability:

Assess the current in-memory storage approach and explore options for persistent storage, such as using a database.
Implement strategies to optimize performance as the number of contacts increases, ensuring that the application remains responsive and efficient.
Refactoring and Code Quality:

Refactor the existing codebase to improve readability, maintainability, and adherence to best practices.
Introduce unit tests to ensure the reliability of the application and facilitate future development.
By addressing these objectives, the Phone Directory application will become a more reliable, user-friendly, and scalable tool for managing contacts, ensuring a positive experience for its users.
*/ 