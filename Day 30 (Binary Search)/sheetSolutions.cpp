/***
    Q1> An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;
    eg: 30 28 20 16 4
        key = 20

***/

#include<iostream>
using namespace std;

// function declaration
int binarySearch(int arr[],int n,int key);

int main(){

    int arr[1000];

    //Taking Size of array as i/p from user
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;

    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];

    //taking key as i/p to be searched
    int key;
    cout<<"Enter the key: ";
    cin>>key;

    cout<<binarySearch(arr,n,key)<<endl;

    return 0;
}

// function definition
int binarySearch(int arr[], int n, int key){
    
    // start, end, mid
    int start = 0;
    int end = n-1, mid;

    while(start <= end){

        //Mid ko find karo
        mid = start+(end-start)/2;

        //arr[mid]==key
        if(arr[mid]==key)
            return mid;

        //arr[mid]<key go to left side of mid (key can be present on the left side of mid)
        else if(arr[mid]<key)
            end = mid-1;

        //arr[mid]>key go to rigt side of mid (key can be present on the right side of mid)
        else
            start = mid+1;
     
    }
    // executes if key is not present in the array;
    return -1;
}



/***
    Q2> Search Insert Position

    Leetcode Link : https://leetcode.com/problems/search-insert-position/

    Gfg link : https://practice.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1

***/

/** Method - 1 **/
int searchInsert(vector<int> &Arr, int k)
{

    int N = Arr.size();
    int start = 0, end = N - 1, mid;

    while (start <= end)
    {

        // find mid
        mid = start + (end - start) / 2;

        // arr[mid]==key
        if (Arr[mid] == k)
            return mid;

        // arr[mid]<key
        else if (Arr[mid] < k)
            start = mid + 1;

        // arr[mid]>key
        else
            end = mid - 1;
    }

    // comes here means key is not found in array

    // key will present at start index  of array
    return start;

    // Note : return : the start if you don't find the target element in the array

}


/** Method - 2 **/
int searchInsertK(vector<int> Arr, int N, int k)
{
    // code here
    // 2nd approach

    int start = 0, end = N - 1, mid;

    while (start <= end)
    {

        // find mid
        mid = start + (end - start) / 2;

        // arr[mid]==key
        if (Arr[mid] == k)
            return mid;

        // arr[mid]>key
        else if (Arr[mid] > k)
        {

            if (mid == 0) // corner case : All the elements in array are greater than target element
                return 0;

            else if (Arr[mid - 1] < k)
                return mid;
            else
                end = mid - 1;
        }

        // arr[mid]<key
        else if (Arr[mid] < k)
        {

            if (mid == N - 1) // corner case : All the elements in array are smaller than target element
                return N;

            else
                start = mid + 1;
        }
    }

    // never executes only used to avoid error
    return 0;
}
