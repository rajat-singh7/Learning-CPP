# OBJECT ORIENTED PROGRAMMING:
# Objects:
---> Objects are entities in the real world.
ex--Pen , laptop , Copy
# Classes:
---> Class is like a blueprint of these entities.
ex--Blueprint(Like a Format---Toyato--->Car1---Car2---Car3---)
# Syntax ----> In practice.cpp
# Access Modifiers
**Private**
Data & Methods accessible inside class.
**Public**
Data & Methods Accesssible by everyone.
**Protected**
Data & Methods accessible inside class & to its derived class.
# Encapsulation:
---> Encapsulation is wrapping up of data & member function in a single unit called Class.
class Bank{
    private:
        int passward;
        float Balance;  // Data Hiding
    public:
        string username;
        string BankName;
        int Account_Number;
};

# Constructor:
Special method invoked automatically at time of Object creation.Used for Initialisation.
If we create our own constructor,
1.Same name as class.
2.Constructor doesn't have a return type.
3.Only called once(automaticallly),at object creation.
4.Memory alloction happens when constructor is called.
# Types of Constructor:
1.Parametrized Constructor
2.Non-Parametrized Constructor
3.Copy
# this Pointer
---This is a special Pointer in C++ That Points to the Current Object.
**this->property**
        OR
** *(this).property**
Example----> this->name
# Copy Constructor:
---Special Constructor(Default) used to Copy properties of one object into Another.
# Important Concept------->
# Shallow Copy:
---> A Shallow copy of an object copies all of the member values from one object to another.
# Deep Copy:
---> A deep copy , not only copies the member values but also makes copies of any dynamically allocated memory that the member point to.

# Destructor 
---For delete the memory allocated 
**syntax**
~ClassName(){
    /*Code*/
    delete cgpaPtr //If any pointer exist 
}
# Inheritance
---> When properties & Member functions of base class are passed on the derived class.
# Order of calling constructor in Inheritance:
----> Important Interview Question 
**First Parent class Then Child Class**
# Order of calling Destructor in Inheritance:
**First Child class Then Parent Class**
# Types of Inheritance:
1.Single Inheritance
2.Multi-Level Inheritance
3.Multiple Inheritance
4.Hierarchial Inheritance
5.Hybrid Inheritance

# Polymorphism:
---> Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.
1.Compile time Polymorphism---->Example(Constructor overloading , Function overloading)
2.Run time Polymorphism---->Example(Function Overriding,virtual function)

# Abstraction:
---> Hiding all unnnecessary details & showing only the important parts
# Static Keyword:
The static keyword in C++ serves multiple purposes depending on its context. It can be applied to variables, functions, and class members, each with distinct behavior. Below is a detailed explanation of its usage:

**Static Variables in Functions**
When a variable is declared as static inside a function, it retains its value across multiple calls to the function. Unlike regular local variables, which are reinitialized every time the function is called, static variables are initialized only once and persist for the lifetime of the program.