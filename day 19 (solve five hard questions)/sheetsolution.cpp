/***
    Q1> Distribute in a circle 
 
    Link : https://www.interviewbit.com/problems/distribute-in-circle/ 

***/

int Solution::solve(int A, int B, int C) {
//Method - 1 (using loop)  run for lower values but not for bigger values
  
    // int startingpos = C; // starting position where initially the first item is deliverd
    // int endpos = B;      // end position
    
    // // in ordered to delivered A items for loop will run A no. of times
    // for(int i=1; i<=A; i++){
        
    //     // reset the startingpos to 1 if startingpos > endpos
    //     if(startingpos > endpos)
    //         startingpos = 1;
            
    //     //cout<<i<<" th item positioned at "<<startingpos<<endl;    
        
    //     startingpos++;
    // }
    // return startingpos-1;
    
    
    //Method - 2 (optimal)
    return (C + A -1)%B;
    
}
 

/*** 
    Q2> Number of 1 bits  &   Q3> Count set bits
       
   Link: https://practice.geeksforgeeks.org/problems/set-bits0143/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab


   Link: https://practice.geeksforgeeks.org/problems/set-bits0143/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

***/
//METHOD - 1
int setBits(int N) {
        
    int count = 0; // to store the count of set bit  
    while(N>0){
            
        // int rem = N%2;
        // count = count + rem;
        count = count + (N%2);
        N = N/2;;
    }
    return count;
}

//METHOD - 2
//  int setBits(int N) {
        
//     int count = 0; // to store the count of set bit
        
//     while(N!=0){
            
//         if(N&1)
//             count++;
            
//         N >>= 1;
//     }
//     return count;
// }


//OR
//  int setBits(int N) {
        
//     int count = 0; // to store the count of set bit
        
//     while(N>0){
            
//         count += (N&1);
//         N >>= 1;
//     }
//     return count;
// }

//METHOD - 3 using inbuilt function of cpp
// int setBits(int N) {
//     return __builtin_popcount(N);
// }



/***
    Q4> Bit Difference
    
    Link: https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab


    Logic : If we will take the xor of both numbers all bits that are different will become set, then,
            we can count all set bits in the xor value.
            
            For ex :
            A : 5 = 101 and B : 4 = 100 to convert 5 to 4 we need to change the last bit only
            Using xor 5^4 = 101^100 = (001) = in this we can see last bit is only set because it was
            the only one that is different
            XOR table : 5 : 1 0 1
            4 : 1 0 0
            Ans: 0 0 1
  
***/
int countBitsFlip(int a, int b){
        
    // Your logic here
    int ans = a^b;
        
    int count = 0;
        
    while(ans!=0){
            
        if(ans&1)
            count++;
            
        ans>>=1; 
    }
    return count;
        
}

//or using inbuilt function of cpp
// int countBitsFlip(int a, int b){
        
//     int ans = a^b;
//     return (__builtin_popcount (ans));
// }



/**
    Q5> Find 5 inbuilt functions in c++ like min or max etc and write a code around them.

***/
#include<iostream>
#include<cmath>
#include <algorithm> 
using namespace std;
int main(){

    /* i> pow() */
    // double a = 2.0, b=3.0;
    // double result = pow(a,b);
    // cout<<result<<endl;

    /* ii> sqrt() : This function helps to find the square root of any number */
    // int x = 24;
    // double res = sqrt(24);
    // cout<<res<<endl;
    // cout<<sqrt(16)<<endl; 

    /* 
        iii> gcd() : This function is used to find the GCD of two numbers. It takes two values of the same data type as arguments and returns the GCD of them.
    
    //This function is defined in algorithm header file for C++14
    //#include <algorithm>
    //#include <numeric> (for C++17)

    //Syntax:
    // __gcd(value1, value2);  [for C++14]
    // gcd(value1, value2);   [for C++17]

    */

    int x = 6, y = 20; 
    int ans = __gcd(x, y); 
    // int ans = gcd(a, b) for C++17 
  
    cout << "gcd(6, 20) = " << ans << endl; 


    /*
        iv> floor() : This function returns the largest possible integer value which is less than or equal to a given argument. It takes a floating number as an argument and returns an integer value.
    */

    cout << "Floor is: " << floor(2.3) << "\n"; 
    cout << "Floor is: " << floor(-2.3) << "\n"; 


    /*
        v> Ceil() : This function is just the opposite of floor(), It returns the smallest possible integer value which is greater than or equal to the given argument. It takes a floating value as an argument and returns an integer value.
    */

    cout << " Ceil is: " << ceil(2.3) << "\n"; 
    cout << " Ceil is: " << ceil(-2.3) << "\n"; 

}


/**
    6> Learn C++ from here and revise it on weekend

    link : https://www.w3schools.com/cpp/

***/