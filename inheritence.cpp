#include <iostream>
#include <string>
using namespace std;

//Inheritance: its a concept of object oriented programming in which the child classes inhert the properties of its parent. its important to decrease the code because it make the code reuseable.

// parient class having the name and age property.
class Person {
protected:
    string name;
    double age;

    Person (){
        cout << "hey i am constructor of Person class" << endl;
    }
};


// Studend class a class which is taking name and age property from its parent so we do not need to declear these properties here.
// line no 17 show the syntx to inhert properties and keyword public show that we are inheriting person class publically we can access all the properties of the person class.
class Student : public Person {
    //rollno and department are the internal properties of the Student class and these are not accessable in person means parient class.
public:
    int rollno;
    string department;

    Student (){
        cout << "hey i am constructor of Student class" << endl;
    }

   void getStudentInfo(){
    //so name and age accessable in this class.
        cout << "name:" <<  name << endl;
        cout << "age:" <<  age << endl;
        cout << "roll No:" << rollno  << endl;
        cout << "department:" <<  department << endl;
    }

    void setAge (double a, string  n) {
        age = a;
        name= n;
    }
};

int main(){
    Student stu1;
    stu1.setAge(2, "Muhammad Haroon Talib");
    stu1.rollno= 2;
    stu1.department= "Computer Science";
    stu1.getStudentInfo();

    return 0;
}


// Important note: when we create the object of the derived class, first the constructor of the parient call invoked then the constructor of the derived class invoked
// output of the above code is:
// hey i am constructor of Person class,
// hey i am constructor of Student class, 
//name:Muhammad Haroon Talib,
//age:26,
// name:2, 
//department:Computer Science


// when the propertes of the parient is in protected mode then you do not access the valus in the main function to set that values you need to carete a setter functions.