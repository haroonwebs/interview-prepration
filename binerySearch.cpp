#include <iostream>
#include <vector>
using namespace std;

// binery Search algothrim always implmented on the sorted arrays.
int BinerySearch(vector<int> arr , int target){
    int start=0 , end= arr.size()-1;
    
    while (start<=end){
       int mid = (start + end)/2;
       if(target > arr[mid]){
        start = mid + 1;
       }else if (target < arr[mid]){
        end = mid - 1;
       }else {
         return mid;
       }
    };
         
       return -1;
};

int RecursiveBinerySerch(vector<int> arr, int target, int start , int end){
    // int start = 0, end= arr.size() - 1;
    while(start<=end){
        int mid = start + (end - start)/ 2;
        if(target > arr[mid]){
          return RecursiveBinerySerch(arr, target, mid + 1, end);
        }else if (target< arr[mid]){
          return RecursiveBinerySerch(arr, target, start, mid-1);
        }else{
            return mid;
        }; 
    }
    return -1;
};





int main (){
    vector<int> arr = {1 , 3, 5, 6,7,9, 19, 20, 44, 64,654,};
    int target1 = 64;

    cout << BinerySearch(arr, target1) << endl;
    cout << RecursiveBinerySerch(arr, target1, 0, arr.size() - 1) << endl;
}