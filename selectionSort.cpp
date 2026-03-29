#include <iostream>
#include <string>
using namespace std;

// time complexity for the bubble sort is o(n^2)
void SelectionSortForAssending(int arry[], int n){
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

void SelectionSortForDecending(int arry[], int n){
   for (int i = 0; i < n-1; i++){
      int smallest = i; 
            for (int j=i+1; j<=n-1; j++){
                if(arry[j] > arry[smallest]){
                    smallest = j;
                }
            }
        swap(arry[i], arry[smallest]);
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
//   SelectionSortForAssending(arry, n);
  SelectionSortForDecending(arry, n);
  printSortedArry(arry, n);
};