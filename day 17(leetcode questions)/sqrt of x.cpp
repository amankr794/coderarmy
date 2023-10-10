/*** 
    5: Sqrt(x)
 
     https://leetcode.com/problems/sqrtx/description/
***/

//  int mySqrt(int x) {
        
//         /* 

//             * square root = i when i*i == num
//             * square root = i-1 when i*i > num
        
//         */
//         unsigned long long int mul,ans;
//         for( int i=0; i<=x; i++)
//         {
//             //mul=i*i;         overflow error /
//             mul=i*1ll*i;

//             if(mul==x)
//             {
//                 ans=i;
//                 break;
//             }
//             else if(mul>x)
//             {
//                 ans= i-1;
//                 break;
//             }
//         }
//         return ans;
//     }