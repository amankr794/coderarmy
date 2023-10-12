/*** Default Parameter/ Default Arguments ***/
#include<iostream>
using namespace std;

/** fact() function having default parameter as 3 **/

int fact(int n=3){     // n=3 is default parameter
   
   if(n<0)
    return 0;

    int ans=1;
    for(int i=2; i<=n; i++)
        ans = ans * i;
    
    return ans;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int ans = fact();
    cout<<ans;

    // int ans = fact(num);
    // cout<<ans;
}
