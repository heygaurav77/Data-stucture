#include<iostream>
using namespace std;
//2. add two number represented by linklist











int main(){
Node *head = new Node(9);
head-> next = new Node(9);
head-> next = new Node(9);


print (head);
int carry = 1;
head = add1(head, carry);
print(head);

return 0;
}