/***
     1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.
***/

// // using while loop
//  #include<iostream>
//  using namespace std;
//  int main(){

//     int n;

//     // Get the number input from user
//     cout<<"Enter a number (n): ";
//     cin>>n;

//     // printing all the even numbers between 1 and n(inclusive)
//     int i=1;
//     while(i<=n){
//         if(i%2==0)
//             cout<<i<<endl;
//         i++;
//     }

//     return 0;
// }

// // using do-while loop
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;

//     // Get the number input from user
//     cout << "Enter a number (n): ";
//     cin >> n;

//     // printing all the even numbers between 1 and n(inclusive)
//     int i = 1;
//     do
//     {
//         if (i % 2 == 0)
//             cout << i << endl;
//         i++;
//     } while (i <= n);

//     return 0;
// }

/***
   2: Find the factorial of a number n using a while loop and do a while loop.
***/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     // Get the number input from user
//     cout << "Enter a number (n): ";
//     cin >> n;

//     // //factorial using whileloop
//     // int fact=1;
//     // while(n){
//     //     fact = fact * n;
//     //     n--;
//     // }
//     // cout<<fact;

//  or

//     // int fact=1;
//     // int i=1;
//     // while(i<=n){
//     //     fact = fact * i;
//     //     i++;
//     // }
//     // cout<<fact;

//     //factorial using do-while loop
//     // int fact=1;
//     // do
//     // {
//     //     fact = fact * n;
//     //     n--;
//     // } while(n);
//     // cout<<fact;

//  or

//     // int fact=1;
//     // int i=1;
//     // do
//     // {
//     //    fact = fact * i;
//     //    i++;
//     // }while(i<=n);
//     // cout<<fact;
// }

/***
    3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).
***/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     // Get the number input from user
//     cout << "Enter a number (n): ";
//     cin >> n;

//     cout << "Numbers from 1 to " << n << " not divisible by 3 and 5: ";

//     int i=1;
//     while(i<=n){

//         if(i%3==0 && i%5==0){
//             i++;
//             continue;   // Skip numbers divisible by both 3 and 5
//         }
//         cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }

/***
    4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do  anything. (Use switch here)
***/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number (1-12): ";
//     cin >> n;

//     cout << "Month: ";

//     switch (n)
//     {

//     case 1:
//         cout << "Jan";
//         break;
//     case 2:
//         cout << "Feb";
//         break;
//     case 3:
//         cout << "Mar";
//         break;
//     case 4:
//         cout << "Apr";
//         break;
//     case 5:
//         cout << "May";
//         break;
//     case 6:
//         cout << "Jun";
//         break;
//     case 7:
//         cout << "Jul";
//         break;
//     case 8:
//         cout << "Aug";
//         break;
//     case 9:
//         cout << "Sep";
//         break;
//     case 10:
//         cout << "Oct";
//         break;
//     case 11:
//         cout << "Nov";
//         break;
//     case 12:
//         cout << "Dec";
//         break;
//     default:
//         // Handle invalid input (numbers not in the range 1-12)
//         cout<<"Enter valid number";
//         break;
//     }
//     return 0;
// }


/*** 
    5: Print all the Capital and small letters using a while loop. It means A-Z, then a-z.
***/
// #include<iostream>
// using namespace std;
// int main(){

//     // cout<<"Uppercase letters from A to Z : \n";
//     // char ch='A';

//     // while(ch<='Z'){

//     //     cout<<ch<<" ";
//     //     ch+=1;
//     // }

//     // cout<<endl;

//     // cout<<"Lowercase letters from a to z : \n";
//     // ch='a';

//     // while(ch<='z'){

//     //     cout<<ch<<" ";
//     //     ch+=1;
//     // }


//     //or


//     // cout<<"Uppercase letters from A to Z : \n";
//     // char uppercase = 'A';
//     // char lowercase = 'a';

//     // while(uppercase <= 'Z'){

//     //     cout<< uppercase <<" ";
//     //     uppercase+=1;
//     // }

//     // cout<<endl;

//     // cout<<"Lowercase letters from a to z : \n";
//     // lowercase = 'a';

//     // while(lowercase <= 'z'){

//     //     cout<<lowercase<<" ";
//     //     lowercase+=1;
//     // }


//     //or

//     {
//         cout<<"Uppercase letters from A to Z : \n";
//         char ch='A';

//         while(ch<='Z'){

//             cout<<ch<<" ";
//             ch+=1;
//         }
//     }
//     cout<<endl;
//     {
//         cout<<"Lowercase letters from a to z : \n";
//         char ch='a';

//         while(ch<='z'){

//             cout<<ch<<" ";
//             ch+=1;
//         }
//     }
//  return 0;
// }


/***
    6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.
***/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // int div=2;
    // while(div<n){
    //     if(n%div==0)
    //         break;
    //     div++;
    // }
    // if(div==n)
    //     cout<<"Prime";
    // else
    //     cout<<"Not Prime";


    // or


    // if(n<2){
    //     cout << n << " is not a prime number." << endl;
    //     return 0;
    // }

    // int div=2;
    // while(div<=n/2){

    //     if(n%div==0)
    //         break;
    //     div++;

    // }
    // if(div>n/2)
    //     cout<<"Prime";
    // else
    //     cout<<"Not Prime";


    //or

    // if(n<2){
    //     cout << n << " is not a prime number." << endl;
    //     return 0;
    // }

    // int div=2;
    // while(div<=sqrt(n)){

    //     if(n%div==0)
    //         break;
    //     div++;

    // }
    // if(div>sqrt(n))
    //     cout<<"Prime";
    // else
    //     cout<<"Not Prime";
    

    // or without using sqrt function
    if(n<2){
        cout << n << " is not a prime number." << endl;
        return 0;
    }

    int div=2;
    while( div*div <= n ){

        if(n%div==0)
            break;
        div++;

    }
    if(div*div > n)
        cout<<"Prime";
    else
        cout<<"Not Prime";

    return 0 ;
}
