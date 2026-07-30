//OOPs--->
#include <iostream>
#include <string>
using namespace std;
class Teacher
{
    // Properties/Attributes
private:
    double salary; // Data Hiding
public:
    string name;
    string dept;
    string Subject;
    // Create a Constructor
    //Non-Parametrized Constructor
    Teacher()
    {
        cout << "Hi, I am a Constructor" << endl;
        // dept = "Computer Science And Engineering";
    }
    //Parametrized Constructor
    Teacher(string n,string d,string s,double sal)
    {
        name = n;
        dept = d;
        Subject = s;
        salary = sal;
    }
    //Example For this Pointer
    // this-> Tells that object's Paramters
    // Teacher(string name,string dept,string Subject,double salary)
    // {
    //    this->name = name;
    //    this->dept = dept;
    //    this->Subject = Subject;
    //    this->salary = salary;
    // }

    //Copy Constructor:
    Teacher(Teacher &orgObject){
        cout<<"I am custom Copy Constructor"<<endl;
        this->name = orgObject.name;
        this->dept = orgObject.dept;
        this->Subject = orgObject.Subject;
        this->salary = orgObject.salary;
    }
    // Methods/Members function
    void ChangeDept(string newDept)
    {
        dept = newDept;
    }
    // setter
    void SetSalary(double s)
    {
        salary = s;
    }
    // getter
    double GetSalary()
    {
        return salary;
    }
    void Info(){
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<Subject<<endl;
        cout<<"Department: "<<dept<<endl;
    }
};
int main()
{
    // Class , Objects
    Teacher t1("Rajat","Computer Science","Python",50000); // Constructor Call
    // t1.Info();
    Teacher t2(t1); //Default Copy Constructor --Invoke
    t2.Info();
    return 0;
}