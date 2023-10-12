/*** 
    There are two ways to pass value/arguments to the function
    i> Pass by value
    ii> Pass by refrence
***/

#include<iostream>
using namespace std;

//increment function
void Incer(int n1, int &n2){
    cout<<"Inside Increment Function: ";
    n1++;
    n2++;
    cout<<n1<<" "<<n2<<endl;
}

int main(){

    int a=10, b=11;
    Incer(a,b);

    cout<<"Inside main Function: ";
    cout<<a<<" "<<b;
}

// pass by value : me actual value pass nahi hoti hai, me copy create hoti hai, so changes are not reflected in the actual value
// pass by reference : me actual value pass hoti hai , koi copy create nahi hoti hai, so changes are reflected in the actual value