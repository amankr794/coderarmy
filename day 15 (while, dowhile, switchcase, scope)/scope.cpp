/** Scope of variables **/
#include<iostream>
using namespace std;
int k=30;  //global scope
int main(){

    int x=2;
    cout<<"x = "<<x<<endl;  //outerscope

    {
        int x=50; 
        cout<<"x = "<<x<<endl;     //innerscope

        {
            cout<<"x = "<<x<<endl; //innermostscope
            cout<<"k = "<<k;
        }
    }
}
