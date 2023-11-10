/** Character Array **/

#include<iostream>
using namespace std;

int main(){

    /* Declaring and initializing character array*/

    // char arr[]={'A','P','P','L'};
    // cout<<arr;                     //printing character array

    // char arr[]={'a','p','p','l','e'};
    // cout<<arr;

    // cout<<arr[0];
    // cout<<arr[1];
    // cout<<arr[2];
    // cout<<arr[3];
    // cout<<arr[4];

    /* cout<<arr[5];    Q> Why we get a character at this index */


    // char arr[]={'a','p','p','l','e'};
    // for(int i=0; i<5 ;i++)     //printing character array for loop
    //     cout<<arr[i];


    /* Taking input in character array */
    // char arr[20];  //assuming that the length of word is not greater than 20
    // cin>>arr;
    // cout<<arr;

    // char arr[10];  //assuming that the length of word is not greater than 10
    // cin>>arr;
    // cout<<arr;

    char arr[10];  
    cin>>arr;
    arr[2]='\0';
    cout<<arr;
}