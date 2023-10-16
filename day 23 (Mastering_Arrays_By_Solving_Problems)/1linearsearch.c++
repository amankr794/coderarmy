/***  
    1> Search an Element in an array 
    
    Link : https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
  
***/
int search(int arr[], int N, int X)
{  
    int index = -1;
        
    for(int i=0; i<N; i++){
            
        if(arr[i] == X){
                
            index = i;
            break;
        }
    } 
        return index;   
}

