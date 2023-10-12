/** built in swap() function **/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two number:\n";
    cin>>a>>b;

    cout<<"Before Swapping:\n";
    cout<<"a = "<<a<<" b = "<<b<<endl;

    //function call
    swap(a,b);

    cout<<"After Swapping:\n";
    cout<<"a = "<<a<<" b = "<<b<<endl<<endl;


    float f1=3.8, f2=4.6;

    cout<<"Before Swapping:\n";
    cout<<"f1 = "<<f1<<" f2 = "<<f2<<endl;

    //function call
    swap(f1,f2);

    cout<<"After Swapping:\n";
    cout<<"f1 = "<<f1<<" f2 = "<<f2;

}
