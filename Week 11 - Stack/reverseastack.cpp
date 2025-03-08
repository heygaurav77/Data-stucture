#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&s, int val){
    //bas case
    if(s.empty()){
        s.push(val);
        return;
    }

    // 1 case mera
    int topE = s.top();
    s.pop();
    insertAtBottom(s, val);
    s.push(topE);
}


void reverseStack(stack<int>& s){
    //b.c ase
    if(s.empty()){
        return;
    }

    int topE= s.top();
    s.pop();
    reverseStack();
    // jab wapas aaunga
    insertAtBottom(s, topE);


    void print(stack<int>& s){
        while(!s.empty()){
            cout<< s.top() <<" ";
            s.pop();
        }
    }
}
int main(){
stack<int> s;

s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);



return 0;
}