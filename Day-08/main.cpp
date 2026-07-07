#include <iostream>
using namespace std;
// // Functions And Function Prototypes //

// //Function Prototype
// //type function-name (arguments):
// // int sum(int a , int b ); //---> Acceptable
// //int sum (int a , b); --> Not Acceptable
// int sum(int , int); //---> Acceptable
// // void g(void); -----> Acceptable
// void g(); //-------> Acceptable

// int main(){
//     int num1 , num2;
//     cout<<"Enter First Number:"<<endl;
//     cin>>num1;
//     cout<<"Enter Second Number:"<<endl;
//     cin>>num2;
//     //num1 and num2 are actual parametres.
//     cout<<"The Sum is "<<sum(num1 , num2);
//     g();
//     return 0;
// }

// //Here I defined  the function.
// int sum(int a , int b){
//     int c = a + b;
//     //Formal parameters a and b.
//     return c;
// }
// void g(){
//     cout<<"\nHello Rajat, Good Morning"<<endl;
// }


/*Call Reference*/

//This will not swap a and b:
void swap(int a , int b){           //temp  a    b
    int temp = a;                   //4     4    5
    a = b;                          //4     5    5 
    b = temp;                       //4     5    4
}
//This will swap a and b:
//CALL BY REFERENCE USING POINTER
void swapPointer(int* a , int* b){   //temp  a    b
    int temp = *a;                   //4     4    5
    *a = *b;                         //4     5    5 
    *b = temp;                       //4     5    4
//CALL BY REFERENCE USING C++ VARIABLES
void swapPointer(int* a , int* b){   //temp  a    b
    int temp = *a;                   //4     4    5
    *a = *b;                         //4     5    5 
    *b = temp;                       //4     5    4
}
 int main(){
    int x=4, y=5;
    // cout<<"The Sum of 4 and 5 is "<<sum(a , b);
    cout<<"The Value of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x,y);  //This will not swap a and b.
    swapPointer(&x , &y);
    cout<<"The Value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
 }
