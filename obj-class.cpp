#include <iostream>
#include <string>
using namespace std;

// class is nothing its just a blueprint for the objects. it dose not consume memory.
// class having the propertes and the member functions of that class
// by default propertes and functions are accessable with in the class only because these are private by default.
class Teacher {
    //properties 
private:    
    string name;
    string subject;
    string department;
    double salary; 

public:    
 // setter methods 
    void changeDepartment( string newDepartment){
        department = newDepartment;
    }

     // getter method 
    string getDepartment(){
        return department;
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
// we can create multipal objects of a single class like below 
//    Teacher tech2;
//    Teacher tech3;
cout << tech1.getDepartment() << endl; 
   
    return 0;
}

