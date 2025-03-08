#include<iostream>
#include<queue>
using namespace std;

class Queue {
private:
  int* arr;
  int n;
  int front;
  int rear;
  public:
  Queue(int size){
    arr = new[size];
    n = size;
    front = -1;
    rear = -1;
  }

void push(){
   if(rear == n-1){
    cout << "Overflow" <<endl;
   }
   else if {
    // insert
   }
}

void pop(){

if(front == -1 && rear ==-1 ){

}


}

int getRear(){


}

int getSize(){
  // number of ele
}

bool isEmpty() {

}

};



int main(){
Queue q(5);

 q. push(10);
 q. push(20);
 q. push(30); 
 q. push(40);

cout << q.getSize();

return 0;
}