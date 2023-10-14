/**
                Is Rectangle ?

    Problem Description: Given four positive integers A, B, C, D, determine if there’s a rectangle such that the lengths of its sides are A, B, C and D (in any order).If any such rectangle exist return 1 else return 0.

    Link: https://www.interviewbit.com/problems/is-rectangle/submissions/
    
 **/

int solve(int A, int B, int C, int D) {
    
    /** If sides A and B are equal then the other two sides C and D must be equal for valid rectangle **/
    //first check two sides A and B are equal
    if(A==B){
        
        // check for the other two sides C and D are equal
        if(C==D)
            return 1; 
        else
            return 0;
    }
    
/** If sides A and C are equal then the other two sides B and D must be equal for valid rectangle **/
    else if(A==C){
        
            if(B==D)
                return 1;
            else
                return 0;
    }
    
/** If sides A and D are equal then the other two sides B and C must be equal for valid rectangle **/
    else if(A==D){
            if(B==C)
                return 1;
            else
                return 0;
    }

}