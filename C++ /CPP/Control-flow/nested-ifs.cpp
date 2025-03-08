#include<iostream>
using namespace std;

int main(){

    int height;
    cout<< "Enter Your weight " <<endl;
    cin >> height;

    int weight;
    cout<< "Enter your Weight " << endl;
    cin >> weight;


    if( height > 5){

        if(weight > 70) {
            cout << " You got a good BMI" <<endl;
        }

        else {
            cout << "bhai tuj se nah ho payea gaa" <<endl;
        }
    }

    else{

        cout << " Complain dila du " <<endl;
    }

 return 0;
}