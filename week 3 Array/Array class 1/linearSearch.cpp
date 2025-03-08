#include<iostream>
#include<limits.h>
using namespace std;
//Linear Search

// bool findTarget(int arr[], int size, int target ){
//    // travel to entire array

//    for(int i=0; i<size; i++){
//         int currentElement = arr[i];

//         if(currentElement == target){
//             // found
//             return true;
//         }
//    }
//    // aagar yeh tak agya toh 
//    // not found element(target)
//    return false;
// }


int findMax(int arr[], int size) {
    int maxAns = INT_MIN;
    for (int i = 0; i < size; i++) {
        maxAns = max(maxAns, arr[i]);
    }
    return maxAns;
}

void printZerosAndOnes(int arr[], int n){
    int zeroCount = 0;
    int oneCount =  0;
    //traverse my array

    for(int i=0; i<n; i++){
        int currElement = arr[i];
        if(currElement == 0){
            zeroCount++;
        }
        if(currElement == 1){
            oneCount++;
        }
    }
    cout << "Total zeoros: " << zeroCount <<endl;
    cout << "Total ones: " << oneCount <<endl;
}

void extrmePrint(int arr[], int n){
   
   int i =  0;
   int j = n-1;

   while(i<=j){
    if(i == j){
        //print only once
        cout << arr[i] << " ";
        break;
      
    }
    else{
    cout << arr[i] << " ";
    i++;
    cout << arr[j] << " ";
    j--;
    }
  

   }

}

int main()
{

    int arr[] = {10, 22, 30, 40, 50, 60, 70};
    int size = 7;
    extrmePrint(arr, size);

    // int arr[] = {10, 20, 35, 40, 50};
    // int size = 5;

    // int arr[100] ;
    // int size;
    // cout << " Enter the number of elements " << endl;
    // cin >> size;
    

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the input value for index " << i <<endl;
    //     cin >> arr[i];
    // }
    

    // printZerosAndOnes(arr, size);
 
    // cout << "max number is: " << 
    // findMax(arr, size) <<endl;

    // int target;
    // cout << "Enter the value of target"<<endl;
    // cin >> target;

    // bool ans = findTarget(arr, size, target);
    // cout << "ans: " << ans << endl;

   return 0;
}
