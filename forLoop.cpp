#include <iostream>
#include <climits>
using namespace std;


// find the sum of the number from 1 to n
// int main(){
//     int n = 99;
//     int sum=0;
// for(int i=0; i<=n; i++){
//     sum = sum + i;
//  };
//     cout << sum << endl;
//     cout << endl;
//  return 0;
// };


// find the even numbers of the number from 1 to n
// int main() {
//     int n = 99;

// for(int i=0; i<=n; i++){
//     if(i%2==0){
//         cout << i << " ";
//     }
//     // to terminal the loop at specific point we use break statement 
//     if(i == 6){
//         break;
//     }
//  };
//     cout << endl;

//  return 0;
// };


// // find the factorial numbers of the number
// int main() {
//     int n = 30;
//     int factorial = 1;
// for(int i=1; i<=n; i++){
//         factorial = factorial * i ;
//  };
//     cout << factorial << endl;
//     cout << endl;

//  return 0;
// };


// // find the prime 
// int main() {
//     int n = 4;
    
//     bool isPrime = true;

// for(int i=2; i * i<=n; i++){
//     if(n%i==0){
//         isPrime = false;
//     } 
//  };

//  if(isPrime == true) {
//     cout << "This is a prime Number" << endl;
//  } else {
//     cout << "This is not a prime Number" << endl;
//  };
 
 
//     cout << endl;

//  return 0;
// };


// fint the sum of the digits of the number
int digitSum (int n){
    int sum = 0;
    while (n>0)
    {
        int lastdigit = n%10;
        n /= 10;
        sum += lastdigit;
    }
 return sum;  
}

// fint the smalles and larges value in the array
int MaxMin( int nums[], int size) {
    int smalest = INT_MAX;
    int largest = INT_MIN;

    for(int i=1; i< size; i++){
      if(nums[i] < smalest){
         smalest = nums[i];
      };
       if(nums[i] > largest){
         largest = nums[i];
      };
    };

    cout << "largest :" << largest << endl;
    cout << "smallest :" << smalest << endl;

};

int reverseArray( int nums[], int size) {
    int start= 0;
    int end = size-1;

    while (start < end) {
        swap(nums[start], nums[end]);
        start ++;
        end --;
    } 

    for(int i=0 ; i<size; i++){
    cout << nums[i] << " ";
    }
};


int main(){
    int nums[]= {2, 45, 534, 694, 23, 8, 2, -20};
    int size = sizeof(nums)/ sizeof(int);
    // MaxMin(nums, size);
    reverseArray(nums, size);
    // cout << digitSum(122232) << endl;
    return 0;
}