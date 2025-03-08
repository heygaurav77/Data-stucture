//TYPECASTING 
// int/int  = int
// float/int = float
//double/int = double
#include<iostream>
using namespace std;
// Implicit Type Casting : Automatic type casting

int main(){
//1. int to float 
// int num1 = 10;
// float num2 = 5.5;
// int result = num1 + num2;
// //float 
//  cout << result << endl;

//2. Char to int
// char ch = 'A';
// char a = ch + 1;
// cout << a << endl;

//3. int to char
// int a = 97;
// char ch = a;
// cout<<ch<< endl;


// char g = 'B';
// int gg = g;
// cout << gg << endl;


// Explicit Type Casting : manual type conversion
// Ypou use the casting opertor, which is repsented by perenthess containg the target dattype

// int num1 = 10;
// float num2 = 5.5;
// float result = num1 + (int)num2;
// cout << result << endl;

// float to char
// float  floatingNumber = 65.78;
// char charvalue = (char)floatingNumber;
// cout << charvalue << endl;

// int to float
int a = 10;
int b = 3.0;
float c = a/(float(b));
cout << c << endl;


 return 0;
}
