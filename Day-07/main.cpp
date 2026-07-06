#include <iostream>
using namespace std;
//Structure 
// example 1.
typedef struct employees
{
    /* Data */
    int employee_ID; //4bytes
    char fav_character; //4bytes
    float salary;  //1bytes
}ep;    //Total size = 12 bytes(due to memory padding)
// example 2.
struct Student {
        int ID; //4 bytes
        float GPA;  //4 bytes
        char grade; //1 bytes
    }; //Total size- 12 bytes

int main() {
    ep Rajat;
    ep RohanDas;
    ep Shubham;
    Rajat.employee_ID = 5674;
    Rajat.fav_character = 'M';
    Rajat.salary = 56000000;

    cout<<"The Value is " <<Rajat.employee_ID<<endl;
    cout<<"The Value is " <<Rajat.fav_character<<endl;
    cout<<"The Value is " <<Rajat.salary<<endl; 

    Student s1 = {101,3.5,'A'};
    cout<< " ID: "<< s1.ID << ",GPA: " << s1.GPA<<endl;
   

    //************Unions************
union money
{
    /* Data */
    int rice; //4
    char car;  //1
    float pounds; //4
}; //Total Size - 4 bytes (size of the largest member)
    union money m1;
    m1.rice  = 34;
    m1.car = 'c';
    // cout<<m1.rice;
    cout<<m1.car;

    // *********enum***********//
    enum Meal{ breakfast , lunch, dinner};
    
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
   
    
    return 0;
}


