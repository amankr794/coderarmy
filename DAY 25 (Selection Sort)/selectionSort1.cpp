/***
    Selection Sort : Select the minimum element from the unsorted array and swap it with the first element of the
                     unsorted array.

                            i.e

                     Take the minimum element to the front of array by swaps minimum element with the first element
***/

#include<iostream>
using namespace std;
int main(){

    int arr[6] = {10,4,1,3,2,7};

    cout<<"Before Sorting : ";
    for(int i=0; i<6; i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    /** Selection sort code starts **/

    //outer loop runs n-1 times
    for(int i=0; i<5; i++){

        int index = i;  //index store the index of minimum element (lets assume that first element of unsorted array is mini element)

        //inner loop finds the minimum element from unsorted array
        for(int j=i+1; j<6; j++){
            if(arr[j]<arr[index])
                index = j; // update index after finding the minimum element in unsorted array
        }

        //swap minimum element present at index variable with 
        //the first element of unsorted array present at ith index
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;

        //using built in swap fun
        // swap(arr[index], arr[i]); 
    }

    /** Selection sort code ends **/

    /*
        auxiliary space : O(1)
        total space complexity : 1 + n ==> O(n) 

        time complexity : worst case - O(n^2)
                          best case - omega(n^2)
                          average case - theta(n^2)

        Selection sort is not most optimised sorting algorithm
    */


    cout<<"After Sorting : ";
    for(int i=0; i<6; i++)
        cout<<arr[i]<<" ";
}