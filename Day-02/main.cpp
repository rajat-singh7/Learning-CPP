//  Basic input and output in C++
#include <iostream>
using namespace std;

/*There Are two types of header files :
1.System header files : It comes with the compiler 
//Example-#include <iostream>
2.User defined header files: It is written by the programmer
#include "this.h"---> This will gives an error if this.h is not present in the current directory.*/
 

int z = 30;
int main(){
    int num1,num2;
    cout<<"Enter The Value of number 1:\n";   /*<< is called Insertion Operator */
    cin>>num1;                                /*>> is called an Extraction Operator*/
    cout<<"Enter The Value of number 2:\n"; 
    cin>>num2;
    cout<<"The Sum is " << num1 + num2<<endl;

    //Opeartors
    int a = 4 , b = 5;
    cout<<"Operators in C++"<<endl;
    //Arithematic Operators
     cout<<"Following are the Arithematic operators in C++"<<endl;
    cout<<"The Value Of a + b is "<<a + b<<endl;
    cout<<"The Value Of a - b is "<<a - b<<endl;
    cout<<"The Value Of a * b is "<<a * b<<endl;
    cout<<"The Value Of a / b is "<<a / b<<endl;  //Output will be an Integer(0.8)=0
    cout<<"The Value Of a % b is "<<a % b<<endl; //4 bec. 4 is smaller than 5
    cout<<"The Value Of a ++ is "<<a++<<endl; //4
    cout<<"The Value Of a -- is "<<a--<<endl; //5
    cout<<"The Value Of ++a is "<<++a<<endl;
    cout<<"The Value Of --a is "<<--a<<endl;
    cout<<endl;
    /*Difference between a++ And ++a is in (a++ print first and then implemented) and in (++a firstly implemented then print)*/

    //Assigment Operators
    //int a = 3, b =4;
    //char d = 'd';

    //Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The Value Of a == b is "<<(a==b)<<endl;
    cout<<"The Value Of a != b is "<<(a!=b)<<endl;
    cout<<"The Value Of a >= b is "<<(a>=b)<<endl;
    cout<<"The Value Of a <= b is "<<(a<=b)<<endl;
    cout<<"The Value Of a < b is "<<(a<b)<<endl;
    cout<<"The Value Of a > b is "<<(a>b)<<endl;

    //Logical Operators
    cout<<"Following are the Logical operators in C++"<<endl;
    cout<<"And Operator ((a==b) && (a<b)) is :" <<((a==b) && (a<b))<<endl; //True If Both Are True.
    cout<<"Or Operator ((a==b) || (a<b)) is :" <<((a==b) || (a<b))<<endl;  //True If any One Of them is true.
    cout<<"Not Operator (!(a==b) is :" <<(!(a==b))<<endl; //Just give opposite answer
      

    //Scope Resolution Operator(::)
   

    int x , y , z;
    cout<<"The Value Of X is: "<<endl;
    cin>>x;
    cout<<"The Value Of Y is: "<<endl;
    cin>>y;
    z = x + y;
    cout<<"The Sum is"<<z<<endl;
    cout<<"The global z is "<<::z<<endl;  //Scope Resolution Operators

    /*************FLOAT , DOUBLE AND LONG DOUBLE LITERALS *******************/
    float d = 34.4f;                //f/F = float
    long double e = 34.4l;          //l/L = long double
    cout<<"The Value of d is "<<endl<<"The value of e is "<<e<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;  //By default it set as double 
    cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;
     
    //**************Reference variables ******************//
    // Rohan das----> Monty ----> Rohu -------> Dangerous Coder //
    float m = 455;
    float & n = m;
    cout<<m<<endl;
    cout<<n<<endl;


    //************** TypeCasting ******************//
    float h = 56.78;
    int g = 90;
    cout<<"The Value of h is "<<(int)h<<endl;  //int(a)
    cout<<"The Value of g is "<<(float)g<<endl;  //float(b)


    return 0;
}