/*** Convert 'a' to 'A' ***/

/*
    i/p: 'a'  'b'  'g'  'z'
    o/p: 'A'  'B'  'G'  'Z'


    logic 1:                      logic 2:
    ch = 'a'                      ch = 'a'
    ch = ch - 'a' + 'A'           ch = ch - 32
*/

#include<iostream>
using namespace std;

//function declaration
char toUpperCase(char);

int main(){

    char ch;

    // Get character i/p from user
    cout<<"Enter a lower case character: ";
    cin>>ch;

    cout<<"Upper case of "<<ch<<" : "<<toUpperCase(ch);  // function call;

    return 0;
    
}

//function definition
char toUpperCase(char name){
    
    // return name - 'a' + 'A';      or    return (name - 32) 
    
    char ans = name - 'a' + 'A';     // char ans = name - 32 ;
    return ans;                      // return ans;
}