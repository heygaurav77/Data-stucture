#include<iostream>
#include <algorithm>

using namespace std;

// Find maximum value
int getMax(int num[], int n) {
    int max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if(num[i] > max) {
            max = num[i];
        }
    }
    // return max value
    return max;
}

// Find minimum value
// int getMin(int num[], int n) {
//     int min = INT_MAX;

//     for (int i = 0; i < n; i++) {
//         // Corrected comparison: finding the smallest value
//         if(num[i] < min) {
//             min = num[i];
//         }
//     }
//     // return min value
//     return min;
// }

int main() {
    int size;
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    // Display maximum and minimum values
    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;
}
