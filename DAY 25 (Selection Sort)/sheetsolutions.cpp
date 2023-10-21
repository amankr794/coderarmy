/***
    Q1> 1: Selection Sort Algorithm to sort the array of integers in decreasing order.

***/

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[1000]; //Assuming that user enter the elements less than 1000

//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n; //size of array entered by user

//     for(int i=0; i<n; i++)
//         cin>>arr[i];

//     cout<<"Before Sorting : ";
//     for(int i=0; i<n; i++)
//         cout<<arr[i]<<" ";

//     cout<<endl;

//     /** Selection sort code starts **/

//     //outer loop runs n-1 times
//     for(int i=0; i<n-1; i++){

//         int index = i;  //index store the index of maximum element (lets assume that first element of unsorted array is maxm element)

//         //inner loop finds the maximum element from unsorted array
//         for(int j=i+1; j<n; j++){
//             if(arr[j]>arr[index])
//                 index = j; // update index after finding the maximum element in unsorted array
//         }

//         //swap maximum element present at index variable with 
//         //the first element of unsorted array present at ith index
//         int temp = arr[index];
//         arr[index] = arr[i];
//         arr[i] = temp;

//         //using built in swap fun
//         // swap(arr[index], arr[i]); 
//     }

//     /** Selection sort code ends **/

//     cout<<"After Sorting : ";
//     for(int i=0; i<n; i++)
//         cout<<arr[i]<<" ";
// }


/***
    Q2> Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 

    Logic : Find the maximum in the unsorted array and swap it with the 
            last element of unsorted array
***/
// #include<iostream>
// using namespace std;
// int main(){

//     int arr[1000]; //Assuming that user enter the elements less than 1000

//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n; //size of array entered by user

//     for(int i=0; i<n; i++)
//         cin>>arr[i];

//     cout<<"Before Sorting : ";
//     for(int i=0; i<n; i++)
//         cout<<arr[i]<<" ";

//     cout<<endl;

//     /** Selection sort code starts **/

//     //outer loop runs n-1 times
//     for(int i=n-1; i>0; i--){

//         int max = i;  //max store the index of maximum element (lets assume that last element of unsorted array is maxm element)

//         //inner loop finds the maximum element from unsorted array
//         for(int j=0; j<i; j++){
//             if(arr[j]>arr[max])
//                 max = j; // update max after finding the maximum element in unsorted array
//         }
//         //swap maximum element present at max variable with 
//         //the last element of unsorted array present at ith index
//         int temp = arr[max];
//         arr[max] = arr[i];
//         arr[i] = temp;

//         //using built in swap fun
//         // swap(arr[index], arr[i]); 

//     }

//     /** Selection sort code ends **/

//     cout<<"After Sorting : ";
//     for(int i=0; i<n; i++)
//         cout<<arr[i]<<" ";
// }



/***
    Q3> Selection Sort Algorithm to sort the array of char in ascending order.
***/

#include<iostream>
using namespace std;
int main(){

    char arr[500]; //Assuming that user enter the elements less than 500

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

        int index = i;  //index store the index of minimum character (lets assume that first element of unsorted array is mini character)

        //inner loop finds the minimum character from unsorted array
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index])
                index = j; // update index after finding the minimum character in unsorted array
        }

        //swap minimum character present at index variable with 
        //the first character of unsorted array present at ith index
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