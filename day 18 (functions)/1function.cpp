/***          Function Definition Syntax 
  
        return_type function_name( parameter1, parameter2, ...)
        {
            {
                //code part
            }
            
            return value
        }
***/

#include<iostream>
using namespace std;

/*** 1> Function to check num is prime or not ***/
bool isPrime(int n){   // n is parameter

    //explicitly checking for no. less than 2
    if(n<2)
        return 0;

    for(int div=2; div<n; div++){

        if(n%div==0)
            return 0;
    }
    return 1;
}

/*** 2> Function to find factorial of a number ***/
int fact(int n){     // n is parameter
   
   if(n<0)
    return 0;

    int ans=1;
    for(int i=2; i<=n; i++)
        ans = ans * i;
    
    return ans;
}

/*** 3> Function to find sum of two number ***/
int sum(int n1, int n2){     // n1, n2  is  multiple parameter

    int ans = n1 + n2;
    return ans;
}

/*** 4> Function to find mul of two number ***/
int mul(int n1, int n2){

    int ans = n1 * n2;
    return ans;
}

/*** 5> Function to print something ***/
void fun(){
    cout<<"Hello Coder Army\n";
}


int main(){

    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;

    /** function call **/

    // cout<<isPrime(a)<<" "
    //     <<fact(a)<<endl
    //     <<isPrime(b)<<" "
    //     <<fact(b)<<endl
    //     <<isPrime(a-b)<<" "
    //     <<fact(a-b)<<endl
    //     <<isPrime(b-a)<<" "
    //     <<fact(b-a);

    //a is prime or not
    cout<<isPrime(a)<<endl;        // a is argument
    // factorial of a
    cout<<fact(a)<<endl;
    //b is prime or not
    cout<<isPrime(b)<<endl;       // b is argument
    // factorial of b
    cout<<fact(b)<<endl;
    //a-b is prime or not
    cout<<isPrime(a-b)<<endl;     // a-b is argument
    // factorial of a-b
    cout<<fact(a-b)<<endl;
    //b-a is prime or not
    cout<<isPrime(b-a)<<endl;     // b-a is argument
    // factorial of b-a
    cout<<fact(b-a)<<endl;
    // sum of a and b
    cout<<"sum = "<<sum(a,b)<<endl;    // a,b is argument
    // multiplication of a and b
    cout<<"multiplication = "<<mul(a,b)<<endl;
    
    // printing only name
    // cout<<fun();  //generate error
    fun();
}