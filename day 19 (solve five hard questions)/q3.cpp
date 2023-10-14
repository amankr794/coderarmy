/*** Find Trailing zero in a fctorial ***/
//Link:  https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

int trailingZeroes(int N)
    {
        // LOGIC = no. of 5 in factorial of N is equal to the no. of trailing zeros in N! 
        
        int count = 0; //count store the no. of 5 in factorial of N
        
        while(N>=5){
            
            count += N/5;
            N/=5;
        }
        
        return count;
    }