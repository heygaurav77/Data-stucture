#include<iostream>
using namespace std;

class Stack{
    public:
       int* arr;
       int size;
       int top;

       Stack(int capacity){
        arr = new int[capacity];
        size = capacity;
        top = -1;

       }

       void push (int val){
        //overflow ka dhyan rakhna hai
          if(top == size -1){
            cout << "Stack is Overflow " <<endl;
          }
          else{
               //Stack me khali jaga hai abhi
               top++;
               arr[top] = val;
          }
       }

       void pop() {
        if(top == -1){
            // stack is empty, cannot pop in this case;
            cout << "Stack underflow" <<endl;
        }
        else{ //no need that case
            // normal case hai...
           arr[top] = 0;
           top--;
        }
       }

       int getSize(){
       size = top+1;

       }

       bool isEmpty(){
       if (top == -1){
        return true;
       }
       else{
        return false;
       }
       }

       int getTop(){
        if(top == -1){
            cout << " There is no element at the top, stack is empty"; 
            return -1;

        }
        else{
          return arr[top];
        }
       }

       void print(){
        cout << "Printing Stack" << endl;
        for(int i=0; i < size; i++){
            cout << arr[i] <<" ";
        }  cout << endl;
       }
};




int main(){
//creating a stack of intial size 5;
Stack s(5);
s.print();

s.push(10);
s.print();


s.push(20);
s.print();


s.push(30);
s.print();

s.push(40);
s.print();

s.push(50);
s.print();

s.push(60);
s.print();

cout << s.getTop() <<endl;
cout << s.getSize() <<endl;
cout << s.isEmpty() <<endl;

s.pop();
s.print();

s.pop();
s.print();

s.pop();
s.print();

cout << s.getSize() <<endl;

s.pop();
s.print();

s.pop();
s.print();

s.pop();
s.print();



return 0;
}