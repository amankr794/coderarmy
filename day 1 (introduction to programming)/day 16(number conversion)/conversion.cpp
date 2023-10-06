/*** 1> Decimal to Binary Conversion ***/

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int num;

//     // Get input number from user
//     cin>>num;

//     int ans=0, mul=1, bits;

//     // while(num!=0){

//     //     //remainder part
//     //     bits = num%2;

//     //     //ans part
//     //     ans+ = bits * mul;        //ans=bits*mul+ans;

//     //     //quotient part (shrink the number)
//     //     num/=2;

//     //     //multiply update
//     //     mul*=10;
//     // }
//     // cout<<ans;

//     /** using bitswise operator **/
//     // while(num!=0){

//     //     //remainder part  (evenno. & 1 = 0  and oddno. & 1 = 1)
//     //     bits = num & 1;

//     //     //ans part
//     //     ans+ = bits * mul;;

//     //     //quotient part (divide by 2 means right shits by 1)
//     //     num>>=1;       //num=num>>1

//     //     //multiplier update
//     //     mul*=10;
//     // }
//     // cout<<ans;

//     /** using single line by setting flag to bitset **/
//     // cout << bitset<32>(num);

//     return 0;
// }

/*** 2> Binary to decimal Conversion ***/
#include <iostream>
using namespace std;
int main()
{
    int num;

    // Get input number from user
    cin>>num;

    int ans=0, mul=1, bits;

    while(num!=0){

        // get last digit of number (remainder)
        bits = num%10;

        //ans part
        ans += bits * mul;     //ans = ans + bits * mul

        //delete last digit (shrink the number)
        num/=10;

        //multiplier update
        mul*=2;
    }

    cout<<ans;

}


/* 
    i> Think about binary to hexadecimal coversion
    ii> -ve decimal no. to binary conversion

*/