/*** Void Return Type ***/

#include<iostream>
using namespace std;

void isPrime(int n){   // n is parameter

    //explicitly checking for no. less than 2
    if(n<2){
        cout<<0<<endl;
        return ;         // no any value return only control return
    }

    for(int div=2; div<n; div++){

        if(n%div==0){
            cout<<0<<endl;
            return ;       // no any value return only control return
        }
    }
    cout<<1<<endl;
    return ;              // no any value return only control return
}
int main(){

    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;

    /** function call **/

    //a is prime or not
    //cout<<isPrime(a)<<endl;     // error   
    isPrime(a);   
    
    //b is prime or not
    //cout<<isPrime(b)<<endl;     // error 
    isPrime(b);

    //a-b is prime or not
    //cout<<isPrime(a-b)<<endl;     //error
    isPrime(a-b);
    
    //b-a is prime or not
    //cout<<isPrime(b-a)<<endl;     //error
    isPrime(b-a);

}