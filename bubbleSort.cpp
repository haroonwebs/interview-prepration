#include <iostream>
#include <string>
using namespace std;

// time complexity for the bubble sort is o(n^2)
void BubbleSortForAssending(int arry[], int n){
  for (int i = 0; i < n-1; i++){
    bool isSwap = false;
    for (int j = 0; j < n-i-1; j++){
        if(arry[j] > arry[j+1]){
            swap(arry[j], arry[j+1]);
            isSwap = true;
        }
    }
    if(!isSwap){ // array is already swaped.
        return ;
    }
  };
};

void BubbleSortForDecending(int arry[], int n){
    for (int i = 0; i < n-1; i++){
        bool isSwap = false;
        for (int j = 0; j < n-i-1; j++){
            if(arry[j] < arry[j+1]){
                swap(arry[j], arry[j+1]);
                isSwap = true;
            }
        }
      if(!isSwap){
        return;
      }
    }
    
}

void printSortedArry(int arry[], int n){
    for (int i = 0; i <= n-1; i++){
        cout << arry[i] << " ";
    };
};





int main () {
  int arry[] = {1, 2, 3, 3, 8, 5 ,6 ,7};
  int n = sizeof(arry)/ sizeof(arry[0]);
//   BubbleSortForDecending(arry, n);
  BubbleSortForAssending(arry, n);
  printSortedArry(arry, n);
};