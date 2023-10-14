/**
    Total Moves For Bishop (in 8X8 chessboard)

    Logic : From the given current position of bishop a bishop can move in any of 4 direction:
    i> bottom right or,
    ii> bottom left or,
    iii> top right or,
    iv> top left


    i> if the bishop moves in bottom right direction, it goes(max) either in lastrow or in lastcolumn i.e (8,8) 
    ii> if the bishop moves in bottom left direction, it goes(max) either in lastrow or in 1stcolumn i.e (8,1) 
    iii> if the bishop moves in top left direction, it goes(max) either in 1strow or in 1stcolumn i.e (1,1) 
    iv> if the bishop moves in top right direction, it goes(max) either in 1strow or in lastcolumn i.e (1,8) 

    link: https://www.interviewbit.com/problems/total-moves-for-bishop/

 ***/

int Solution::solve(int A, int B) {
    
    // A and B is initial position of bishop 
    
    int count = 0;
    
    // if bishop moves in bottom right direction(8,8), the maximum steps it can move
    count += min(8-A,8-B);
    
    // if bishop moves in bottom left direction(8,1), the maximum steps it can move
    count += min(8-A,B-1);
    
    // if bishop moves in top left direction(1,1), the maximum steps it can move
    count += min(A-1,B-1);
    
    // if bishop moves in top right direction(1,8), the maximum steps it can move
    count += min(A-1,8-B);
    
    return count;
}
