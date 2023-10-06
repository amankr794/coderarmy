/*** 1> Write a program to convert binary numbers to decimal numbers using a for loop ***/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;

//     // Get input number from user
//     cout<<"Enter Binary Number: ";
//     cin>>num;

//     int ans=0, mul=1, bits;

//     for(num; num != 0; /* num/=10 */){

//         // get last digit of number (remainder)
//         bits = num%10;

//         //ans part
//         ans += bits * mul;     //ans = ans + bits * mul

//         //delete last digit (shrink the number)
//         num/=10;

//         //multiplier update
//         mul*=2;
//     }

//     cout<<"The decimal equivalent is: "<<ans;

// }



/*** 2> Write a program to convert decimal numbers to binary numbers using a for loop  ***/

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     // int num;

//     // Get input number from user
//     // cout<<"Enter Decimal Number: ";
//     // cin>>num;

//     // int ans=0, mul=1, bits;

//     // for(num; num!=0; /*num/=2*/ ){

//     //     //remainder part
//     //     bits = num%2;

//     //     //ans part
//     //     ans += bits * mul;        //ans=bits*mul+ans;

//     //     //quotient part (shrink the number)
//     //     num/=2;

//     //     //multiplier update
//     //     mul*=10;
//     // }
//     // cout<<"The binary equivalent is: "<<ans;


//     /** using bitswise operator **/

//     // for(num; num!=0; /* num>>=1 */){

//     //     //remainder part  (evenno. & 1 = 0  and oddno. & 1 = 1)
//     //     bits = num & 1;

//     //     //ans part
//     //     ans += bits * mul;;

//     //     //quotient part (divide by 2 means right shits by 1)
//     //     num>>=1;       //num=num>>1

//     //     //multiplier update
//     //     mul*=10;
//     // }
//     // cout<<"The binary equivalent is: "<<ans;


//     /** using single line by setting flag to bitset **/
//     // cout <<"The binary equivalent is: "<<bitset<32>(num);

//     // return 0;
// }



/*** 3> Write a program to convert decimal numbers to Octal numbers ***/

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int num;

//     // Get input number from user
//     cout<<"Enter Decimal Number: ";
//     cin>>num;

//     int ans=0, mul=1, rem;

//     for(num; num!=0; num/=8){

//         //remainder part
//         rem = num%8;

//         //ans part
//         ans += rem * mul;        //ans=rem*mul+ans;

//         //quotient part (shrink the number)
//         //num/=8;

//         //multiplier update
//         mul*=10;
//     }
//     cout<<"The octal equivalent is: "<<ans;


//     /** using single line by setting flag to oct **/
//     // cout <<"The octal equivalent is:" <<oct << num;

//     return 0;
// }



/*** 4> Write a program to convert Octal numbers to decimal numbers ***/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;

//     // Get input number from user
//     cout<<"Enter Octal Number: ";
//     cin>>num;


//     int ans=0, mul=1, rem;

//     for(num; num != 0; num/=10){

//         // get last digit of number (remainder)
//         rem = num%10;

//         //ans part
//         ans += rem * mul;     //ans = ans + rem * mul

//         //delete last digit (shrink the number)
//         //num/=10;

//         //multiplier update
//         mul*=8;
//     }

//     cout<<"The decimal equivalent is: "<<ans;

// }



// /*** 5> Write a program to convert binary to Octal numbers ***/

// #include <iostream>
// using namespace std;
// int main()
// {

//     /*
//         Approach:  1st convert binary to decimal
//                    then convert decimal to octal
//     */
    
//     int num;

//     // Get input number from user
//     cout<<"Enter Binary Number: ";
//     cin>>num;

//     // First Step: coverting binary to decimal
//     int ans=0, mul=1, bits;
//     for(num; num != 0; /* num/=10 */){

//         // get last digit of number (remainder)
//         bits = num%10;

//         //ans part
//         ans += bits * mul;     //ans = ans + bits * mul

//         //delete last digit (shrink the number)
//         num/=10;

//         //multiplier update
//         mul*=2;
//     }

//     // ans consist the decimal equivalent of given binary


//     // Second Step : coverting decimal to octal
//     int num_2 = ans; // assigning previous 'ans' value to num_2
//     int ans_2 = 0, mul_2 = 1, rem;

//     for(num_2; num_2!=0; num_2/=8){

//         //remainder part
//         rem = num_2%8;

//         //ans part
//         ans_2 += rem * mul_2;        //ans=rem*mul+ans;

//         //quotient part (shrink the number)
//         //num_2/=8;

//         //multiplier update
//         mul_2*=10;
//     }
//     cout<<"The octal equivalent is: "<<ans_2;

//     return 0;

// }


/*** 6> Write a program to convert to Octal number to binary ***/

/*
    Approach: 1st convert Octal to decimal
              then convert decimal to binary
*/

#include <iostream>
using namespace std;
int main()
{
    int num;

    // Get input number from user
    cout<<"Enter Octal Number: ";
    cin>>num;

    // First Step: coverting Octal to decimal
    int ans=0, mul=1, rem;

    for(num; num != 0; num/=10){

        // get last digit of number (remainder)
        rem = num%10;

        //ans part
        ans += rem * mul;     //ans = ans + rem * mul

        //delete last digit (shrink the number)
        //num/=10;

        //multiplier update
        mul*=8;
    }

    // ans consist the DECIMAL equivalent of given Octal


    // Second Step : coverting decimal to binary
    int num_2 = ans; // assigning previous 'ans' value to num_2
    int ans_2 = 0, mul_2 = 1, bits;

    for(num_2; num_2!=0; num_2/=2){

        //remainder part
        bits = num_2%2;

        //ans part
        ans_2 += bits * mul_2;        //ans=bits*mul+ans;

        //quotient part (shrink the number)
        //num_2/=2;

        //multiplier update
        mul_2*=10;
    }
    cout<<"The binary equivalent is: "<<ans_2;

    return 0;
}