/*** 1>: Temperature Range  ***/
// #include <iostream>
// using namespace std;
// int main()
// {
//     double temp;

//     // Get the temperature input from the user
//     cout << "Enter the temperature in degrees Fahrenheit: ";
//     cin >> temp;

//     // Check if the temperature is between 70 and 90 (excluded)
//     if (temp > 70 && temp < 90)
//         cout << "Yes, it's suitable for swimming!" << endl;
//     else
//         cout << "No, it's not suitable for swimming." << endl;

//     return 0;
// }


/*** 2>: Even and Positive Number ***/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;

//     // Get the number input from the user
//     cout << "Enter a number: ";
//     cin >> num;

//     // Check if the number is both even and positive
//     if (num > 0 && num %2 == 0)
//         cout << "Yes" << endl;
//     else
//         cout << "No" << endl;

//     return 0;
// }


/*** 3>: Age Check ***/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int age;

//     // Get the age input from the user
//     cout << "Enter a number: ";
//     cin >> age;

//     // Check if the age is between 13 and 19 (inclusive)
//     if (age >= 13 && age <= 19)
//         cout << "You are a teenager." << endl;
//     else
//         cout << "You are not a teenager." << endl;

//     return 0;
// }


/*** 4>: Check Greatest ***/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;

//     // Get input for three numbers
//     cout << "Enter the first number (a): ";
//     cin >> a;
//     cout << "Enter the second number (b): ";
//     cin >> b;
//     cout << "Enter the third number (c): ";
//     cin >> c;

//     // Check if 'a' is greater than either 'b' or 'c'
//     if (a > b || a > c)
//         cout << "Yes" << endl;
//     else
//         cout << "No" << endl;

//     return 0;
// }



/*** 5>: Solve the expression according to the precedence table.***/
/*
    i> 2*3-48==5/4*6
    => 6-48 == 1*6         (((2*3)-48)==((5/4)*6))
    => 6-48 == 6
    => -42 == 6
    => (false)
    => 0

    ii> 6<<2-4*8/2        
    =>  6<<2-32/2           (6<<(2-((4*8)/2)))  
    =>  6<<2-16
    =>  6<<-14
    => This is a left shift operation,
       and shifting left by a negative value is undefined behavior

    iii> 5>4<3/2-8%4+5
      => 5>4<1-0+5          ((5>4)<(((3/2)-(8%4))+5))
      => 5>4<6
      => 1<6
      => (true)
      => 1

    iV> 14-8+92>>2+70
     => 98>>72            (((14-8)+92)>>(2+70))
     => 0        warning: right shift count >= width of type

*/