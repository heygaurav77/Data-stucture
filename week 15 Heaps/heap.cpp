#include<iostream>
using namespace std;

class Heap{
    public:
    int *arr;
    int capacity;
    //size
    int size;

    Heap(int capacity){
      this-> capacity = capacity;
      arr = new int[capacity];
      size = 0;

    }
    void insert (int val){
        if(size == capacity){
            cout << " OVERFLOW " <<endl;
            return;
        }
        //step 1 
        size++;
        int index = size;
        arr[index] = val;

        // step 2 -> heapyfy
        while(index > 1){
            int parentIndex = index/2;
            if(arr[index] > arr[parentIndex]){
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else{
                return;
            }
        }
    }
    int deletFromHeap(){
   // root node only del
     arr

    }
};




int main(){

int arr[] =  { 60, 55, 50, 40, 30, 20, 10};

   return 0;
}
