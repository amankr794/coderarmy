/***
                          Nim Game

  Logic : Agar no. 4 ka multiple hai then opponent win
          Agar no. 4 ka multiple nahi hai then I win


    i> ex - 6
        I          Opponent
        2               3
        4,5,6  -------------------- > I win


    ii> ex - 14
    I            Opponent
    2                3,4,5
    6                7,8
    9,10             11,12,,13
    14 --------------------------------> I win


    iii> ex - 8
    I            Opponent
    1                2,3,4
    5                6,7,8
                    Opponent win

    // if n is multiple of 4 ( i.e if 4 is factor of n ) then opponent win
    if(n%4 == 0)
        return false;
    else
    // if n is not multiple of 4 then I win
        return true;


    Link : https://leetcode.com/problems/nim-game/

 ***/

bool canWinNim(int n) {
        
        // if n is multiple of 4 ( i.e if 4 is factor of n ) then opponent win
        if(n%4 == 0)
            return false;
        else
        // if n is not multiple of 4 then I win
            return true;
}