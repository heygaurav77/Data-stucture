#include<iostream>
using namespace std;

void printArray(int arr[], int size){
  //print the array
  cout << "Printing the array " << endl;
  for (int i = 0; i < size; i++){
     cout << arr[i] << " ";
  }
  cout << "Printing Done" <<endl;
  
}


int main(){
   
 //declare
 int number[15];

 //acceing on my array
  cout << endl << "Your at 10 index: " << number[10] << endl;

  // cout << endl << "Your at 20 index: " << number[20] << endl;

  // intiliazing an array
  int second[3] = {5, 7, 11};
  cout << endl << "Value at 2nd index: " << second[2] << endl;

  int third[16] = {1, 7};
  //print the array
  int n = 15;
  // printArray(third, 15);
  
// intilize all 0
 int fourth[10] = {0};
  // printArray(fourth, 15);

  //intilizing with all location 1
  int fifth[10] = {1};
  // printArray(fifth, 15);
     
    //  int fifthSize = sizeof(fifth)/sizeof(int);
  
  //Chracter array
  char ch[5] = {'a', 'b', 'c', 'r'};
  cout << ch[0] << endl;

  cout << "Printing the array " << endl;
    //print the array
  for (char i = 0; i < 5; i++){
     cout << ch[i] << " ";
  }
  cout <<endl<< "Printing Done" <<endl;

   //Double array 
  double PrintDouble[5];
  
  float PrintFloat[10];

  bool PrintBool[15];



  cout << endl << "Everything is Fine... " << endl;

     return 0;
}