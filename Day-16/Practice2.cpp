// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     string name;
//     double *cgpaPtr; // here we create a pointer not stored direct cgpa value.

//     Student(string name, double cgpa) // Constructor
//     { 
//         this->name = name;
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa; // then stored cgpa value in cgpa Pointer.
//     }
//     // If we want, we can also create a copy constructor,there will be no such issue.
//     Student(Student &originalObject)
//     {
//         this->name = originalObject.name;
//         cgpaPtr = new double;
//         *cgpaPtr = *originalObject.cgpaPtr; // make deep copy here
//     }
//     void GetInfo()
//     {
//         cout << "Name: " << name << endl;
//         cout << "CGPA: " << *cgpaPtr << endl;
//     }
// };
// int main()
// {
//     Student s1("Rajat", 9.5);
//     s1.GetInfo();
//     Student s2(s1); // s2 --->"Neha"
//     s2.name = "Neha";
//     *(s2.cgpaPtr) = 9.2;
//     s2.GetInfo();
//     return 0;
// }

// DESTRUCTOR:
// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     string name;
//     double *cgpaPtr;

//     Student(string name, double cgpa)
//     { // Constructor
//         this->name = name;
//         cgpaPtr = new double;
//         *cgpaPtr = cgpa;
//     }
//     // Destructor
//     ~Student()
//     {
//         cout << "Hi,I delete everything " << endl;
//         delete cgpaPtr; // If we don't dp this then a memory leak issue create
//     }

//     void GetInfo()
//     {
//         cout << "Name: " << name << endl;
//         cout << "CGPA: " << *cgpaPtr << endl;
//     }
// };
// int main()
// {
//     Student s1("Rajat", 9.5);
//     s1.GetInfo();
//     return 0;
// }

// CONCEPT OF INHERITANCE:
// #include <iostream>
// using namespace std;
// class Person
// {
// public:
//     string name;
//     int age;

//     Person() // Non-Parametrized Constructor
//     { 
//         cout<<"Parent Constructor"<<endl;
//     }
//     ~Person(){
//         cout<<"Parent Destructor"<<endl;
//     }
// };

// class Student : public Person // Here We Inheritance in Public Mode
// { 
// public:
//     int rollNo;

//     Student(){
//         cout<<"Child Constructor"<<endl;
//     }

//     ~Student(){
//         cout<<"Child Destructor"<<endl;
//     }
//     void getInfo()
//     {
//         cout << "Name:" << name << endl;
//         cout << "Age:" << age << endl;
//         cout << "Roll No:" << rollNo << endl;
//     }
// };
// int main()
// {
//     Student s1;
//     s1.name = "Rahul Kumar";
//     s1.age = 17;
//     s1.rollNo = 45263;
//     s1.getInfo();
//     return 0;
// }

//Multi-Level Inheritance
// #include<iostream>
// #include<string>
// using namespace std;
// class Toyota{
//     public:
//         string Company_Name;
//         string Company_Region;
//         int Established;
// };

// class Fortuner : public Toyota{
//     public:
//         string Car_Name;
// };
// class Legender : public Fortuner{
//     public:
//         int Price;
//         string model_Name;
//         string colour;
//         string sunroof;

//     void GetInfo(){
//         cout<<"Company Name:"<<Company_Name<<endl;
//         cout<<"Comapany Region:"<<Company_Region<<endl;
//         cout<<"Established:"<<Established<<endl;      
//         cout<<"Car Name:"<<Car_Name<<endl;
//         cout<<"Model:"<<model_Name<<endl;
//         cout<<"Price:"<<Price<<endl;
//         cout<<"Colour:"<<colour<<endl;
//         cout<<"Sunroof:"<<sunroof<<endl;
//     }
// };
// int main() {
//     Legender c1;
//     c1.Company_Name = "Toyota";
//     c1.Company_Region = "India";
//     c1.Established = 1890;
//     c1.Car_Name = "Fortuner";
//     c1.model_Name = "Legender";
//     c1.model_Name = "B6E";
//     c1.Price = 500000;
//     c1.colour = "Black";
//     c1.sunroof = "Available";

//     c1.GetInfo();
//  return 0;
// }

/******************MULTIPLE INHERITANCE*****************/
// #include<iostream>
// #include<string>
// using namespace std;

// class A
// {
//   public:   
//     string name;
//     int age;
//     A()
//     {
//         cout << "Constructor of A"<<endl;
//     }
// };

// class B
// {
//   public:
//     string subject;
//     int roll_no;
//     B()
//     {
//         cout <<"Constructor of B"<<endl;
//     }
// };

// // Inheriting from both class A & B
// class C : public A, public B
// {
//   public:
//     C()
//     {
//         cout << "Constructor of C"<<endl;
//     }
// };

