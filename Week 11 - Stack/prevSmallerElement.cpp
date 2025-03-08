#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
//monotonic stack pattern
//Time complexity O(N)
//Space complexity O(1)

void nextSmallerElement(int arr[], int n, vector<int>& ans){
    stack<int> s;
    s.push(-1);


    for (int i = n-1; i>= 0; i--){
        int element = arr[i];
        while(s.top() >= element){
            s.pop();

        }
            //jab me yeh pohocha
            ans.push_back(s.top());

            s.push(element);
    }
    
}
//use reverse

void preSmallerElement(int arr[], int n,vector<int>& ans){
stack<int> s;
s.push(-1);


//fark bas loop ka hai...
for (int i=0; i<n; i++){
   int element = arr[i];
   while(s.top() >= element ){
    s.pop();
   }
   ans.push_back(s.top());

   s.push(arr[i]);
}


}


int main(){

//input 
int arr[] = {8,4,6,2,3};
int n = 5;

vector<int> ans;

preSmallerElement(arr, n, ans);
// reverse(ans.begin(), ans.end());
for(auto i: ans){
    cout << i << " ";
}


return 0;
}