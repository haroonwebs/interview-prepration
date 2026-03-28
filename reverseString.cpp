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

string tolowerCase(string name){
  for (int i = 0; i < name.length() -1 ; i++){
     name[i]= tolower(name[i]);
  }
  return name;
}


bool Palindrom (string name){
    string lowerName = tolowerCase(name);
    int start = 0;
    int end = lowerName.length() - 1;
    while (start <= end){
        if(lowerName[start] != lowerName[end] ){
         return false;
        }else {
          return true;
        };
    };
    
}


bool FindCharactorInString(string name, char alphabat){
    for (int i = 0; i <= name.length() - 1; i++) {
        if (name[i] == alphabat){
            return true;
        } else {
            return false;
        }
    }
}


int main () {
   string name = "hadam";
   char ch= 'n';
   cout << Palindrom(name) << endl;
   cout <<ReverseString(name) << endl;
   cout <<FindCharactorInString(name, ch) << endl;
};