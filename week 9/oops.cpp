#include<iostream>
#include<string>

using namespace std;

class Student{
public:

    //add atttibutes
    int id;
    int age;
    string name;
    int nos;
    int *gpa;
// default constructor
Student(){
    cout << "Student Defalut ctor called " <<endl;
}
//Ctor: Parameterised constructor 

Student (int id, int age, string name, int nos, float gpa){
    cout << " Student Parameterised constructor called! " << endl;
    this->id = id;
    this->age = age;
    this->name = name;
    this->nos = nos;
    this->gpa = new int (gpa);

}

//Copy constructor 
Student (const Student &srcobj){ // by refference
    cout << " Student copy constructor called! " << endl;
    this->id = srcobj.id; // sarre obj ki copy karke new obj pe dalh nah hai
    this->age = srcobj.age;
    this->name = srcobj.name;
    this->nos = srcobj.nos;
}
// Behaviour / Methods / Function
void study(){
    cout << this->name << " Studing " << endl;
}

void bunk(){

    cout  << this->name  << " Bunking " << endl;
}

void sleep(){

cout << this->name << "Sleeping " << endl;

}
// disstructor
~Student(){
    cout << "Student Defalut dtor called! " <<endl;
    delete this->gpa; // jaruri hai memory leak nah ho
    }
};

int main(){

// Student A;
// A.id  = 1;
// A.name = "Rahul";
// A.nos = 6;
// A.age = 15;

// A.study();


// Student B;
// B.id  = 2;
// B.name = "Rehan";
// B.nos = 5;
// B.age = 15;

// B.bunk();

//Parameterised constructor 

// Student A(1, 16, "Rahul", 6);

// Student B(2, 17, "Yash", 4);

// Student C(3, 19, "Tina", 5);

// Student D(4, 21, "rehan", 6);

// cout << A.name << " " << A.age << endl;

// A.sleep();
// C.bunk();

// copy contructor
// Student C = A;
// cout << C.name << " " << A.name <<endl;

// Dynamic alloaction, or Student pointer;
Student *A = new Student(1, 14, "baban", 7, 9.4);
cout << A->name << endl;
cout << A->age << endl;

A->study();
delete A;
// stop calling distructor

 return 0;
}