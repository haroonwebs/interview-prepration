#include <iostream>
#include <string>
using namespace std;

//  Constructor: function which automatically invoked when the object of the class is created.It used for the Initialization for propertes values. 
// 1: name of the constructor is the same as the class. 2: it dose not have any return type. 3: Its called only one time while object creation. 4: Memory allocation happen when constructor is called.

class Student {
private:    
    string department;
    int rollNo;

public:    
// my own created constructor. am using it to assign inital valuse to properties.
// There are three types of constructors. 1: Non-parameterize, 2: parameterize, 3: copy constructor.


// this is example of non parametrized constructor because not any parameter is passed to constructor.
    // Student (){
    //     cout << "hey i am constructor" << endl;
    //     department= "Computer Science";
    //     rollNo = 1;
    //     name="Haroon Talib";
    //     subject= "Information Technology";
    // }


// parametrized constructor.
      Student (string d, int r, string n, string o){
        cout << "hey i am constructor" << endl;
        department= d;
        rollNo = r;
        name= n;
        subject= "Information Technology";
    }

    string name;
    string subject;

    // getter functions to get private hidden properties
    int getRollNo (){
        return rollNo;
    }

    string getDepartment (){
        return department;
    }

};



int main(){
    // when use parametrized constructor we can pass values from here. not for non-parameterized constructor.
    Student stu1("Physics", 2, "Tahseen Talib", "math"); 
    // stu1.name= "Mubeen Talib";
    // above i am overriding the name value so its output is Mubeen Talib Not Haroon Talib, it override the inital value.
    cout << stu1.name << endl;
    cout << stu1.getRollNo() << endl;
    cout << stu1.getDepartment() << endl;
    cout << stu1.subject << endl;

} 