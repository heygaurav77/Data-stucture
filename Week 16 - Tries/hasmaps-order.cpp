#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;


int main(){
//Cration map
unordered_map<int,string> uMap;
map<int,string> oMap;

//insertion
uMap[2] = "Bugatti Chiron";
uMap[3] = "Koenigsegg Jesko";
uMap[1] = "Porsche 911";

oMap[2] = "Koenigsegg Jesko";
oMap[3] = "Porsche 911"; 
oMap[1] = "Bugatti Chiron";

for(auto i: uMap){
    cout << i.first << "->" << i.second << endl;
}

//Searching for Hashmaps
//1. Count Func()
//2. Find Func()
  

//1. Count Func()
if(uMap.count(3) == 0){
cout <<"error item not found"<<endl;
} else{
    cout <<"item found"<< endl;
}

//2. Find Func()
if(uMap.find(5) == uMap.end()){
  cout <<"error item not found"<<endl;
} else{
    cout <<"item found"<<endl;
}







    return 0;
}