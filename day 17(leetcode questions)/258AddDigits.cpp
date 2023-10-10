/*  
    https://leetcode.com/problems/add-digits/
    
    Q> Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

    Example 1:                                    Example 2:

    Input: num = 38                               Input: num = 0
    Output: 2                                     Output: 0
    Explanation: The process is
    38 --> 3 + 8 --> 11
    11 --> 1 + 1 --> 2 
    Since 2 has only one digit, return it.
*/

#include<bits/stdc++.h>
using namespace std;

int addDigits(int);

int main(){
    
    int num;
    cin>>num;

    int ans = addDigits(num);
    cout<<ans;

}

int addDigits(int num){

/**** Brute Force ****/
    
    // while(1)
    // {   
    //     // stopping condition (when num have single digit)
    //     if(num>=0 && num<=9)
    //         return num;


    //     int sum=0,digit;
    //     while(num!=0){
            
    //         // extract digit from number
    //         digit = num%10;

    //         // maintain sum of digit of number
    //         sum = sum+digit;

    //         // shrink the number
    //         num/=10;
    //     }

    //     //update num by sum (we get our new number)
    //     num=sum;

    //     //checks if this num have one or more digits in it. if num has only one digit return that digit as ans .
    //     //and if num has more than one digit then repeat the process to find the sum of all of digit of num
    //     //then update num by sum
    // }


    // while(num>9) //stopping condition (num > 9 means number containing more than one digit )
    // {   
        
    //     int sum=0,digit;

    //     while(num!=0){
            
    //         // extract digit from number
    //         digit = num%10;

    //         // maintain sum of digit
    //         sum = sum+digit;

    //         // shrink the number
    //         num/=10;
    //     }
            
    //         num=sum;
    // }
    // return num;


/**** Better Approach (Logic-2)****/
/*
    *  The ans is the remainder of the division of the number with 9
    * Unless remainder is 0 then the ans is 9
    * We need to be carefull of the 0 case, where the ans is 0

		if num==0  
			ans is 0
		else if num%9==0
			ans is 9
		else 
			ans is num%9;

*/

    // 0(1) time
    // if(num == 0)
    //     return 0;
    // return num%9 == 0 ? 9 : num%9;

    //The edge cases can be taken care of by the following clever trick, to make it a one liner
    //We find the modulo 9 of the previous number and add one to it
        return 1 + (num - 1) % 9;
};
