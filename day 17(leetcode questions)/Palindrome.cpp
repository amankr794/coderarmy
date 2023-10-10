/***
    6: Palindrome Number

    https://leetcode.com/problems/palindrome-number/
 * ***/

//  bool isPalindrome(int x) {
//         int temp=x;

//         // checking if the number is -ve number
//         if(temp<0)
//             return false;


//         int ans=0,digit; 
//         while(temp!=0){
            
//             // extract the last digit
//             digit=temp%10;

//             //shrink the number by eliminating the last digit
//             temp/=10;

//             //checking overflow 
//             if(ans > INT_MAX/10)
//                 return 0;
            
//             // append the last digit
//             ans = ans*10+digit;
//         }

//         if(ans==x)
//             return true;
//         else
//             return false;
//     }