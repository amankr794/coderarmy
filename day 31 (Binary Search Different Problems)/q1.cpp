/*** 
    1> Find First and Last Position of Element in Sorted Array

    Link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

***/

/** 
    Brute force Approch (Using Linear Search) 

    vector<int> searchRange(vector<int>& nums, int target) {

        int firstOccu=-1;
        int lastOccu=-1;

        //find the first occurrence
        for(int i=0; i<n; i++){

            if(arr[i]==target)
                
                //get the first occurrence of target
                firstOccu=i;
                break;
        }

        //find the last occurrence
        for(int i=n-1; i>=0; i--){

            if(arr[i]==target){

                //get the last occurrence of target
                lastOccu=i;
                break;
            }
        }

        vector<int> arr(2)
        arr[0] = firstOccu;
        arr[1] = lastOccu;

        return arr;


        T.C ---> O(n) + O(n)
                 O(2n)
                 O(n)
    }
**/


/***
    Optimised Approach (Using Binary Search)

    Logic : 1st find the first occurrence of target
            if arr[mid] == traget
                firstOccu=mid
                end=mid-1;
            

            start=0, end=n-1, mid
            firstOccu=-1, lastOccu=-1;

            //find the first occurrence
            while(start<=end){

                mid=start+(end-start)/2;

                if(arr[mid]==target){

                    firstOccu=mid;
                    end=mid-1;
                }

                else if(arr[mid]<target)
                    start=mid+1;
                else
                    end=mid-1;
            }

            2nd find the second occurrence of target
            if arr[mid] == traget
                secondOccu=mid
                start=mid+1;

            

            //find the last occurrence
            start=0, end=n-1;

            while(start<=end){

                mid=start+(end-start)/2;

                if(arr[mid]==target){

                    lastOccu=mid;
                    start=mid+1;
                }

                else if(arr[mid]<target)
                    start=mid+1;
                else
                    end=mid-1;
            }


        vector<int> arr(2)
        arr[0] = firstOccu;
        arr[1] = lastOccu;

        return arr;


        T.C ---> O(logn) + O(logn)
                 O(2logn)
                 O(logn)

***/
