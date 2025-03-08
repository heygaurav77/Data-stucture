#include<iostream>
using namespace std;




int main(){
//Inverted numaric Half Pyramid
// int  n;
// cout<< "Enter the value of n:  ";
// cin >> n;
// for (int row= 0; row<n; row++)
// {
//     for (int col = 0; col < n-row; col++)
//     {
//         cout << (col + 1) << "  ";
//     }
//     cout << endl;
// }


// Numaric Half Pyramid

//outer loop
// for (int row=0; row<n; row++)
// {
//     //inner loop
//     for (int col = 0; col <=row; col++){
//         cout << (col + 1)<< "  " ;
//     }
//     cout << endl;
// //1
// //1 2
// //1 2 3
// //1 2 3 4
// //1 3 3
// }


// Inverted Hollow Half Pyramid
// int n;
// cout << "Enter the value of n: ";
// cin >> n;

// //outer loop
// for (int row= 0; row<n; row++)
// {
//     // varriable column
//     for (int col = 0; col < n-row; col++)
//     {

//         if(row == 0 || row == n-1 || col == 0 || row + col == n-1){

//         cout << "* ";
//         }
//         else{
//            cout << "  ";
//         }
//     }
//     cout << endl;
// }

// Hollow Half Pyramid
// int  n;
// cout<< "Enter the value of n:  ";
// cin >> n;
// //outer loop
// for (int row=0; row<n; row++)
// {
//     //inner loop
//     int totalCol = row + 1;
//     for (int col = 0; col < totalCol; col++){
//         if(row == 0 || row == 1 || row == n-1){
//         cout << "* ";
//     }
//     else{
//         //middle rows
//         if(col == 0 || col == totalCol -1){
//             cout << "* ";
//         }
//          else{
//             //middle col
//             cout << "  ";
//          }
//     }
//     }
//     cout << endl;
    
// }


// Inverted half pyramid
// int n;
// cout << "Enter the value of n" <<endl;
// cin >> n;

// //outer loop
// for (int row= 0; row<n; row++)
// {
//     // varriable column
//     for (int col = 0; col < n-row-1; col++)
//     {
//         cout << "* ";
//     }
//     cout << endl;
// }


//Half pyramid
// int  n;
// cout<< "Enter the value of n "<<endl;
// cin >> n;
// //outer loop
// for (int row=0; row<n; row++)
// {
//     //inner loop
//     for (int col = 0; col <= row; col++){
//         cout << "* ";
//     }
//     cout << endl;
    
// }



//Hollow Square
// int n;
// cout << " Hollow Sqare " <<endl;
// cin >> n;
// //outer loop -> rows
// for (int row=0; row<n; row++)
// {
// //inner column count karna padhe gaa..
//     for (int col=0; col<n; col++){
//         //logic
//         if(row == 0 || row == n-1 || col == 0 || col == n-1 ){
//             cout << "* ";
//         }
//             else{
//                 // middle wali colmn
//                 cout <<"  ";
//     }
//         }
//     // ye mein vul jata hu
//     cout << endl;
//     }





return 0;
}






// Hollow rectangle
// int length;
// int width;
// cout << "Enter length "<<endl;
// cin >> length;

// cout<< "Enter width" <<endl;
// cin>> width;

// //Outer loop
//  for (int row = 0; row < length; row++) {
//         for (int col = 0; col < width; col++) {
//             // First row and last row - print all stars
//             if (row == 0 || row == length - 1) {
//                 cout << "* ";
//             } else {
//                 // Middle rows
//                 if (col == 0 || col == width - 1) {
//                     cout << "* ";
//                 } else {
//                     cout << "  "; // Two spaces for better alignment
//                 }
//             }
//         }
//         cout << endl;
//     }









// Square pattern
// row ka  loop outer
// column loop inner
// int rowname;
// int colname;
// cout << " Enter your square row" <<endl;
// cin >> rowname;

// cout<< "Enter your square col" <<endl;
// cin>> colname;


//  //outer loop
//  for (int  row=0; row<rowname; row++)
//     {
//     // inner loop
//     for( int col=0; col<colname; col++){
//         cout << "*  ";
//     }
//     cout << endl;
// }

//Retangle Pattern
// int length, width;
// cout << "Enter length "<<endl;
// cin >> length;

// cout<< "Enter width" <<endl;
// cin>> width;

// for (int  row= 0; row < length; row++)
// {
//     // inner loop
//     for( int col=0; col<width; col++){
//         cout << "* ";
//     }
//     cout << endl;
// }

//Nested Loop
// for(int i=1; i<=3; i++){
//     cout << i  << endl;
//     for(int j=1; j<=2; j++){
//         cout << "*";
//     }
//     cout << endl;
// }

