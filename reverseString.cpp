#include <iostream>
#include <string>
using namespace std;


string ReverseString(string name){
    int start = 0;
    int end = name.length()-1;
    
    while (start < end ){
    swap(name[start], name[end]);
    start ++;
    end --;
    }
    return name;
}




int main () {
   string name = "haroon";
   cout <<ReverseString(name) << endl;
};