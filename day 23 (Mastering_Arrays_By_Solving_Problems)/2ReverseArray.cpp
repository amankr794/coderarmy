/***
    2> Reverse Array 
***/
#include<iostream>
using namespace std;

/** Metod - 1 (Using an another array of same size) **/
// void ReverseArray(int arr[], int n){

//     int temp[n];  // creating a temporary of same size of original array to store all the elements of original array

//     //copy the elements of original array in temp array in reverse order
//     int i = n-1;
//     int j = 0;

//     while(i>=0){

//         temp[j] = arr[i];
//         i--;
//         j++;
//     }

//     //copy the elements of temporary array into original array
//     i=0,j=0;
//     while(i<n){
//         arr[i] = temp[j];
//         i++;
//         j++;
//     }
// }

/** Method - 2 (Using swapping of start and end variable) **/
void ReverseArray(int arr[], int n){

    int start = 0;
    int end = n-1;

    while(start < end){

        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        //using built in swap function
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main(){

    //even array
    int evenArray[6] = {1,2,3,4,5,6};
    ReverseArray(evenArray, 6);
    for(int i=0 ;i<6; i++)
        cout<<evenArray[i]<<" ";

    cout<<endl;

    //odd array
    int oddArray[5] = {1,2,3,4,5};
    ReverseArray(oddArray, 5);
    for(int i=0 ;i<6; i++)
        cout<<oddArray[i]<<" ";
}