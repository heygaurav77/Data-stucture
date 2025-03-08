#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseInKGroup(queue<int>& q, int k, int count){
    int n = q.size();

    if(count >= k){
      // toh me paka reverse karuga
       stack<int> s;

       for (int i = 0; i < k; i++){
       int element = q.front();
       
       q.pop();
       s.push(element);
    }

    for (int i = 0; i < k; i++)
    {
         int element = s.top();
         s.pop();
         q.push(element);
    }
    
    reverseInKGroup(q, k, count-k);
    }
    else {
        // size < k
        // as it is queue k front se 
        //uthake queue k end me ele ko insert karna h
        for (int i = 0; i < count; i++){
        int element = q.front();
    
        s.pop();
        q.push(element);
        
        }     
    }
}

int main(){

queue<int> q;

q.push(10);
q.push(20);
q.push(30);
q.push(10);
q.push(10);
q.push(10);
q.push(10);
q.push(10);
q.push(10);
q.push(10);
q.push(10);
q.push(10);


reverseInKGroup(q, k);

return 0;
}