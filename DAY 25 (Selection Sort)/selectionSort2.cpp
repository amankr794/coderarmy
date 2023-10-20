#include<iostream>
using namespace std;
int main(){

    int arr[1000]; //Assuming that user enter the elements less than 1000

    int n;
    cout<<"Enter the size of array : ";
    cin>>n; //size of array entered by user

    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<"Before Sorting : ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    /** Selection sort code starts **/

    //outer loop runs n-1 times
    for(int i=0; i<n-1; i++){

        int index = i;  //index store the index of minimum element (lets assume that first element of unsorted array is mini element)

        //inner loop finds the minimum element from unsorted array
        for(int j=i+1; j<n; j++){
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

    cout<<"After Sorting : ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}