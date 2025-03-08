#include<iostream>
using namespace std;

class Stack{
    public:
     
     int* arr;
     int size;
     int top1;
     int top2;


     Stack(int capacity){
        arr = new int[capacity];
        size =capacity;
        top1 = -1;
        top2 = size;
     }
     void push1(int value){
     // if space available, the push
     // else stack overflow
      if(top2-top1 == 1){
         // cannot insert
         cout << "Stck Overflow " <<endl;
      }
      else{
        top1++;
        arr[top1] = value;
      }
     }

     void push2(int value){
        if(top2-top1 == 1){
            cout << "Stack OverFlow" <<endl;
        }else{
            top2--;
            arr[top2] = value;
        }
     }

     void pop1(){
      //if ele avaialbe
      //if stack empty
      if(top1 == -1){
        //stack is one is empty
         cout << "Stack Underflow" <<endl;
      }else{
        arr[top1] = 0;
        top1 --;

      }
     }

     void pop2(){
        //
        if(top2 == size){
            // stack 2 is empty
        }
     }

     void print(){

        cout << "Top1: " << top1 << endl;
        cout << "Top2: " << top2 << endl;
        for (int i = 0; i < size; i++)
        {
            /* code */
        }
        

     }
};




int main(){
Stack s(5);



return 0;
}