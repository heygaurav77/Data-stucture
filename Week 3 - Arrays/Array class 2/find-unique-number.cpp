#include <iostream>
using namespace std;


int findUniqueNumbers(int arr[], int n){
   int ans = 0;
   
   for(int i=0; i<n; i++){
    ans = ans ^ arr[i];
   }
   return ans;
}


int main()
{

    int arr[] = {5, 4, 1, 4, 1};
    int size = 5;

    int ans = findUniqueNumbers(arr, size);
    cout << " Your Unique number is: " << ans <<endl;

    return 0;
}
