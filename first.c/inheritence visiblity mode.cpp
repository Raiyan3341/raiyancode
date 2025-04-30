#include <iostream>
#include <string>
using namespace std;

class OOP {
private:
    string stname;
    int marks;

public:
    OOP(string name, int m) : stname(name), marks(m) {}

    void display() {
        cout << "Student Name: " << stname << ", Marks: " << marks << endl;
    }
};

class Student1 : public OOP {
private:
    float cgpa;

public:
    Student1(string name, int m, float c) : OOP(name, m), cgpa(c) {}

    void display1() {
        display();
        cout << "CGPA: " << cgpa << endl;
    }
};

class Student2 : public Student1 {
private:
    string gmail;

public:
    Student2(string name, int m, float c, string g) : Student1(name, m, c), gmail(g) {}

    void display3() {
        display1();
        cout << "Gmail: " << gmail << endl;
    }
};

int main() {

    Student2 student("Tamim", 2095, 3.9, "tamim@gmail.com");

    student.display3();

    return 0;
}
