/*** Armstrong Number ***/

/*    
    i/p: 1     0     151    153
    o/p: yes   yes    no    yes
*/
#include<cmath>
#include<iostream>
using namespace std;

// checkArmstrong function declaration
bool checkArmstrong(int,int);

// countDigit function declaration
int countDigit(int);

int main(){

    int num;

    // Get i/p number from user
    cout<<"Enter a number: ";
    cin>>num;

    int digitcount = countDigit(num); //countDigit function call

    int ans = checkArmstrong(num, digitcount); //checkArmstrong function call

    cout<<ans;

    return 0;
}

// countDigit function definition
int countDigit(int num){

    int cnt=0;

    while(num){
        num/=10;
        cnt++;
    }
    return cnt;
}

// checkArmstrong function definition
bool checkArmstrong(int num, int digitcount){
    
    int n=num, sum=0;

    while(n){
        
        int lastdigit = n%10;
        // sum = sum + pow(lastdigit, digitcount);
        sum = sum + (int)(pow(lastdigit, digitcount) + 1e-9);      //vvi note this

        // int mul = 1;
        // for (int i = 1; i <= digitcount; i++)  //using for loop calcualting  lastdigit^digitcount
        //     mul = mul * lastdigit;
        
        //or 

        // int mul = lastdigit;
        // for (int i = 1; i < digitcount; i++)  //using for loop calcualting  lastdigit^digitcount
        //     mul = mul * lastdigit;

        // sum = sum + mul;

        n/=10;
    }
   
    if(sum == num)
        return 1;
    else
        return 0;
}


/**
   Note: Read about pow(x,y) function in c++
   link: https://www.scaler.com/topics/pow-function-in-c/

***/