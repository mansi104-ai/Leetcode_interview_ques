#include <iostream>
#include <string>
using namespace std;

class AbstractEmployee {
public:
    virtual void askForPromotion() = 0;
};

class Employee {
private:
    string company;
    int age;

protected: 
    string name;

public:
    Employee(string name, string company, int age) {
        this->name = name;
        this->company = company;
        this->age = age;
    }

    void printInfo() {
        cout << "The name of the employee is: " << name << ", works in company: " << company << ", with age: " << age << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setAge(int age) {
        this->age = age;
    }

    int getAge() {
        return age;
    }
};

class Developer : public Employee {
public:
    string favProgrammingLanguage;

    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age) {
        this->favProgrammingLanguage = favProgrammingLanguage;
    }

    void fixBug() {
        cout << name << " fixed the bug using: " << favProgrammingLanguage << "\n";
    }
};

class Teacher : Employee{
    public:
    string Subject;
    void prepareLesson(){
        cout << name<< "is preparing for: "<< Subject<< endl;
    }
    
    
}
int main() {
    Developer d = Developer("John", "Apple", 30, "C++");
    d.fixBug();
    return 0;
}