#include<iostream>
using namespace std;

int main(){

int a = 5;
cout << a << endl;
cout << (++a) << endl;
// a ki value 6 ho chuka ha
cout << (a++) << endl;
// check a ki value
cout << a << endl;
// yeh pe a ki value 7 
cout << (--a) << endl;
// a ki value 6 ban gya
cout << (a--) << endl;
// a ki value 6 hi hoga, but value 5 ban gya
cout << a << endl;
// check a ki value
 return 0;
}