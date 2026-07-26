// FUNCTION OVERLOADING
#include<iostream>
using namespace std;
int add(int a , int b){
    cout<<"Using Function with 2 arguments "<<endl;
    return a + b;
}
int add(int a , int b,int c){
    cout<<"Using Function with 3 arguments "<<endl;
    return a + b + c;
}

// Calculate the Volume of Cyclinder:
int volume (double r , int h){
    return (3.14*r*r*h);
}

//Calculate the Volume of Cube:
int volume(int a ){
    return (a*a*a);
}

//Calculate the volume of Rectangular Box:
int volume(int l , int b , int h){
    return(l*b*h);
}
// QUESTION
// THIS WILL THROW AN ERROR
// void compute(int x,int y = 10){
//     cout<< x + y<<endl;
// }

// void compute(int x){
//     cout << x * 2<<endl;
// }
void compute(int x,int y){
    cout<< x + y<<endl;
}

void compute(int x){
    cout << x * 2<<endl;
}
// CALCULATING AREA OF CIRCLE:
double Calculate_Area(double radius){
    return 3.14*radius*radius;
}
// CALCULATING AREA OF RECTANGLE
double Calculate_Area(double length , double breadth){
    return length*breadth;
}
// CALCULATING AREA OF TRIANGLE BY USING HERON'S FORMULA
double Calculate_Area(double a, double b , double c){
    double s = (a + b + c)/2.0;
    return (s*(s-a)*(s-b)*(s-c));
}
int main()
{
    cout<<"The Sum is  3 and 6 is "<<add(3,6)<<endl;
    cout<<"The Sum is  3 , 7 and 6 is "<<add(3,6,7)<<endl;
    cout<<"The Volume of cuboid is 3 , 7 and 6 "<<volume(3,6,7)<<endl;
    cout<<"The Volume of cube of side 3 "<<volume(3)<<endl;
    cout<<"The Volume of Cylinder of radius 3 and height 6 "<<volume(3,6)<<endl;
    cout<<"The Value When function compute is Call: "<<endl;
    compute(5,3); // In void function Call it on its own line
    cout<<"Circle Area: "<< Calculate_Area(5.0)<<endl;
    cout<<"Rectangle Area "<<Calculate_Area(4.0,6.0)<<endl;
    cout<<"Triangle Area "<<Calculate_Area(3.0,4.0,5.0)<<endl;

    return 0;
}