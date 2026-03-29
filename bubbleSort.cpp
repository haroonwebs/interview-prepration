#include <iostream>
#include <string>
using namespace std;

// time complexity for the bubble sort is o(n^2)
void BubbleSortForAssending(int arry[], int n){
  for (int i = 0; i < n-1; i++){
    for (int j = 0; j < n-i-1; j++){
        if(arry[j] > arry[j+1]){
            swap(arry[j], arry[j+1]);
        }
    }
  };
};

void BubbleSortForDecending(int arry[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if(arry[j] < arry[j+1]){
                swap(arry[j], arry[j+1]);
            }
        }
        
    }
    
}

void printSortedArry(int arry[], int n){
    for (int i = 0; i < n-1; i++){
        cout << arry[i] << " ";
    };
};





int main () {
  int arry[] = {1, 5, 6,3, 2, 6 ,2 , 6};
  int n = sizeof(arry)/ sizeof(arry[0]);
  BubbleSortForDecending(arry, n);
//   BubbleSortForAssending(arry, n);
  printSortedArry(arry, n);
};