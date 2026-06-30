//Constants , Manipulators , Opearators Precedence

#include <iostream>
#include <iomanip>

using namespace std;

int main(){ 
    /*********Constants In C++**********/

    // int a = 34;
    // cout<<"The value Of a was:"<<a<<endl; //34
    // a = 45;
    // cout<<"The Value of a is:"<<a<<endl;  //45 Value will be changes
    //         Constants in C++
    // const int a = 3;
    // cout<<"The value Of a was:"<<a<<endl;
    // a = 45; //You will get an error because a is constant.
    // cout<<"The Value of a is:"<<a<<endl;

    //Manipulators
    int a = 3, b = 45, c = 3561;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl; //Right Justified
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;

    //Operator Precedence:
    int x = 3, y = 5;
    int z = ((((x*5) + y)-45)+87);
    cout<<"The value of Z Is : "<<z<<endl;
    

    //Control structures:  (Types In README.md)
    //Selection Control structure: If-else-if-else ladder
    int age;
    cout<<"Enter Your Age:"<<endl;
    cin>>age;
    if(age<18){
        cout<<"Your are not eligible to come to my party. "<<endl;
    }
    else if(age==18){
        cout<<"You are a kid you need a kid pass to enter in my party."<<endl;
    }
    else{
        cout<<"You are eligible. You can come to the party."<<endl;
    }
    //Selection Control structure: Switch case statments:
    int day;
    cout<<"Enter from 1-7:"<<endl;
    cin>>day;
    switch (day) {
        case 1:
        cout<<"Monday"<<endl;
        break;
        case 2:
        cout<<"Tuesday"<<endl;
        break;
        case 3:
        cout<<"Wednesday"<<endl;
        break;
        case 4:
        cout<<"Thursday"<<endl;
        break;
        case 5:
        cout<<"Friday"<<endl;
        break;
        case 6:
        cout<<"Saturday"<<endl;
        break;
        case 7:
        cout<<"Sunday"<<endl;
        break;

        default:
        cout<<"Invalid Day Number:"<<endl;
    }
    /*      Loops in C++:
    There are three types of loops in c++:
    1.For loop
    2.While Loop
    3.Do-while loop
    */

    //For loops in C++
    //Syntax for for loop
    //for(initialization; condition;updation)
    /* {
              loop body(c++ code);
        } */
     
    for (int i = 0; i <= 10; i++)
    {
       cout<<i<<endl;
    }
    
    //Example of infinite loop
    /*for (int i = 0; i > -1; i++)
    {
       cout<<i<<endl;
    }*/

    // While Loop in C++
    //Syntax:
    // while (condition)
    // {
        /* code */
    // }
    int s = 10;
    while (s<=40){
        cout<<s<<endl;
        s++;
    }

    //Example of infinite while loop
    // int i = 1;
    // while (true){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Do-while Loop:Syntax
    // do
    // {
    //   C++ statements;
    //   }while(condition)
    int d = 1;
    do
    {
        cout<<d<<endl;
        d++;
    } while (false); //Excute atleast one time
    

    //Challenge To print 6 table By using loop:
    int f = 1;
    while(f<=10){
        cout<<6*f<<endl;
        f++;
    }
    return 0; 
}
