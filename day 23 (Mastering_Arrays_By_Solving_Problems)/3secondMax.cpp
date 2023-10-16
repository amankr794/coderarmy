/***
    3> Second MAX in Array 

    Link : https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
***/

int print2largest(int arr[], int n) {
	    
	// largest element
	int largest = -1;
	    
	for(int i=0; i<n; i++){
	        
	    if(arr[i]>largest)
	        largest = arr[i];
	}
	    
	// second largest
	int secondlargest = -1;
	    
	for(int i=0; i<n; i++){
	        
	    if(arr[i] != largest){
	        secondlargest = max(arr[i],secondlargest);
	    }
	}
	    
	return secondlargest;
}