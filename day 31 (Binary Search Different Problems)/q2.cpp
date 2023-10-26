/***
    2> Search Insert Position

***/

/** Brute force approach (Using Linear Search) **/

// #include<bits/stdc++.h>
// using namespace std;

// int searchInsert(vector<int>& nums, int target) {

//     //using linear search
//     for(int i=0; i<nums.size(); i++){

//         if(nums[i] >= target)
//             return i;
//     }
//     return nums.size();
// }

// /*  T.C. --> O(n) */

// int main(){

//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;

//     vector<int> arr(n);

//     cout<<"Enter the elements in array : ";
//     for(int i=0; i<n; i++)
//         cin>>arr[i];

//     int target;
//     cout<<"Enter a target element : ";
//     cin>>target;

//     cout<<searchInsert(arr,target);

// }

/***
    Optimised Approach (Using Binary Search)

    Link: https://leetcode.com/problems/search-insert-position/
***/

int searchInsert(vector<int> &nums, int target)
{

    int start = 0, end = nums.size() - 1, mid;
    int index = nums.size(); // initially update index with size of array
                             // index will store the correct position of target
    while (start <= end)
    {

        mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            index = mid;
            break;
        }

        else if (nums[mid] < target)
            start = mid + 1;

        else // if(arr[mid]>target)
        {
            index = mid;
            end = mid - 1;
        }
    }
    return index;
}