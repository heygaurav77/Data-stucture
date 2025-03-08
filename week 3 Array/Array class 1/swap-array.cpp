#include<iostream>
using namespace std;


void  swapElements(int arr[], int start, int end){

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50}; 
    int size = 5;

    int start  = 0;
    int end = size -1;

   // swap the start and end
    swapElements(arr, start, end);

    for(int i=0; i< size; i++){
        cout << arr[i] << " ";
    }


   return 0;
}
