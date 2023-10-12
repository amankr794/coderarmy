/*** 
    Function Overloading: Means function having same name but different in arguments/parameters 
    
    * Type of argument is diffefernt, or
    * No. of arguments are different

***/

#include<iostream>
using namespace std;

void Swap(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}

void Swap(float &a, float &b){   //function overload
    float c;
    c=a;
    a=b;
    b=c;
}

int main(){
    int a,b;
    cout<<"Enter two number:\n";
    cin>>a>>b;

    cout<<"Before Swapping:\n";
    cout<<"a = "<<a<<" b = "<<b<<endl;

    //function call
    Swap(a,b);

    cout<<"After Swapping:\n";
    cout<<"a = "<<a<<" b = "<<b<<endl<<endl;


    float f1=3.8, f2=4.6;

    cout<<"Before Swapping:\n";
    cout<<"f1 = "<<f1<<" f2 = "<<f2<<endl;

    //function call
    Swap(f1,f2);

    cout<<"After Swapping:\n";
    cout<<"f1 = "<<f1<<" f2 = "<<f2;

}


