/*** Sheet Solutions ***/

#include<iostream>
using namespace std;

// /** 1> : Find the cube of a number using Function. **/
//  Function to calculate the cube of a number

// int Cube(int num){
//     int ans = num*num*num;
//     return ans;
// }


/** 2: Reverse a number n using Function, Constraints: -5000<=n<=5000 **/
// Function to reverse a number

// int Reverse(int n){

//     int ans=0,rem;

//     while(n){
//         rem=n%10;
//         n/=10;
//         ans = ans*10+rem;
//     }
//     return ans;
// }

/** 
    3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
**/
// Function to swap the values of three variables

void Swap(int &a, int &b, int &c){

    int temp=c;
    c=b;      //putting value of b into c
    b=a;     //putting value of a into b
    a=temp;  //putting value of c into temp
}


/** 4: Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000. **/
// Function to swap the values of twovariables

void Swap(int &a, int &b){

    a=a+b;
    b=a-b;
    a=a-b;

}


/** 5: Print “Hello Coder Army” n times using Function. **/
// Function to print a message n times

void Print(int n){
    for(int i=1; i<=n; i++)
        cout<<"Hello Coder Army\n";
}


/** 6: Given two numbers n, r. Find nCr (Combination). Use Function here. **/

// Function to calculate the factorial of a number
long long factorial(int n){

    if(n==0)
        return 1;

    long long fact=1;
    for(int i=2; i<=n; i++)
        fact = fact * i;

    return fact;
}

// Function to calculate nCr
long long calculateCombination(int n, int r){

    if(n<r)
        return 0; // Invalid input, n should be greater than or equal to r
    
    long long numerator = factorial(n);
    long long denominator = factorial(r) * factorial(n - r);

    return numerator/denominator;


}

int main(){

    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;

    // Cube() function call
    // cout<<"cube of "<<num<<" = "<<Cube(num);

    // Reverse() function call
    //cout<<"Reverse of "<<num<<" = "<<Reverse(num);

    // int a,b,c;
    // cout<<"Enter Three Numbers: ";
    // cin>>a>>b>>c;
    // cout<<"Before Swapping:\n" <<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;

    // // Swap() function call
    // Swap(a,b,c);
    // cout<<"After Swapping:\n" <<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;

    // int a,b;
    // cout<<"Enter Two Numbers: ";
    // cin>>a>>b;
    // cout<<"Before Swapping:\n" <<"a = "<<a<<" b = "<<b<<endl;

    // // Swap() function call
    // Swap(a,b);
    // cout<<"After Swapping:\n" <<"a = "<<a<<" b = "<<b<<endl;

    // int num;
    // cout<<"Input the number of times to print the message:";
    // cin>>num;
    // // print() call
    // Print(num);

    int n,r;
    // Input values of n and r
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    // Calculate and display nCr
    long long nCr = calculateCombination(n, r);
    cout<<"C(" << n << ", " << r << ") = " << nCr << endl;

    



}