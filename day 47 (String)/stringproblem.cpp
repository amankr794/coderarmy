/*** Basics String Problem ***/

#include<iostream>
using namespace std;
int main(){

    // string s = "Rohit";

    // /* Q1>  Reverse a String */
    // int start = 0, end = s.size()-1;

    // while(start<=end){
    //     swap(s[start],s[end]);
    //     start++;
    //     end--;
    // }
    // cout<<s<<endl;


    // /* Q2> Finding the length of a string */
    // int size = 0;
    // while(s[size] != '\0')
    //     size++;
    
    // cout<<size;


    /* Q3> Check the string is palindrome or not */
    string s2 = "naman";

    int start = 0, end = s2.size()-1;

    while(start<end){

        if(s2[start] != s2[end]){

            cout<<"Not a Palindrome";
            return 0;
        }
        start++;
        end--;
    }

    cout<<"It is Palindrome";
}


