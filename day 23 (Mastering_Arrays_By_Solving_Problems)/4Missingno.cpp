/***
    4: Missing number in array
    
    link: https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

***/

int missingNumber(vector<int>& array, int n) {


     //Sum of all elements in array
     int sum=0;

     for(int i=0; i<n-1; i++)
        sum += array[i];


    //Sum of n number
    int sumnatural = (n*(n+1))/2;
            
    return (sumnatural - sum);
}