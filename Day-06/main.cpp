#include <iostream>
using namespace std;
int main(){
    //Arrays
    int marks[4] = {34,67,84,90}; // or int marks[] = {34,67,84,90}
    cout<<"This Are the marks:"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl; 
    // Another way to create array
    int maths_marks[5];
    cout<<"This are maths marks:"<<endl;
    maths_marks[0] = 45;
    maths_marks[1] = 65;
    maths_marks[2] = 75;
    maths_marks[3] = 85;
    maths_marks[4] = 95;
    // We can change in arrays
    maths_marks[1] = 100;
    cout<<maths_marks[0]<<endl;
    cout<<maths_marks[1]<<endl;
    cout<<maths_marks[2]<<endl;
    cout<<maths_marks[3]<<endl;
    cout<<maths_marks[4]<<endl;
    // We can also print the values of array with the help of loop:
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks " <<i<<" is "<<marks[i]<<endl;
    }
    //Quick quiz: Do the same using while and do-while loops?
    // By using while loop:
    int a = 0;
    while (a < 5)
    {
       cout<<"The value of Maths marks " <<a<<" is "<<marks[a]<<endl;
       a++;  
    }
    // By using do-while loop:
    int s = 0;
    do
    { 
    cout<<"The value of marks " <<s<<" is "<<marks[s]<<endl;
    s++;

    } while (s < 4);
    // *******************Pointers And Arrays*****************************
    // POINTER ARITHMETIC:
    // address(new) = address(current) + i*size(data types)
    // (p + i) = p + i*data type
    // int marks[4] = {34,67,84,90};
    int* p = marks;
    cout<<*(p++)<<endl; //p-->34 then ++ to 67
    cout<<*(++p)<<endl; //then 67 ++ to 84
    // cout<<"The Value Of Marks[0] is "<<*p<<endl;
    // cout<<"The Value Of Marks[1] is "<<*(p+1)<<endl;
    // cout<<"The Value Of Marks[2] is "<<*(p+2)<<endl;
    // cout<<"The Value Of Marks[3] is "<<*(p+3)<<endl;
    
    return 0;
}