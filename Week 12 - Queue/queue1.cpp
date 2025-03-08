#include<iostream>
#include<queue>
using namespace std;

int main(){
deque<int> dq;

//insertion
dq.push_front(10);
//10
dq.push_front(30);
//30
dq.push_front(50);
//50




dq.push_back(70);

dq.push_back(100);

cout << dq.size() <<endl;
cout << dq.empty() <<endl;
cout << dq.front() <<endl;
cout << dq.back() <<endl;

//removal
dq.pop_front();
cout << dq.empty() << endl;

dq.pop_back();
cout << dq.back() <<endl;
return 0;
}