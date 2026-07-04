#include <iostream>
using namespace std;
//Break and Continue
int main(){
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
    }
    //Example-3
    int num = 0;
    while (num < 10) {
    cout << num << "\n";
   num++;
   if (num == 4) {
    break;
  }}
  // Pointer:Data Type which hold the address of other data types.

  int a = 3;
  int* b = &a;
  
  // &-------> (Address of) operator
  cout<<"The address of a is: "<<&a<<endl;
  cout<<"The address of a is: "<<b<<endl;

  // *-------> (value at ) Dereference operator
  cout<<"The value at address b is: "<<*b<<endl;
  //Pointer to pointer -----> It Store address of pointer
  int** c = &b;
 cout<<"The Address of b is "<<&b<<endl;
 cout<<"The Address of b is "<<c<<endl;
 cout<<"The value at address c is "<<*c<<endl;
 cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
  

  // Arrays & Pointer Arithmetic in C++:
  int marks[10] = {35,67,87,90,37,57,59,69,70,46};  // or marks[] = {35,67,87,90,37,57,59,69,70,46};
  cout<<"These Are Marks:"<<endl;
   marks[2] = 100; //We Also change value of an array:
  cout<<marks[0]<<endl;
  cout<<marks[1]<<endl;
  cout<<marks[2]<<endl;
  cout<<marks[3]<<endl;
  cout<<marks[4]<<endl;
  cout<<marks[5]<<endl;

  // another method to create array
  int Maths_marks[4];
  Maths_marks[0] = 90;
 Maths_marks[1] = 86;
 Maths_marks[2] = 98;
 Maths_marks[3] = 70;
 cout<<"These Are Maths Marks:"<<endl;
 cout<<Maths_marks[0]<<endl;
 cout<<Maths_marks[1]<<endl;
 cout<<Maths_marks[2]<<endl;
 cout<<Maths_marks[3]<<endl;
 //We print values of arrays with the help of loop:
 for (int i = 0; i <10; i++)
 {
    cout<<"The Value of marks "<<i<<" is "<<marks[i]<<endl;
 }
    return 0;
}