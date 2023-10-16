#include<bits/stdc++.h>
#include<iostream>
#include <iomanip> // Include the <iomanip> library for fixed and setprecision
using namespace std;
int main(){

/** 1: Take 20 elements from user input and find its sum with the help of an array. **/

    // int arr[20], sum=0;

    // cout<<"Enter 20 elements : ";
    
    // for(int i=0; i<20; i++){
    //     cin>>arr[i];
    //     sum += arr[i];
    // }

    // cout<<"Sum of 20 elements are : "<<sum;

/** 2: Calculate the average of elements in an array of size 18 **/

    // int size = 18;
    // int arr[size];

    // double sum = 0;

    // for(int i=0; i<size; i++){
    //     cin>>arr[i];
    //     sum += arr[i];
    // }

    // double avg = sum/size;
    // // cout<<"Average of "<<size<<" elements is: "<<avg;

    // // Set the output to display average with 2 decimal places
    // cout << fixed << setprecision(2);
    // cout<<"Average of "<<size<<" elements is: "<<avg;


/**
    3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then  implement it.
**/

    // int size;
    // cout<<"Enter the size of the array: ";
    // cin>>size;

    // int arr[500];

    // for(int i=0; i<size; i++)
    //     cin>>arr[i];

    // int key;
    // cout<<"Enter the element to search: ";
    // cin>>key;

    // int index = -1;
    // for(int i=0; i<size; i++){

    //     if(arr[i] == key){
    //         index = i;
    //         //cout << "element present at " << index << endl;
    //         break;
    //     }
    // }
    
    // if(index != -1)
    //     cout << "Element present at " << index << endl;
    // else
    //     cout<<index;


/**
    4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

***/

    // char chararray[26];
    // for(int i=0; i<26; i++)
    //     chararray[i] = 'a' + i;

    // for(int i=0; i<26; i++)
    //     cout<<chararray[i]<<endl;

}

/** 5: Find the second largest element in an array of unique elements of size n. Where n>3. **/

int findSecondLargest(int arr[], int n){

    int largest = INT_MIN, secondLargest = INT_MIN;

    for(int i=0; i<n; i++){

        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }

        else if(arr[i]>secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}


/**
    6: Find the third smallest element in an array of unique elements size n. Where n>3.
**/

int findThirdSmallest(int arr[], int n){

    int smallest = INT_MAX, secondSmallest = INT_MAX, thirdSmallest = INT_MAX;

    for(int i=0; i<n; i++){

        if(arr[i]<smallest){
            thirdSmallest = secondSmallest;
            secondSmallest = smallest;
            smallest = arr[i];
        }

        else if(arr[i]<secondSmallest && arr[i] != smallest){
            thirdSmallest = secondSmallest;
            secondSmallest = arr[i];
        }

        else if(thirdSmallest<arr[i] && arr[i] != secondSmallest && arr[i] != smallest){
            thirdSmallest = arr[i];
        }
    }

    return thirdSmallest;
}


/**
    7: What is Byte addressable?

    link: https://www.tutorialspoint.com/difference-between-byte-addressable-memory-and-word-addressable-memory#:~:text=Byte%20addressable%20memory%20is%20one,it%20uses%20bytewise%20storage%20configuration
    
**/