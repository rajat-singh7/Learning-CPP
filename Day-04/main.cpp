// Practice of loops In C++
#include <iostream>
using namespace std;

int main(){
    int savings;
    cout<<"Savings of Rajat:";
    cin>>savings;
    if (savings>5000){
        cout<<"Rajat Is going to Thailand."<<endl;
    
    }
  else if(savings>3500) {
    cout<<"Rajat Is going to Sri lanka."<<endl;

  }
  else {
    cout<<"Rajat is going to Nala sopara"<<endl;
  }


  // Write a program in c++ to find the sum of first 10 natural numbers.
  int i,sum = 0;
  for (i = 1; i <= 10; i++) {
    sum = sum + i;
  }
  cout<<"\n The Sum Of first 10 natural numbers are: "<<sum<<endl;
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
  return 0;
}
