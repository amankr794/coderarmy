/***
    7: Complement of base 10 integer
 
    https://leetcode.com/problems/complement-of-base-10-integer/description/

 ***/

//  int bitwiseComplement(int n) {
        
//         //egde case
//         if(n==0)
//             return 1;

//         int ans = 0, mul=1, rem; //(remander means bits)

//         while(n){

//             //finding bits
//             rem = n%2;

//             //taking complement of remainder(i.e bits) using xor with 1
//             rem = rem ^ 1;

//             n/=2;

//             //ans formula
//             ans = ans + rem * mul;

//             //update multiplier
//             mul*=2; 
//         }
//         return ans;
//     }