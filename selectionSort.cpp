#include <iostream>
#include <string>
using namespace std;

// time complexity for the bubble sort is o(n^2)
void SelectionSort(int arry[], int n){
  for (int i = 0; i < n-1; i++){
    int smallestIndx = i;
    for (int j = i+1; j < n; j++){
       if(arry[j] < arry[smallestIndx]){
        smallestIndx=j;
       }
    }
    swap(arry[i], arry[smallestIndx]);
  }
};



void printSortedArry(int arry[], int n){
    for (int i = 0; i <= n-1; i++){
        cout << arry[i] << " ";
    };
};





int main () {
  int arry[] = {1, 2, 3, 3, 8, 5 ,6 ,7};
  int n = sizeof(arry)/ sizeof(arry[0]);
//   BubbleSortForDecending(arry, n);
  SelectionSort(arry, n);
  printSortedArry(arry, n);
};