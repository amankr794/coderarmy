/***    2: Leap Year 
  
        https://practice.geeksforgeeks.org/problems/leap-year0943/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
 ***/
int isLeap(int N){
        //code here
        
        /*
            Two conditions for leap year:
            
            i> A year which is divisible by 400 will always be a leap year
            
            ii> if a year is divisible by 4, it should not be divisible by 100 at the same time 
               then it will be a leap year.
            
            iii> otherwise the remaining year will not be a leap year
            
            
            trick : century year ki divisibility 400 se check karni hai
                    non-century year ki divisibility 4 se check karni hai
                    
                    
                    
            * Agar koi bhi year jo 400 se divisible ho rahi hai wo always leap year hogi
            * jo year 400 se divisible nahi ho rahi hai wo leap year ho bhi sakti hai ya nahi bhi, iske liye
              condition check karni hai
        */
        
        
        if(N%400 == 0)
            return 1;
        else if(N%4==0 && N%100!=0)
            return 1;
        else
            return 0;
    }
