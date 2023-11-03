/***
    Kth Missing Positive Number

    link:https://leetcode.com/problems/kth-missing-positive-number/description/

***/

int findKthPositive(vector<int>& arr, int k){
        
    int n=arr.size();

    int count=0;
    int i=1;


    while(i){

        int j;
        for(j=0; j<n; j++){

            if(i==arr[j])
                break;
        }

        //the ith missing number
        if(j==n)
            count++;

        //found the kth missing number
        if(count==k)
            return i;

        i++;
    }

        //never executes just write to avoid error
        return 1;
}


/**Using Binary Search**/
int findKthPositive(vector<int>& arr, int k) {
        
        int start=0, end=arr.size()-1, mid, ans=arr.size();

        while(start<=end){
            mid=start+(end-start)/2;

            if(arr[mid]-mid-1>=k){
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }

        return ans+k;
}