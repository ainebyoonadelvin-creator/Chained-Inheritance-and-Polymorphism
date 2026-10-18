#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived from Person
class Employee : public Person {
protected:
    int employeeID;
public:
    Employee(string n, int a, int id) : Person(n, a), employeeID(id) {}
    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
    }
};

// Derived from Employee
class Manager : public Employee {
private:
    string department;
public:
    Manager(string n, int a, int id, string dept) 
        : Employee(n, a, id), department(dept) {}
    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m("Alice", 35, 101, "HR");
    m.displayManager();  // Demonstrates chained inheritance
    return 0;
}
