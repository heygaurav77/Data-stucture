#include <iostream>
using namespace std;

pair<int, int> chcekTwoSum(int arr[], int n, int target)
{

    pair<int, int> ans = make_pair(-1, -1);
    // check all pairs pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans; 
            }
        }
    }
    // aagar aap yeh tak pohoch gye
    return ans;
}

int main() 
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;
  
 pair<int, int> ans = chcekTwoSum(arr, n, 60); 
 
 if(ans.first == -1 && ans.second == -1){
    cout << "Pair not found  " << endl;
 }
else{
    cout << "pair found: " << ans.first << " , " << ans.second <<endl;
}
    return 0;
}
