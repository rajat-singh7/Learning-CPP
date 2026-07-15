#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter Your Age:"<<endl;
    cin>>age;
    return 0;
    if(age>18) {
        cout<<"You can vote.";
    }
    else if(age=18){
        cout<<"You Are also eligible to cast vote.";
    }
    else{
        cout<<"You are child go home and enjoy baby meal...😄";
    }
// Check Whether a  Number is prime or Not:
  int a;
  cout<<"Enter Any Number: "<<endl;
  cin>>a;
  if(a%2==0){
    cout<<"The  Number Is even"<<endl;
  }
  else {
    cout<<"The Number Is odd"<<endl;
  }
  // Find The factorial of a Number.

  int num1,factorial = 1;
  cout<<"Enter A Number to find Factorial : "<<endl;
  cin>>num1;
  for (int a = 1;  a <= num1;  a++)
  {
    factorial = factorial * a;
  }
  cout<<"The factorial of the given number is: "<<factorial<<endl;
     //Break and Continue
    //Example-1
    for (int i = 0; i <= 30; i++)
    {
        if (i==20){
            break; //Break out of a loop
        }
        cout<<i<<endl;
    }
    //Example-2
    for (int a = 0; a <= 30; a++)
    {
        if (a==10){
            continue; //skip current iteration
        }
        cout<<a<<endl;
  return 0;
}
