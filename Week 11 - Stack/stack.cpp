#include<iostream>
#include<stack>
using namespace std;

int main(){


//creation
stack<int> st;

//insertion 
st.push(10);
st.push(20);
st.push(30);

//size check karo
cout << "Size of stack is: " <<st.size() <<endl;

//remove
st.pop(); 

// chcek empty
if(st.empty()){
    cout << "Stack is empty" << endl;

} else{
    cout << "stack is non empty " <<endl;
}

// top element
cout << st.top() << endl;

//peak
cout << st.top() << endl;


return 0;
}