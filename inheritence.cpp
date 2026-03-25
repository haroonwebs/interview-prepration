#include <iostream>
#include <string>
using namespace std;

//Inheritance: its a concept of object oriented programming in which the child classes inhert the properties of its parent. its important to decrease the code because it make the code reuseable.

// parient class having the name and age property.
class Person {
public:
    string name;
    double age;
};


// Studend class a class which is taking name and age property from its parent so we do not need to declear these properties here.
// line no 17 show the syntx to inhert properties and keyword public show that we are inheriting person class publically we can access all the properties of the person class.
class Student : public Person {
    //rollno and department are the internal properties of the Student class and these are not accessable in person means parient class.
public:
    int rollno;
    string department;

   void getStudentInfo(){
    //so name and age accessable in this class.
        cout << "name:" <<  name << endl;
        cout << "age:" <<  age << endl;
        cout << "name:" << rollno  << endl;
        cout << "department:" <<  department << endl;
    }
};

int main(){
    Student stu1;
    stu1.age=26;
    stu1.name= "Muhammad Haroon Talib";
    stu1.rollno= 2;
    stu1.department= "Computer Science";
    stu1.getStudentInfo();

    return 0;
}

