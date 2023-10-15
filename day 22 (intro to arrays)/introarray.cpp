/*** Array Introduction ***/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{   
    /** Array delcaration and initialization using five ways **/

    // int arr[5];  //array declare : data_type array_name[sizeofarray]

    // int arr[5] = {1,2,3,4,5}; //array declaration and initialization
    // //printing array element
    // for(int i=0; i<5; i++)
    //     cout<<arr[i]<<" ";


    // int arr[] = {1,2,3,4,5,6}; //array declaration and initialization
    // //printing array element
    // for(int i=0; i<6; i++)
    //     cout<<arr[i]<<" ";


    // int arr[6] = {1,2,3,4}; //array declaration and initialization
    // //printing array element
    // for(int i=0; i<6; i++)
    //     cout<<arr[i]<<" ";


    /** array of zeros (initializing array with single values ) **/
    //  int arr[6] = {0};
    //  for(int i=0; i<6; i++)
    //      cout<<arr[i]<<" ";


    /** array initialization by taking i/p in array from user **/
    //  int arr[6];
    //  for(int i=0; i<6; i++)
    //      cin>>arr[i];
    //  for(int i=0; i<6; i++)
    //      cout<<arr[i]<<" ";


    /**
        Note: Taking size of array as i/p from user is bad practice

        Avoid write such programs

        int size;
        cin>>size;

        int arr[size];
        for(int i=0;i<size;i++)
            cin>>arr[i];
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";


        The size of array should not be variable i.e  int arr[variable] is a bad practice b/c big size ke case me error aayaga. The size should always be a constant value
        like int arr[10000];

    **/


    /** Taking size of array(which is the no. of elements) as i/p from user **/
    // int size;
    // cin >> size;
    // int arr[10000];
    // for (int i = 0; i < size; i++)
    //     cin >> arr[i];
    // for (int i = 0; i < size; i++)
    //     cout << arr[i] << " ";


    /** accessing element out of boundary/index give random value **/
    // int arr[5] = {1,2,3,4,5};
    // cout<<arr[0]<<" "<<arr[1]<<endl;
    // cout<<arr[5]; //accessing element out of boundary/index give random value


    /** size of array **/
    // int arr[5] = {1,2,3,4,5};
    // cout<<sizeof(arr)<<" ";


    /** no. of elements in array (i.e array ka jo size wo kitne elements ka hoga )**/
    // cout<<sizeof(arr)/sizeof(arr[0]);


    /** Finding Minimum element in array **/
    // int arr[5] = {2,3,1,7,8};
    // int ans = INT_MAX;
    // for(int i=0; i<5; i++){
    //     if(arr[i]<ans)
    //         ans=arr[i];
    // }
    // cout<<ans;


    /** Finding Maximum element in array **/
    // int arr[5] = {2,3,1,7,8};
    // int ans = INT_MIN;

    // for(int i=0; i<5; i++){
    //     if(arr[i]>ans)
    //         ans=arr[i];
    // }
    // cout<<ans;


    /** Sum of N elements **/
    int n;
    cout<<"Enter N no. of elements: ";
    cin>>n;

    int arr[1000], sum=0;

    // //taking i/p N no. of elements in array
    // for(int i=0; i<n; i++)
    //     cin>>arr[i];

    // //sum of N no. of elements of array
    // for(int i=0;i<n;i++)
    //     sum += arr[i];

    //or
    
     for(int i=0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
     }
    cout<<sum;
    
}