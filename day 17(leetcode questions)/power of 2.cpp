/****
      4: Power of Two
      
      https://leetcode.com/problems/power-of-two/
***/


/** 1st logic : using binary form representation of number **/
// bool isPowerOfTwo(int n) {
        
//     // -ve no and zero 2 ki power me nahi aate hai so ignore -ve no and 0.
//     // Hmko sirf +ve no. ko check karna hai are they represented as power of 2 or not.

//     if(n<1)
//         return false;

//     // a/q to logic of binary form of number
//     while(n != 1){

//         //check whenever if remainder is 1, return false;
//         if(n%2==1)
//             return false;
            
//             //if remainder comes zero go to next number
//         n/=2;
            
//     }

//     //comes here means number will be 1 (n=1) means only last wali bits 1 aayi hai baki sari bits 0 hai
//     // so return true that number will be the power of 2.
//     return true;
// }


/** 
    2nd logic : Find the power of two from 2^0 to 2^30 and  compare with given number if any number match with the power that  number will be the power of 2 
**/

bool isPowerOfTwo(int n) {
        
    //     for(int i=0; i<=30; i++){
            
    //         int ans = pow(2,i);
            
    //         if(ans == n){
                
    //             return true;
    //         }
      
    //     }
    //     return false;

}