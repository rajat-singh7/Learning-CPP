//#include <iostream>
//using namespace std;
//class Employee
//{
// int id;
// static int count; // Static Variable is also called class variables.This is use for all object.

// public:
//     void setData(void)
//     {
//         cout << "Enter The Employee Id " << endl;
//         cin >> id;
//         count++;
//     }
//     void getData(void)
//     {
//         cout << "The Id of this employee is " << id << " and this is employee number " << count << endl;
//     }

//     static void getCount(void) // Static Function
//     {
//         cout<<id; Throw an error
//         cout << "The Value Of count is " << count << endl;
//     }
//     static void Salary(void)
//     {
//         cout << "The Salary of all " << count << " employees is 90k" << endl;
//     }
// };
// // Count is the static data member of class Employee
// int Employee ::count; // Default Value is 0
// int Employee ::count = 1000 We also do this
// int main()
// {
//     Employee rajat, ritika, Kiran;
//        //  rajat.id = 1;
//        // rajat.count = 1; Cannot do this as id and count are private.
//     rajat.setData();
//     rajat.getData();
//     Employee::getCount();
//     Employee::Salary();

//     ritika.setData();
//     ritika.getData();
//     Employee::getCount();
//     Employee::Salary();

//     Kiran.setData();
//     Kiran.getData();
//     Employee::getCount();
//     Employee::Salary();
//     return 0;
// }

/******************NEXT VIDEO***************/
// ARRAYS OF OBJECTS & PASSING OBJECTS AS FUNCTION ARGUMNETS IN C++
// #include<iostream>
// using namespace std;
// class Employee{
//    int id ;
//    int salary;
//    public:
//    void SetId(void){
//     salary = 100000;
//     cout << "Enter The Id of Employee"<<endl;
//     cin>>id;
        // }
        // void GetId(void){
            // cout<<"The Id of Employee is "<<id<<endl;
        // }
// };
// int main() {
    // Employee rajat, raj,shree,vanishka;
    // rajat.SetId();
    // rajat.GetId();
//     Employee deloitte[50];
//     for ( int i = 1; i < 51; i++)
//     {
//         deloitte[i].SetId();
//         deloitte[i].GetId();
//     }
    
//  return 0;
// }

// #include<iostream>
// using namespace std;
// class Complex_Number{
//     int a;
//     int b;

//     public:
//         void SetData(int v1,int v2){
//             a = v1;
//             b = v2;
//         }

//         void setDataBySum(Complex_Number o1, Complex_Number o2 ){
//             a = o1.a + o2.a;
//             b = o1.b + o2.b;
//         }

//         void PrintNumber(){
//             cout<<"Your Complex Number Is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };
// int main() {
//     Complex_Number c1,c2,c3;
//     c1.SetData(1,2);
//     c1.PrintNumber();

//     c2.SetData(3,4);
//     c2.PrintNumber();

//     c3.setDataBySum(c1,c2);
//     c3.PrintNumber();
//  return 0;
// }

// #include<iostream>
// using namespace std;
// class Employee {
//   private:
//     int salary;

//   public:
//     Employee(int s) {
//       salary = s;
//     }

//     // Declare friend function
//     friend void displaySalary(Employee emp);
// };

// void displaySalary(Employee emp) {
//   cout << "Salary: " << emp.salary;
// }

// int main() {
//   Employee myEmp(50000);
//   displaySalary(myEmp);
//   return 0;
// }
// More Example of Friend function/Class:
// #include <iostream>
// using namespace std;
// class X{
//   private:
//     int a = 5;

//     friend class Y;
// };

// class Y{
//   public:
//     void show(X obj){
//       cout<<obj.a<<endl;
//     }
// };
// int main(){
//   X objX;
//   Y objY;
//   objY.show(objX);
//   return 0;
// }
// EXAMPLE NO.02
#include<iostream>
using namespace std;
class Box{
  int length = 10;
  friend void show(Box);
};
void show(Box a){
  cout<<a.length<<endl;
}
int main() {
  Box b; // making a object b of Bix Class.
  show(b); //passing object b and call the show function
 return 0;
}
/*PROPERTIES OF FRIEND FUNCTIONS
1.Not in the scope of class.
2.Since it is not in the scope of the class , it cannot be called from the object of 
that class.c1.SumComplex() == invalid
3.Can be invoked without the help of any is_object
4.Usually contains the objects as _crt_argv_no_arguments.
5.Can be declared inside public or private section of the class.
6.It cannot access the members directly by their names and need object_name.member_name 
to access any member.*/
