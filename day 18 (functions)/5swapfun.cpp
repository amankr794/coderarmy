#include<iostream>
using namespace std;

// pass by value
// void swap(int a, int b){
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }

//pass by refrence
void swap(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}

int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;

    cout<<"Before Swapping:\n";
    cout<<"a = "<<a<<" b = "<<b<<endl;

    //function call
    swap(a,b);

    cout<<"After Swapping:\n";
    cout<<"a = "<<a<<" b = "<<b;
}