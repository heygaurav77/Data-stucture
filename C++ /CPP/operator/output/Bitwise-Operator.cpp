#include<iostream>
using namespace std;
//Bitwise: value pe kam nahi karte te bit level pe kam karte hai
// & : if you give me 1 and 1 then i will  give you 1
//   : if you give me 0 and 1 then i will give you 0

// | : if you give me one 1  then you got 1 
//   : if you give all zero then you got 0

// ~ (tilda) : yeh uske sare bit ko flip kar dega
// << (left shift): har ek bit ko ek ek kar ke left pe shift karduga(*2)
// >> (right shift): saree bit ek ek kar ke right pe shift karduga(/2)
// ^ (xor / exclusive OR): agar dono bit same hai ans "Zero" ayega
//                       : agar dono bit se ek differnt hai toh 1 ayega
int main(){

cout << (~1) << endl;
cout << (~4) << endl;

// left shift like 5 * 2
cout << (5 << 4) << endl;
//right shift like 1 / 2
cout << (100 >> 3) << endl;

 return 0;
}