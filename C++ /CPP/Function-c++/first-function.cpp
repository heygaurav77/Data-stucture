#include<iostream>
using namespace  std;

int getMultiplication(int x, int y, int z){

    int result = x * y * z;
    return result ;
}

void printNameTenTimes(){
    for (int i = 0; i <= 10; i++)
    {
        cout << "Gaurav" << " ";
    }
    
}

// another example
void printMultiples(int num){
     for (int i = 1; i <= 10; i++)
     {
        cout<< num * i << endl;
        
     }
     
}
// f to celsius
int convertIntoCelcius(int far){
    int celcius = (far-32)*5/9;
    return  celcius;
}

// char return to Upper case
char convertIntoUppercase (char ch){
    char answer = ch -'a' + 'A';
    return answer;
}
// void me with value return send nahi kar sakta but without value send karsakte ho;


int main(){

// function call 
//   int multiplication = getMultiplication(5, 4, 3) arguments;
//   cout << multiplication << endl;

//void Function call
//  printNameTenTimes();


// 5 ke table print karo
// int multiple = 5;
// printMultiples(multiple);

// far = arguments
// int far = 32;
// int  ans = convertIntoCelcius(far);
// cout << "In celcius: " << ans << endl;


// uppercase 

char result = convertIntoUppercase('k');
cout << result << endl;

    return 0;
}


