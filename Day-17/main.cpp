//Deep dive with friend function and class:
// #include <iostream>
// using namespace std;

// class Geeks {
// private:
//     int private_variable;

// protected:
//     int protected_variable;

// public:
//     Geeks() {
//         private_variable = 10;
//         protected_variable = 99;
//     }
//     friend class GFG;
// };

// class GFG {
// public:
//     void display(Geeks& t) {
//         cout << "The value of Private Variable = "<< t.private_variable << endl;
//         cout << "The value of Protected Variable = " << t.protected_variable<<endl;      
//     }
// };

// int main() {
//     Geeks g;
//     GFG fri;
//     fri.display(g);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Box{
//     private:
//         double width;
//     public:
//         //Define constructor:
//         Box(double width){
//             this->width = width;
//         }
//     friend void printWidth(Box b);
// };
// void printWidth(Box b){
//         cout<<"This is the width of Box:"<<b.width<<endl;
//     }
// int main() {
//     Box mybox(15);
//     printWidth(mybox);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Employee{
//     private:
//         int salary;
//     public:
//         string name;
//         int age;
//         string deparatment;
//         //Constructor
//     Employee(string name,int age,string deparatment,int salary){
//         this->salary = salary;
//         this->name = name;
//         this->age = age;
//         this->deparatment = deparatment;
//     }

//     //Declaration friend function 
//     friend void GetInfo(Employee emp);
// };

// void GetInfo(Employee emp){
//     cout<<"Name  of Employee: "<<emp.name<<endl;
//     cout<<"Age: "<<emp.age<<endl;
//     cout<<"Deparatment : "<<emp.deparatment<<endl;
//     cout<<"Salary: "<<emp.salary<<endl;
// }

// int main() {
//     Employee emp("Ram",24,"Engineering",45000);
//     GetInfo(emp);
//     return 0;
// }

#include<iostream>
using namespace std;
class Account{
    private:
        int password;
        int pin;
    public:
        string Bank_name;
        int account_number;
    Account(string Bank_name,int account_number,int password,int pin){
        this->Bank_name = Bank_name;
        this->account_number = account_number;
        this->password = password;
        this->pin = pin;
    }
    friend void GetInfo(Account ac);    
};
void GetInfo(Account ac){
    cout<<ac.Bank_name<<endl;
    cout<<ac.account_number<<endl;
    cout<<ac.password<<endl;
    cout<<ac.pin<<endl;
}

int main() {
    Account ac("SBI",567843256789,4536,517668);
    GetInfo(ac);
     return 0;
}
