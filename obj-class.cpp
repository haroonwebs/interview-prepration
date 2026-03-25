#include <iostream>
#include <string>
using namespace std;

// class is nothing its just a blueprint for the objects. it dose not consume memory.
// class having the propertes and the member functions of that class
// by default propertes and functions are accessable with in the class only because these are private by default.
class Teacher {
    //properties 
private:    
    string department;
    double salary; 

public:    
    string name;
    string subject;
 // setter methods 
    void changeDepartment( string newDepartment){
        department = newDepartment;
    }

     void SetSalary( double s){
        salary = s;
    }

     // getter method 
    string getDepartment(){
        return department;
    }

     double getSalary(){
        return salary;
    }

};

// the function changeDepartment is accessable because i declare it public and other properties are not accessable in then main function.
// changeDepartment function working as a setter functions because we useing it to update the value of the private property deparment.
// and an other type of these functions are getter functions that are used the get private propery valuses.

int main(){
// here we create the object of the class. objects are the entites which are exist in the real world means car, teacher, truck, animal.
// when we create the object of the class, it allocate the specific memory for that object.
   Teacher tech1;
   tech1.changeDepartment("pakistan");
   tech1.SetSalary(30000);

// we can create multipal objects of a single class like below 
//    Teacher tech2;
//    Teacher tech3;

// how i can assign valuse to the properties of the Teacher class with out getter and setter fucntions
// i only work for that properties which are declare publically.
// in this case teacher salary and department declared private to we need to use setter method to set values and getter for get valuse
    tech1.name= "Haroon";
    tech1.subject= "Computer Science";
    cout << tech1.getDepartment() << endl; 
    cout << tech1.name << endl; 
    cout << tech1.subject << endl; 
    cout << tech1.getSalary();
   
    return 0;
}


// lessons covered . objects, classes, setters functions, getters functions, access modifiers.
// Encapsulation: 
// wrapping up of data and member functions in a single unit is called Encapsulations.
// examples code show the concept of encapsulations.