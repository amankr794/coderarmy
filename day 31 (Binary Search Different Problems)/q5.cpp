/***
    Count the Zeros

    Link : https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1?page=1&difficulty[]=0&category[]=Searching&sortBy=submissions

***/

/** Using Linear Search **/
int countZeroes(int arr[], int n) {
    
    //Since alll the zeros are placed to the end of array
    //Start traversing from end and count all the zero
    //Stop when 1 is found
        
    int count0 = 0;
    for(int i=n-1; i>=0; i--){
            
        if(arr[i]==0)
            count0++;
            
        else //found 1
            break;
    }
        
    return count0;
}

/**Using Binary Search**/
//Using Binary Search
        
    int count0=0;
        
    int start=0, end=n-1, mid;
        
    while(start<=end){
            
        mid=start+(end-start)/2;
            
        if(arr[mid]==0){
                
            count0++;
                
            if(arr[mid-1]==0){
                    
                count0++;
                end=mid-1;
                continue;
            }
                    
            if(arr[mid]==0)
                start=mid+1;
        }
        
        else 
            start=mid+1;
        }
        
    return count0;
        
