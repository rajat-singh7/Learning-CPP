// #include <iostream>
// using namespace std;
// Forward declaration:
// class Complex_Number;

// class Calculator
// {
// public:
//     int add(int a, int b)
//     {
//         return a + b;
//     }

//     int SumRealComplex(Complex_Number, Complex_Number);
//     int SumCompComplex(Complex_Number, Complex_Number);
// };
// class Complex_Number
// {
//     int a, b;
// Individually declaring functions as friends
//  friend int Calculator ::SumRealComplex(Complex_Number o1, Complex_Number o2);
//  friend int Calculator ::SumCompComplex(Complex_Number o1, Complex_Number o2);

// Alternative: Declaring the entire class as friend:
//     friend class Calculator;

// public:
//     void SetNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }

//     void PrintNumber()
//     {
//         cout << "Your Complex Number Is " << a << " + " << b << "i" << endl;
//     }
// };

// int Calculator ::SumRealComplex(Complex_Number o1, Complex_Number o2)
// {
//     return (o1.a + o2.a);
// }
// int Calculator ::SumCompComplex(Complex_Number o1, Complex_Number o2)
// {
//     return (o1.b + o2.b);
// }
// int main()
// {
//     Complex_Number o1, o2;
//     o1.SetNumber(1, 4);
//     o2.SetNumber(3, 6);
//     Calculator calc;
//     int res = calc.SumRealComplex(o1, o2);
//     cout << "The Sum of real part of o1 and o2 is " << res << endl;
//     int result = calc.SumCompComplex(o1, o2);
//     cout << "The Sum of complex part of o1 and o2 is " << result << endl;
//     return 0;
// }

/***************** NEXT VIDEO *******************/
// #include <iostream>
// using namespace std;
// Again Here We give forward declaration.
// class Y;
// class X
// {
//     int data;

// public:
//     void setValue(int value)
//     {
//         data = value;
//     }
//     friend void add(X, Y);
// };
// class Y
// {
//     int num;

// public:
//     void setValue(int value)
//     {
//         num = value;
//     }
//     friend void add(X, Y);
// };

// void add(X o1, Y o2)
// {
//     cout << "Summing data of X and Y Objects gives me " << o1.data + o2.num << endl;
// }

// int main()
// {
//     X a1;
//     a1.setValue(3);
//     Y b1;
//     b1.setValue(5);
//     add(a1,b1);
//     return 0;
// }

#include<iostream>
using namespace std;
class C2;
class C1{
    int val1;
    friend void exchange(C1 &,C2 &); // Reference object
    public:
        void intdata(int a){
            val1 = a;
        }

        void display(void){
            cout<< val1 <<endl;
        }
};
class C2{
    int val2;
    friend void exchange(C1 &,C2 &);
    public:
        void intdata(int a){
            val2 = a;
        }

        void display(void){
            cout<< val2 <<endl;
        }
};
/*Method to swap two numbers.
temp = a;
a = b;
b = temp;
*/

void exchange(C1 & x,C2 & y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2  = temp;
}
int main() {
    C1 oc1;
    C2 oc2;
    oc1.intdata(10);
    oc2.intdata(20);
    exchange(oc1,oc2);

    cout<<"The Value of C1 after exchanging becomes:";
    oc1.display();
    cout<<"The Value of C2 after exchanging becomes:";
    oc2.display();

 return 0;
}