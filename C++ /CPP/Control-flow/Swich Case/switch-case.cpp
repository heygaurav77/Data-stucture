#include <iostream>
using namespace std;

int main()
{

    // char grade;
    // cout << "Enter your grade" << endl;
    // cin >> grade;

    // if(grade == 'A') {
    //     cout << "Your marks will be in range of 90 to 100" <<endl;
    // }

    // else if( grade == 'B'){
    //     cout << "Your marks will be in range of 80 to 90" <<endl;
    // }
    // else if( grade == 'C'){
    //     cout << "Your marks will be in range of 70 to 80" <<endl;
    // }
    // else if( grade == 'D'){
    //     cout << "Your marks will be in range of 60 to 70" <<endl;
    // }
    // else if( grade == 'E'){
    //     cout << "Your marks will be in range of 0 to 60" <<endl;
    // }

    // switch (grade) {
    // case 'A':cout << "Your marks will be in range of 90 to 100" <<endl;
    //   break;
    // case 'B':cout << "Your marks will be in range of 70 to 80" <<endl;
    //   break;
    // case 'C':cout << "Your marks will be in range of 70 to 80" <<endl;
    //   break;
    // case 'D':cout << "Your marks will be in range of 60 to 70" <<endl;
    //   break;
    // default:cout << "Your marks will be in range of 0 to 60" <<endl;

    // }

//example
    int day = 3;

    switch (day) {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednessday" << endl;
        break;
    case 4:
        cout << "Thusday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;

    default: cout << "weekend" << endl;
        
    }

    return 0;
}