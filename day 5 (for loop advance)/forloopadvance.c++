/*************   Day 5/180  *************/

#include <iostream>
using namespace std;
int main()
{

    /**** 1> Printing number form 101 to 200 ****/
    // for(int i=101;i<=200;i=i+1)
    //     cout<<i<<endl;

    /**** 2> Printing characters from a to z ****/
    // for(char ch='a'; ch<='z'; ch=ch+1)
    //     cout<<ch<<endl;

    /**** 3> Printing n to 1 in reverse order ****/
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // run loop in reverse order from n to 1 and print it
    // for(cin>>n;n>0;n=n-1)
    //     cout<<n<<" ";

    // or
    //  for(int i=n;i>=1;i=i-1)
    //      cout<<i<<" ";

    // or run loop from 1 to n and then print it in reverse order
    //  cin>>n;
    //  for(int i=1;i<=n;i++)
    //      cout<<n-(i-1)<<" ";

    /**** 4> Printing number from 1 to 100 at increment of three (a.p series)*****/
    // for(int i=1;i<=100;i=i+3)
    //     cout<<i<<" ";

    /**** 5> Printing table of a no. *****/
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // for(int i=1;i<=10;i++)
    //     cout<<n<<'*'<<i<<'='<<n*i<<endl;

    // or
    //  for(int i=n; i<=10*n; i=i+n)
    //      cout<<i<<" ";

    /**** Calculate the power of a number (5^4 = 5*5*5*5)****/
    // int n,pow;
    // cout<<"Enter a number: ";
    // cin>>n;
    // cout<<"Enter power: ";
    // cin>>pow;
    // int ans=1;
    // for(int i=1; i<=pow ;i=i+1){
    //     ans=ans*n;
    // }
    // cout<<ans;

    // or
    //  int num=n;
    //  for(int i=1; i<pow; i=i+1)
    //      num=num*n;
    //  cout<<num;

    /**** Sum of n natural number (1+2+3+4+ ....)****/
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // int sum=0;
    // for(int i=1; i<=n; i++)
    //     sum=sum+i;
    // cout<<sum;

    // or better optimised code
    //  sum=(n*(n+1))/2;
    //  cout<<sum;

    /**** Sum of square of first n natural number (1^2+2^2+3^2+ ....)****/
    // int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // int sum=0;
    // for(int i=1; i<=n; i++)
    //     sum=sum+(i*i);
    // cout<<sum;

    /**** Factorial of a number (5! = 1*2*3*4*5) ****/
    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int fact = 1;
    // for (int i = 2; i <= n; i++)
    //     fact = fact * i;
    // cout << n << "! = " << fact;

    // note:Find the Factorial of a large number using Basic BigInteger
/*
        #include <bits/stdc++.h>
        using namespace std;

        #define ull unsigned long long

        // Returns Factorial of N
        ull factorial(int N)
    {

        // Initialize result
        ull f = 1; // Or BigInt 1

        // Multiply f with 2, 3, ...N
        for (ull i = 2; i <= N; i++)
            f *= i;

        return f;
    }

    // Driver method
    int main()
    {
        int N = 20;
        cout << factorial(N) << endl;
    }
*/

    
    /**** Check whether agiven no. is prime or not ****/
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // if(n<2){
    //     cout<<"Not Prime";
    //     return 0;
    // }
    // else{
    //     for(int div=2; div<n; div++){
    //         if(n%div==0)
    //         {
    //             cout<<"Not Prime";
    //             return 0;
    //         }
    //     }
    //     cout<<"Prime";
    // }


    /**** Nth term of Fibonacci series ( 0 1 1 2 3 5 8 13 21 ) ****/

    int n;
    cout<<"Enter the term: ";
    cin>>n;

    int lastTerm=0;
    int previousTerm=1;
    int currentTerm;

    if(n==1){
        cout<<lastTerm;
        return 0;
    }

    if(n==2){
        cout<<previousTerm;
        return 0;
    }

    for(int i=3; i<=n; i++){
        currentTerm=lastTerm+previousTerm;
        lastTerm=previousTerm;
        previousTerm=currentTerm;
    }

    cout<<currentTerm;

}
