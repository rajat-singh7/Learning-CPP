// Again Learning call by value & call by reference
// #include <iostream>
// using namespace std;

// int sum(int a , int b){
//     int c = a + b;
//     return c;
// }

// int product(int a , int b){
//     return a*b;
// }

// // This will Not swap a and b
// void swap(int a , int b){                       //temp   a   b
//       int temp = a;                             //4      4   5
//       a = b;                                    //4      5   5
//       b = temp;                                 //4      5   4
// }
  
// // This will swap a and b
// // CALL BY REFERENCE USING POINTERS
// void swapPointer(int* a , int* b){              //temp   a   b
//       int temp = *a;                            //4      4   5
//       *a = *b;                                  //4      5   5
//       *b = temp;                                //4      5   4
// }

// // CALL BY REFERENCE USING C++ REFERENCE VARIABLES
// // int &
// void swapReferenceVar(int &a , int &b){           //temp   a   b
//       int temp = a;                               //4      4   5
//       a = b;                                      //4      5   5
//       b = temp;                                    //4      5   4
//     //   return a;                            
// }
// int main(){
//     int x = 4 , y = 5;
//     // cout<<"The Sum of 4 an 5 is "<<sum(4,5);
//     cout<<"The  Value of x is "<<x<<" and the value of y is "<<y<<endl;
//     //swap(x ,y); This will Not swap a and b
//     // swapPointer(&x,&y); //This will swap a and b using pointer reference
//     swapReferenceVar(x,y); //This will swap a and b using reference variables
//     // swapReferenceVar(x,y) = 700; 
//     //Output will be x is 700 and y is same as last swapable y
//     cout<<"The  Value of x is "<<x<<" and the value of y is "<<y<<endl;
//     int a , b;
//     cout<<"Enter The Value Of a and b : "<<endl;
//     cin>>a>>b;
//     cout<<"The Product of a and b is "<<product(a , b);


//     return 0;
// }


// INLINE FUNCTION
#include <iostream>
using namespace std;

inline int product(int a , int b){
    return a*b;
}

  // DEFAULT ARGUMNET

float moneyReceived(int currentMoney,float factor = 1.05){
    return currentMoney * factor;
}
int main(){
int a , b;
    cout<<"Enter The Value Of a and b : "<<endl;
    cin>>a>>b;
    cout<<"The Product of a and b is "<<product(a , b)<<endl;

    // DEFAULT ARGUMNET
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account,you will recieve " <<moneyReceived(money)<< " Rs after 1 year "<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account,you will recieve " <<moneyReceived(money,2.4)<< " Rs after 1 year "<<endl;
    // CONSTANT ARGUMENTS:
    // USED FOR ANY VALUE AS CONSTANT(NOT CHANGABLE)
    return 0;
}
