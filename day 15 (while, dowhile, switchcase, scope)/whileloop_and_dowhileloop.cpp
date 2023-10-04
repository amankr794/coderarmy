/*
    Flow in while loop

    initialize
    break(i.e. condition checking)
    update

*/

/*** 1> Print 1 to 10 using while loop ***/
// #include<iostream>
// using namespace std;
// int main(){

//     int num=1;     //initialize
//     while(num<=10) //break (loop using condition checking)
//     {

//         cout<<num<<" ";
//         num++;     //update
//     }
//     return 0;
// }


/*** 2> Table Printing ***/
// #include<iostream>
// using namespace std;
// int main(){

//     int num; 
//     cout<<"Enter a number: ";
//     cin>>num;  
//     int i=1; 
//     while(i<=10) 
//     {

//         cout<<num*i<<"\n";
//         i++;    
//     }
//     return 0;    
// }


/*** 3> Factors of a given number ***/
// #include<iostream>
// using namespace std;
// int main(){

//     int num; 
//     cout<<"Enter a number: ";
//     cin>>num;  
//     int i=1; 
//     cout<<"Factor of "<<num<<" are: "<<"\n";
//     while(i<=num) 
//     {
//         if(num%i==0)
//             cout<<i<<" "<<endl;
//             // cout<<i<<" "<<-i<<endl;
//         i++;    
//     }

//     return 0;
// }

/*** 4> Print all even and odd numbers from 1 to n ***/
// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//     // while(n){
//     //     //even no.
//     //     if(n%2==0)
//     //          cout<<"even = "<<n<<endl;
//     //     else
//     //     //odd no.
//     //         cout<<"odd = "<<n<<endl;
//     //     n--;
//     // }


//     // all even no. from 1 to n
//     // int i=1;
//     // while(i<=n){
//     //     if(i%2==0)
//     //         cout<<i<<endl;
//     //     i++;
//     // }

//     // all odd no. from 1 to n
//     // int i=1;
//     // while(i<=n){
//     //     if(i%2==1)
//     //         cout<<i<<endl;
//     //     i++;
//     // }

// }



/*
    Flow in do-while loop

    initialize
    update
    break(i.e. condition checking)

*/

/*** 1> Print 1 to n ***/
// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int i=1;  //initialize

//     do{
//         cout<<i<<endl;
//         i++; //update
//     }while(i<=n); //break(i.e. condition checking)
// }


/*** 2> Sum of n numbers ***/
// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int i=1;  //initialize
//     int sum=0;

//     // do{
//     //     sum=sum+n;
//     //     n--; //update
//     // }while(n); //break(i.e. condition checking)

//     do{
//         sum=sum+i;
//         i++;
//     }while(i<=n); 

//     cout<<sum;
// }


/*** Break Keyword ***/
// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     while(i<=10){
//         if(i==4)
//             break;
//         cout<<i<<" ";
//         i++;
//     }
//     return 0;
// }

/*** Continue Keyword ***/
#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=10){

        if(i==4){
            i++;
            continue;
        }

        cout<<i<<" ";
        i++;
    }
}