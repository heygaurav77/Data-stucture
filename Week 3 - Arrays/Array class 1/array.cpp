#include<iostream>
#include <algorithm>
using namespace std;

int main(){
//creation
// int arr[10];
//error
// int brr[]

// int crr[] = {10, 20, 40, 70};
// int drr[4] = {0};

// cout << drr[0] << endl;
// cout << crr[0] << endl;

// cout << crr[1] << endl;
// cout << crr[2] << endl;
// cout << crr[3] << endl;
// cout << crr[4] << endl;


//add any number
// int arr[4];
//     fill(arr, arr + 4, 101);
//     cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << endl;
   
   //input taking in array 

   int arr[5];
   for (int index = 0; index < 5; index++)
   {
      cout << "Enter the value for box Index: " << 
      index << endl;
      cin >> arr[index];
   }
   
   //print
   for(int index=0; index<5; index++){
      cout << arr[index]<< " ";
   }
   
    return 0;
} 