/***
    7> Passing Array to the Function

***/
#include<iostream>
using namespace std;

void printFun(int a[], int n){

    // note here a[] is not an array it is a pointer(to the array) which store the base address of array arr[] (i.e address of arr[0])
    
    //cout<<sizeof(a)<<endl;


    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}

int main(){
    
    int arr[5] = {3,2,1,6,7};
    //cout<<sizeof(arr)<<endl;

    // passing array and its size to the function 
    printFun(arr,5); 
}