// int main()
// {
//     C s1;
//     s1.name = "Tony";
//     s1.age = 17;
//     s1.subject = "Physics";
//     s1.roll_no = 2453;
//     cout<<s1.name<<endl;
//     cout<<s1.age<<endl;
//     cout<<s1.subject<<endl;
//     cout<<s1.roll_no<<endl;
//     return 0;
// }

/******************HIERARCHIAL INHERITANCE********************/
//#include<iostream>
// #include<string>
// using namespace std;

// class Person{
//     public:
//         string name;
//         int age;
// };

// class Student : public Person{
//     public:
//         int roll_no; 
// };
// class Teacher : public Person{
//     public:
//         string Subject; 
// };
// int main() {
//     Teacher t1;
//     t1.name = "Ram";
//     t1.age  = 56;
//     t1.Subject = "Chemistry";
//     cout<<t1.name<<endl;
//     cout<<t1.age<<endl;
//     cout<<t1.Subject<<endl;
//  return 0;
// }

/******************HYBRID INHERITANCE*******************/
// #include<iostream>
// #include<string>
// using namespace std;
// class grandfather
// {
// public:
//     void house()
//     {
//         cout<<"3BHK House."<<endl;
//     }
// };
// class father:public grandfather
// {
// public:
//     void land()
//     {
//         cout<<"5Arcs of Land."<<endl;
//     }
// };
// class mother
// {
// public:
//     void gold()
//     {
//         cout<<"25g of Gold."<<endl;
//     }
// };
// class son:public father,public mother
// {
//   public:
//     void car()
//     {
//         cout<<"Audi Car."<<endl;
//     }
// };
// int main()
// {
//     son o;
//     o.house();
//     o.land();
//     o.car();
//     o.gold();
//     return 0;
// }

/******************POLYMORPHISM******************/
//***************Constructor Overloading********//
//This is the example of Compile time polymorphism
// #include<iostream>
// #include<string>
// using namespace std;
// class Student{
//     public: 
//         string name;

//     Student(){
//         cout<<"Non-parameterized"<<endl;
//     }

//     Student(string name){
//         this->name = name;
//         cout<<"Parameterized"<<endl;
//     }
// };
// int main() {
//     // Student s1;  // Non-parameterized constructor calls
//     Student s1("Tony Stark");
//     return 0;
// }

//*********Function Overloading**********//
//This is also an example of Compile time polymorphism.
// #include<iostream>
// using namespace std;
// class Print{
//     public:
//         void show(int x){
//             cout<<"Integer:"<<x<<endl;
//         }

//         void show(char ch){
//             cout<<"Character:"<<ch<<endl;
//         }
// };
// int main() {
//     Print p1;
//     p1.show('&');
//     p1.show(35);
//     return 0;
// }

//************Run time Polymorphism***********//
//Function Overriding
// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//         void GetInfo(){
//             cout<<"Parent Class"<<endl;
//         }
// };
// class Child : public Parent{
//     public:
//         void GetInfo(){
//             cout<<"Child Class"<<endl;
//         }
// };
// int main() {
//     // Child c1;
//     // c1.GetInfo();
//     Parent p1;
//     p1.GetInfo();
//  return 0;
// }

//Virtual Function
// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//         void GetInfo(){
//             cout<<"Parent Class"<<endl;
//         }

//         virtual void hello(){
//             cout<<"Hello from parent class"<<endl;
//         }
// };
// class Child : public Parent{
//     public:
//         void GetInfo(){
//             cout<<"Child Class"<<endl;
//         }

//         void hello(){
//             cout<<"Hello from child class"<<endl;
//         }
// };
// int main() {
//     Child c1;
//     c1.hello();
//     // Parent p1;
//     // p1.hello();
//  return 0;
// }

/***********ABSTRACT CLASS****************/
// #include<iostream>
// using namespace std;
// class Shape{ //Abstract class
//     public:
//        virtual void draw() = 0; //pure virtual function
// };

// class Circle : public Shape{
//     public:
//         void draw(){
//             cout<<"Drawing a Circle"<<endl;
//         }
// };
// class Rectangle : public Shape{
//     public:
//         void draw(){
//             cout<<"Drawing a Rectangle"<<endl;
//         }
// };
// int main() {
//     Circle c1;
//     c1.draw();
//     Rectangle r1;
//     r1.draw();
//     return 0;
// }

/********STATIC KEYWORD************/
#include<iostream>
using namespace std;
//static keyword in function
void counter(){
    // int x = 0; //Output will Be 0 0 0
    static int x = 0;
    cout<<"X:"<<x<<endl;
    x++;
}
int main() {
    counter();
    counter();
    counter();
    return 0;
}