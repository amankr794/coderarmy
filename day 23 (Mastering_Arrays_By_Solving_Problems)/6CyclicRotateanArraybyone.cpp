/***
    6> Cyclically rotate an array by one

    Link : https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

 ***/

// Method - 1 (Using an array of same size)
// void rotate(int arr[], int n)
// {
//     int temp[n];
// }

// Method - 2 ()
void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    
    // for(int i=n-1; i>0; i--)
    //     arr[i]=arr[i-1];
        
    // arr[0] = temp;
    
    
    /* or */
    
    for(int i=n-2; i>=0; i--)
        arr[i+1]=arr[i];
        
    arr[0] = temp;
}