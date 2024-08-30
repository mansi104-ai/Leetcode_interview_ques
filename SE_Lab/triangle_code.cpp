#include <iostream>
#include <limits>

using namespace std;

bool isValidInput(double side) {
    return side > 0;  // A valid side must be positive
}

bool canFormTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);  // Triangle inequality condition
}

string determineTriangleType(double a, double b, double c) {
    if (a == b && b == c) {
        return "Equilateral";
    } else if (a == b || b == c || a == c) {
        return "Isosceles";
    } else {
        return "Scalene";
    }
}

int main() {
    double a, b, c;

    cout << "Enter the three sides of the triangle:" << endl;

    // Taking side 'a' input
    while (true) {
        cout << "Side a: ";
        cin >> a;
        if (cin.fail() || !isValidInput(a)) {
            cout << "Invalid input. Please enter a positive number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    // Taking side 'b' input
    while (true) {
        cout << "Side b: ";
        cin >> b;
        if (cin.fail() || !isValidInput(b)) {
            cout << "Invalid input. Please enter a positive number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    // Taking side 'c' input
    while (true) {
        cout << "Side c: ";
        cin >> c;
        if (cin.fail() || !isValidInput(c)) {
            cout << "Invalid input. Please enter a positive number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    // Check if the sides can form a triangle
    if (canFormTriangle(a, b, c)) {
        cout << "The triangle is " << determineTriangleType(a, b, c) << "." << endl;
    } else {
        cout << "The sides do not form a valid triangle." << endl;
    }

    return 0;
}


/*
Problem Statement:
The current implementation of the Triangle Classification application is limited in its functionality and usability. The program is designed to take three sides of a triangle as input from the user and output the type of triangle. However, several areas in the program could be optimized to enhance the user experience, including improving input validation, error handling, and ensuring better scalability and maintainability of the code.

Background:
The Triangle Classification application is designed to determine whether three given sides can form a triangle and, if so, what type of triangle (Equilateral, Isosceles, or Scalene) it is. The current implementation accepts input via the console, performs basic validation, and checks whether the sides satisfy the triangle inequality condition. The application then classifies the triangle accordingly.

While the system is functional, it has some limitations:

Input Validation: Although basic validation is provided for side lengths, there is no comprehensive handling of edge cases, such as zero, negative, or non-numeric input.
Error Handling: The application lacks robust error handling, which can lead to crashes or unintended behavior if unexpected input is provided.
User Experience: The current console interface is basic, providing only simple prompts and feedback without guiding the user effectively.
Scalability: As the program is simple, scalability isn't a primary concern; however, improving the code's maintainability and extensibility is crucial for future enhancements.
Relevance:
Enhancing the Triangle Classification application is essential to provide a more robust and user-friendly experience. Improving input validation, error handling, and maintainability will ensure that users can rely on the system to classify triangles accurately without encountering errors or limitations. A more refined user interface will lead to greater user satisfaction, making the application more appealing for regular use.

Objectives:
The primary objective of this project is to improve the functionality, user experience, and maintainability of the Triangle Classification application. The specific objectives include:

1. Enhancing Input Validation:
Implement comprehensive validation for side lengths to prevent invalid data entry (e.g., zero, negative, or non-numeric values).
Introduce informative error messages and feedback for users when invalid input is detected.
2. Improving Error Handling:
Incorporate robust error handling mechanisms to prevent the application from crashing due to unexpected input or scenarios.
Ensure that users receive clear and helpful messages when errors occur.
3. Optimizing the User Interface:
Revamp the console interface to be more user-friendly, providing clear instructions and better feedback.
Consider extending the application with a graphical user interface (GUI) for a more enhanced user experience.
4. Ensuring Scalability:
Assess the current design and explore options for improving the maintainability and extensibility of the codebase.
Implement strategies to optimize performance, ensuring that the application remains responsive and efficient.
5. Refactoring and Code Quality:
Refactor the existing codebase to improve readability, maintainability, and adherence to best practices.
Introduce unit tests to ensure the reliability of the application and facilitate future development.
By addressing these objectives, the Triangle Classification application will become a more reliable, user-friendly, and maintainable tool, ensuring a positive experience for its users.
*/