/************** day 4/180 ***************/

#include<iostream>
using namespace std;
int main(){
   
    /***** input instruction in c++ *****/

    //int a,b;
    // cin>>a>>b;
    // cout<<a+b;
    
    // cout<<"Enter your first Number: ";
    // cin>>a;
    // cout<<"Enter your second Number: ";
    // cin>>b;
    // cout<<"Sum of number is: "<<a+b;


    /*** Type Casting(implicit) ***/
    // int a=10;
    // char c='b';
    // a=c;
    // cout<<a;

    // int a=66;
    // char c='d';
    // c=a;
    // a=c;
    // cout<<a<<" "<<c;

    //data loss in typecasting(vvi*)
    // int a=121212;
    // char c='a';
    // c=a;
    // cout<<c;


    /***** Decision control instructions *****/
    // int package;
    // cin>>package;

    // if(package>10)
    //     cout<<"Accepted";
    // else
    //     cout<<"Rejected";


    /** pass or fail **/
    // int marks;
    // cout<<"Enter your marks: ";
    // cin>>marks;

    // if(marks>33)
    //     cout<<"Pass";
    // else
    //     cout<<"Fail";


    /** greater or smaller **/
    // int a,b;
    // cout<<"Enter your first Number: ";
    // cin>>a;
    // cout<<"Enter your second Number: ";
    // cin>>b;
    // if(a>b)
    // cout<<"Yes";
    // else
    // cout<<"No";


    /** even or odd **/
    // int number;
    // cout<<"Enter a number: ";
    // cin>>number;
    // if(number%2==0)
    //     cout<<"Even";
    // else
    //     cout<<"Odd";

    // or

    // int number;
    // cout<<"Enter a number: ";
    // cin>>number;
    // if(number%2==1)
    //     cout<<"Odd";
    // else
    //     cout<<"Even";


    /** adult or teenager **/
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;
    // if(age>18)
    //     cout<<"Adult";
    // else
    //     cout<<"Teenager";


    /** num is +ve, -ve, zero **/
    // int num;
    // cout<<"Enter the number: ";
    // cin>>num;
    // //using nested if else
    // if(num>0)
    //     cout<<"+ve";
    // else{
    //     if(num<0)
    //         cout<<"-ve";
    //     else
    //         cout<<"zero";
    // }

    /** optimised code using if-else ladder **/
    // int num;
    // cout<<"Enter the number: ";
    // cin>>num;
    // //using if else ladder
    // if(num>0)
    //     cout<<"+ve";
    // else if(num<0)
    //         cout<<"-ve";
    // else
    //     cout<<"zero";


    /** vowel or consonant **/
    // char ch;
    // cout<<"Enter a character: ";
    // cin>>ch;
    
    // if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    // cout<<"Vowel";
    // else
    //     cout<<"Consonant";

    //or

    // if(ch=='a'||ch=='A')
    //     cout<<"Vowel";
    // else if(ch=='e'||ch=='E')
    //     cout<<"Vowel";
    // else if(ch=='i'||ch=='I')
    //     cout<<"Vowel";
    // else if(ch=='o'||ch=='O')
    //     cout<<"Vowel";
    // else if(ch=='u'||ch=='U')
    //     cout<<"Vowel";
    // else 
    //     cout<<"consonant";


    /** day of the week **/
    // int day_no;
    // cout<<"Enter day number: ";
    // cin>>day_no;
    // if(day_no == 1)
    //     cout<<"Monday";
    // else if(day_no == 2)
    //     cout<<"Tuesday";
    // else if(day_no == 3)
    //     cout<<"Wednesday";
    // else if(day_no == 4)
    //     cout<<"Thursday";
    // else if(day_no == 5)
    //     cout<<"Friday";
    // else if(day_no == 6)
    //     cout<<"Saturday";
    // else if(day_no == 7)
    //     cout<<"Sunday";
    // else 
    //     cout<<"Enter valid day number";

    
    /** month of year **/
    // Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

    // int month_no;
    // cout<<"Enter the month number: ";
    // cin>>month_no;
    // if(month_no == 1)
    //     cout<<"January";
    // else if(month_no == 2)
    //     cout<<"February";
    // else if(month_no == 3)
    //     cout<<"March";
    // else if(month_no == 4)
    //     cout<<"April";
    // else if(month_no == 5)
    //     cout<<"May";
    // else if(month_no == 6)
    //     cout<<"June";
    // else if(month_no == 7)
    //     cout<<"July";
    // else if(month_no == 8)
    //     cout<<"August";
    // else if(month_no == 9)
    //     cout<<"September";
    // else if(month_no == 10)
    //     cout<<"October";
    // else if(month_no == 11)
    //     cout<<"November";
    // else if(month_no == 12)
    //     cout<<"December";
    // else 
    //     cout<<"Enter valid month number";


    //Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;
    // if(age<12 || age>65)
    //     cout<<"Yes";
    // else
    //     cout<<"No";





    /***** Loop Control Instruction *****/

    //print name 5 times
    // for(int count=1; count<=5; count=count+1)
    //     cout<<"Aman\n";


    //print number from 1 to n
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // for(int num=1; num<=n; num=num+1)
    //     cout<<num<<endl;


    //print square from 1 to n 
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // for(int num=1; num<=n; num=num+1)
    //     cout<<num<<" Square is: "<<num*num<<endl;

    
    //print all even no. upto n
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    
    // for(int i=1; i<=n; i=i+1){
    //    if(i%2==0)
    //         cout<<i<<" ";
    // }

    // for(int i=2; i<=n; i=i+2){
    //         cout<<i<<" ";
    // }
    


    //print all odd no. upto n
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    
    // for(int i=1; i<=n; i=i+1){
    //    if(i%2==1)
    //         cout<<i<<" ";
    // }

    

    // Print “India will win the World Cup 2023”, 20 times.
    // for(int i=1; i<=20; i++)
    //     cout<<"India will win the World Cup 2023\n";
    
    // Print all Odd numbers from 1 to n, take n as an input from the user.

    // Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
        if(i%4==0)
            cout<<i<<endl;

}