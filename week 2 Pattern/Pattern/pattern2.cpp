#include<iostream>
using namespace std;





int main(){



    
//Inverted Numaric Half Pyramid
//col + 1(must be)
//n - row (while inverted)
// int n;
// cout << "enter the value of N: ";
// cin >> n;

// // outer loop
// for (int row=0; row<n; row++)
// {
//     for (int col = 0; col<n-row; col++)
//     {
//         cout << (col + 1) << "  ";
//     }
//     cout << endl;
// }



//Numaric Half Pyramid
// col<=row 
// (col + 1)
// int n;
// cout << "Enter the value of N: ";
// cin >> n;

// //outer loop
// for (int row= 0; row<n; row++)
// {
//     for (int col = 0; col<=row; col++)
//     {
//         // inner loop
//         cout << (col + 1) << "  ";  ;
//     }
//     cout << endl;
// }



// Inverted Hollow Half Pyramid
// int n;
// cout << "Enter the value of hollow half pyramid: ";
// cin >> n;

// // outer loop
// for (int row=0; row<n; row++)
// {
//     // varriable column
//     for (int  col= 0; col< n-row; col++)
//     {
//         if(row == 0 || col == 0 || row == n-1 || col + row == n-1){
//            cout << "* ";
//         }
//         else{
//             cout << "  ";
//         }
//     }
//     cout << endl;
// }




// Inverted half pyramid
//n-row-1
// int n;
// cout << "Enter the value of N: ";
// cin>> n;

// //outer loop
// for (int row=0; row<n; row++)
// {
//     //inner loop
//     for (int  col = 0; col<n-row-1; col++)
//     {
//         cout << "* ";
//     }
//     cout << endl;
// }




//Half pyramid
//col<=row
// int n;
// cout << "Enter the value of N: ";
// cin>> n;

//    // outer loop
// for (int row= 0; row < n; row++)
// {
//    //inner loop
//    for (int col = 0; col<=row; col++)
//    {
//       cout << "* ";
//    }
//    cout << endl;
// }



// Inverted half pyramid 
//n-row  
// int n;
// cout << "Enter the value: ";
// cin >> n;

// //outer loop
// for (int row=0; row<n; row++)
// {
//     for (int col=0; col<n-row; col++)
//     {
//         cout << "* ";
//     }
//     cout << endl;
// }



// Hollow Square
//col < n
// int n;
// cout << "Enter the Square value: ";
// cin >> n;
// // Outer loop
// for (int row = 0; row < n; row++)
// {   //inner loop
//     for (int  col=0; col<n; col++)
//     {
//         cout << "* ";
//     }
//     cout << endl;
// }

return 0;
}