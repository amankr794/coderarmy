/***
    5> Fibonacci Series 
       (using array)

***/
#include<iostream>
using namespace std;
int fibonacciSeries(int n){

    int arr[10000]; // considering that the nth fibonacci no. will not be greater than 10000

    //first element of series is 0
    arr[0]=0;
    
    //second element of series is 1
    arr[1]=1;

    for(int i=2; i<=n-1; i++){

        arr[i] = arr[i-1] + arr[i-2];
    }

    return arr[n-1];

}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The "<<n<<"th Fibonacci number is : "<<fibonacciSeries(n);
}