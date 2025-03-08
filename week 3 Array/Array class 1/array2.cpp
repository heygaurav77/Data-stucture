#include<iostream>
using namespace std;

// void solve(int num[], int n){
//   for(int i=0; i<n; i++){
//     num[i] = num[i]+10;
//   }
//   return;
// }


void print(int arr[], int size){
    for(int index=0; index<size; index++){
        cout << arr[index] << " ";
    }
}

void solve1(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = arr[i] * 10;
    }
}

int main()
{

    int arr[] = {10, 20, 30, 45, 55};
    int size = 5;
//    int arr[4] = {0};
//    int size = 4;

//    solve(arr, size);

//    for(int i=0; i<4; i++){
//     cout << arr[i] << " ";
//    }
    //  print(arr, size);
     solve1(arr, size);
     print(arr, size);

   return 0;
}
