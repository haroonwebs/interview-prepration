#include <iostream>
#include <string>
using namespace std;

//Polymorphysm: the ability of an object to take on different forms or behave in different ways depending on the context in which they are used.

class Person {
public:
    string name;
    double age;
    // this is the example of compile time polymorphysm
    //constructor overloading; same name but different parameters. when you call the object with parameters then 2nd constructor is invoked but when you do not give params then first invoked. 
    // Person (){
    //     cout << "hey i am constructor with out params class" << endl;
    // }
    // Person (string name, double age){
    //         cout << "hey i am constructor of Person class" << endl;
    //         this->name= name;
    //         this->age= age;

    //         cout << this->name << endl;
    //         cout << this->age << endl;
    // }

    // function overloading

    int sum(int a, int b){
        return a+b;
    }

    string sum(string a, string b){
        return a+b;
    }
};


int main(){
    Person p1;
// when am passing integer values the first sum functions autometically detect and return and
    cout << p1.sum(5, 9) << endl;
// when am passing the parameters which are requred for function 2nd then autometically 2nd invoked. 
    cout << p1.sum("Haroon", "Talib") << endl;

// so function name is same but parameters are different which that invoked term function overloading.

    return 0;
}

