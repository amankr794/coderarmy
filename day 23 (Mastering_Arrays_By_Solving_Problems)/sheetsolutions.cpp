/***
    Q2> Move all negative elements to end

        Logic : * create a temp array of n size
                * first move all the positive elements in the temp array 
                * and then move all the -ve elements in the temp array
                * Now the temp array will containing all the +ve elements first and then the -ve elements
                  temp[n] = {+ve, +ve, +ve, -ve, -ve}   
                * Now copy all the elements of temp array in the original array        

    Link : https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab      

***/

 void segregateElements(int arr[],int n)
{
    // Your code goes here
        
    // create a temp array of n size
    // first move all the positive elements in the temp array 
    // and then move all the -ve elements in the temp array
        
    int temp[n];
        
        
    //index variable store the value of index at which we have to move the element
    //initially index is 0 b/c first +ve element move karna hai 0th index pe 
    int index=0; 
        
    //run a loop to move +ve element in temp array
    //this loop moves all the +ve element in temp array
    for(int i=0; i<n; i++){
            
        //check for +ve element and move into the temp array
        if(arr[i] >= 0){
            temp[index] = arr[i];
            index++;              //update index 
        }
    }
        
    //run a loop to move -ve element in temp array
    //this loop moves all the remaining -ve element in temp array
    for(int i=0; i<n; i++){
            
        //check for -ve element
        if(arr[i] < 0){
            temp[index] = arr[i];
            index++;              //update index
        }
    }
        
        
    // now ru a loop to copy the element of temp array into the original array
    for(int i=0; i<n;i++){
        arr[i]=temp[i];
    }

}



/***
    Q3> Number of occurrence

    Link : https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
    
***/
int count(int arr[], int n, int x) {
	// code here
	    
	int count = 0;
	    
	for(int i=0; i<n; i++){
	        
	// if current element is greater than x return count
	    if(arr[i] > x)
	        return count;
	            
	    // if current element is equals to x the count occurrences of x;
	    else if(arr[i] == x)
	        count++;

	}
	
	// it executes when for loop normallly terminates means x is not present 
	// in array,  all the elements in array are smaller than x;
	return count;
}


/***
    Q4> Count number of elements between two given elements in array

    Link : https://practice.geeksforgeeks.org/problems/count-number-of-elements-between-two-given-elements-in-array4044/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

***/

int getCount(int arr[], int n, int num1, int num2)
{
    //Complete the function
        
    int count=0;
        
    // find the index of num1 and num2
        
    int index1, index2;
    //index1 store the index of num1
    //index2 store the index of num2;
        
        
    // run for loop from 1 to n to find index of leftmost occurrence of num1
    for(int i=0; i<n ;i++){
            
        if(arr[i]==num1){
                
            index1 = i;  //get the index of num1
            break;
        }
    }
        
    // run for loop in reverse order (from n-1 to 0) to find te index of rightmost occurrence of num2
    for(int i=n-1; i>index1 ;i--){
            
        if(arr[i]==num2){
                
            index2 = i;  //get the index of num2
            break;
        }
    }
        
    //count the no. of elements between num1 and num2
    while(++index1<index2)
        count++;
        
    return count;
        
}

/***
  Q5> First Repeating Element
  Link : https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

***/

int firstRepeated(int arr[], int n) {
        // code here
    
    //outer loop traverse over the array elements to find the first repeating elements
    for(int i = 0; i < n; i++){

        //inner loop traverse to the right side of ith element and count its frequency
        for(int j = i + 1; j < n; j++){

            //if the element at ith and jth index is same it means this element is the repeating element (whose count > 1)
            if(arr[i] == arr[j]){
                    
                 return i + 1; //return the position of first repeating elements
            }
        }
    }

    // if count of every element is 1 means there is no any repeating elements in array
    // so, return -1;
    return -1;

    // T.C = O(n^2). So it gives TLE 

    // Expected Time Complexity: O(n)
    // Expected Auxilliary Space: O(n)
}


/***
    Q6> Sum of Unique Elements
    Link : https://leetcode.com/problems/sum-of-unique-elements/submissions/1080213735/

    
***/

int sumOfUnique(vector<int>& nums) {
        
        int sum=0; //sum store sum of unique elements

        for(auto i : nums){

            // passing element and vector in the uniqueCheck()
            bool unique = uniqueCheck(i,nums);

            if(unique)
                sum+=i;
        }

        return sum;
    }

//uniqueCheck function check the element is unique or not in nums vector
bool uniqueCheck(int num, vector<int>& nums){

    int count=0;

    for(int i: nums){

        if(i==num)
            ++count;

        if(count>1)
            return false;
    }
        
        return true;
}