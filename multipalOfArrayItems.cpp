#include <iostream>
#include <string>
using namespace std;


int MultipalOfItems(int arry[], int size){
  int product = 1;
  for (int i = 0; i <= size-1; i++) {
     product *= arry[i];
  }
  return product;
};



int main () {
  int arry[] = { 2, 4, 3, 5,8 ,9 ,9};
  int size = sizeof(arry) / sizeof(arry[0]); 
  cout << MultipalOfItems(arry, size) << endl;
};