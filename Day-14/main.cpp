// // OBJECT ORIENTED PROGRAMMING:
// #include<iostream>
// using namespace std;
// class Employee
// {
//     private:  // Access Specifiers
//     int a,b,c;
//     public:   // Access Specifiers
//     int d,e;
//     void setData(int a1 , int b1, int c1); //Declaration
//     void getData(){
//         cout<<"The Value of a is "<<a<<endl;
//         cout<<"The Value of b is "<<b<<endl;
//         cout<<"The Value of c is "<<c<<endl;
//         cout<<"The Value of d is "<<d<<endl;
//         cout<<"The Value of e is "<<e<<endl;
//     }
// };

// void Employee::setData(int a1 , int b1 , int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main() {
//     Employee rajat; // object creation
//     //rajat.a = 100 This will throw error as (a) is private
//     rajat.d = 45;
//     rajat.e = 35;
//     rajat.setData(1,2,4);
//     rajat.getData();
//  return 0;
// }

/********************* NEXT VIDEO *********************/
// #include<iostream>
// using namespace std;

// class binary{
//         string s;
// public:
//     void read(void);
//     void check_binary(void);
//     void ones(void);
//     void display(void);
// };

// void binary :: read(void){
//     cout<<"Enter A Binary number: "<<endl;
//     cin>>s;
// }

// void binary :: check_binary(void){
//     for(int i = 0 ; i < s.length(); i++)
//     {
//         if(s.at(i)!= '0' && s.at(i)!= '1')
//         {
//             cout<<"Incorrect Binary format"<<endl;
//             exit(0);
//         }
//     }
// }

// void binary :: ones(void){
//     for(int i = 0 ; i < s.length(); i++){
//         if(s.at(i)=='0'){
//             s.at(i) = '1';
//         }
//         if(s.at(i)=='1'){
//             s.at(i) = '0';
//         }
//     }
// }

// void binary :: display(void){
//     cout<<"Displaying your binary number "<<endl;
//     for(int i = 0 ; i < s.length(); i++){
//        cout<<s.at(i);
//         }
//     }
// int main() {
//     // OOPs - Classes and Objects
//     // C++ ----> iniatially called --> C with classes by Stroustroup
//     // class---> extension of structures (in C)
//     // Structures Has Limitation
//     // 1.Members are public.
// 2.No methods
// class = structure + more
// Classes----> Can have  methods and properties.
// Classes----> Can make few members as private & few as public.
// You can declare objects along with the class declaration like this:
/*class Employee{
    class definition
} harry , lovish , ayush;*/
// NESTING OF MEMBER FUNCTION:
//     binary b;
//     b.read();
//     b.check_binary();
//     b.display();
//     b.ones();
//     return 0;
// }

/******************* NEXT VIDEO ***********************/
#include <iostream>
using namespace std;

class Shop
{
    int ItemId[100];           // By Default these three variables are private.
    int ItemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter id of your Item no " << counter + 1 << endl;
    cin >> ItemId[counter];
    cout << "Enter price of your Item" << endl;
    cin >> ItemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Item with Id " << ItemId[i] << " is " << ItemPrice[i] << endl;
    }
}
int main()
{
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}