# Learning-CPP 
# Day.01
# Basic Details of C++
**Full Name**: C++ (pronounced "C plus plus")
**Type**: General-purpose, high-level programming language with low-level capabilities
**Paradigm**: Multi-paradigm — supports procedural, object-oriented, and generic programming
**First Appeared**: 1985 (development started in 1979)
**Inventor**: Bjarne Stroustrup, at Bell Labs (Murray Hill, New Jersey, USA)
**Origin**: Created as an extension of the C language with added features like classes and object-oriented programming.
**Major Update** : 2011, 2014 , 2017
⚡ Key Features of C++
Object-Oriented Programming (OOP)

Supports classes, objects, inheritance, polymorphism, encapsulation, and abstraction.
Low-Level Manipulation

Can directly manipulate hardware resources like C, making it suitable for system programming.
Compiled Language

Produces fast and efficient machine code after compilation.
Multi-Paradigm Support

Procedural, object-oriented, and generic programming (via templates).
Rich Standard Library

Includes the Standard Template Library (STL) for data structures and algorithms.
Portability

Programs can run on different platforms with minimal changes.
Memory Management

Supports both manual (using new/delete) and automatic (via smart pointers) memory management.
Operator Overloading

Allows defining custom behavior for operators.
Function Overloading

Multiple functions with the same name but different parameters.
Performance-Oriented

Suitable for high-performance applications, games, and embedded systems.
✅ In short:
C++ is a powerful, flexible, and efficient language that bridges the gap between low-level system programming and high-level application development.
# iostream
iostream is a **standard header file** in C++ that stands for standard Input - Output Stream. It provides the necessary core fuctionality to read data from inputs(like a keyboard) and write data to outputs(LIKE A CONSOLE SCREEN).

std::cout --> Standard output stream Used to print data to the screen using the insertion operator(<<)
 
# Variable 
It is  container to store the data.
**Types of variables**
1.Int-------2,3,4,55,90,-1
2.Float--------2.3,5.6
3.Char-------'c','d'
4.Double-------1.2344...
5.Boolean------True or False
# Common Interview question:
**Can global and local variable have same name in C++?**
# Data Types
------>Built in 
1.Int-------2,3,4,55,90,-1
2.Float--------2.3,5.6
3.Char-------'c','d'
4.Double-------1.2344...
5.Boolean(bool)------True or False
-------->User defined 
1.Struct
2.Union
3.Enum
-------->Derived
1.Array
2.Function
3.Pointer
# Rules to declare in cpp:
Variable name in cpp can range from 1 to 255 characters.
Must start with a letter (A–Z or a–z) or underscore (_).
Cannot start with a digit.
Can contain letters, digits, and underscores.
Case-sensitive (age and Age are different).
Cannot use C++ keywords (int, class, return, etc.).
No spaces or special characters are allowed.
Avoid starting with _ followed by uppercase (reserved for compiler/system).
# Day.02
# Day.03
# Control Stucture In C++
1.Sequence Stucture:
The sequence structure is the simplest form of control structure. It involves executing statements one after the other in a linear fashion. This is the default mode of execution in any program.
2.Selection structure:
Selection structures allow the program to choose different paths of execution based on conditions. The primary selection structures in C++ are if, if-else, and switch statements.
3.Loop Structure:
Iteration structures, or loops, allow the program to execute a block of code multiple times. The primary iteration structures in C++ are for, while, and do-while loops.

# Day-05
# Arrays
In C++, an array is a collection of elements of the same data type stored in contiguous memory locations and accessed using an index starting from 0.

**Why we Use arrays**
Arrays are widely used due to their simplicity, efficiency, and versatility in various applications.

**Key Advantages of Arrays**

1.Fast Random Access: Arrays provide O(1) time complexity for accessing elements using their index. This makes them ideal for scenarios where quick lookups are required, such as in lookup tables or caching systems.

2.Cache Efficiency: Since arrays store elements in contiguous memory, they are cache-friendly. Processors can prefetch data efficiently, improving performance during sequential access.

3.Memory Efficiency: Arrays only store the data elements without additional overhead like pointers (as in linked lists). This makes them more memory-efficient for storing large datasets.

4.Versatility: Arrays can store various data types, including integers, floats, characters, and even objects. They are also used as building blocks for more complex data structures like stacks, queues, and heaps.

Ease of Initialization: Arrays are easy to declare and initialize. For example:

arr = [1, 2, 3, 4, 5] # Initialize an array with integers
Copy
Support for Mathematical Operations: Arrays are widely used in mathematical computations, such as storing vectors and matrices for operations like addition, multiplication, and transformations.

Practical Applications of Arrays

Data Storage: Arrays are used to store collections of data, such as employee IDs, sensor readings, or product prices, allowing efficient initialization, sorting, and searching.

Dynamic Programming: Arrays are essential for storing intermediate results in dynamic programming algorithms, enabling efficient problem-solving.

Graph and Tree Representations: Arrays are used in adjacency matrices for graphs and in compact representations of binary trees.

Buffers and Queues: Arrays act as data buffers for temporarily storing incoming data like network packets or file streams.

Pattern Matching: Arrays are used in string algorithms, such as suffix arrays and pattern matching techniques.

# Day-06
**Pointer**
What is a Pointer in C++?
A pointer is a variable that stores the memory address of another variable instead of storing a direct value.
Pointers are powerful for:

# Dynamic memory allocation
Efficient array and string handling
Passing large objects to functions without copying
Implementing data structures like linked lists, trees, etc.
# Day-07
# Structure :
A structure groups multiple variables of different data types under a single name. 
Every member in a structure has its own independent memory location, meaning all members can hold values simultaneously.
# Union :
A union is similar to a structure ,but all of its members share the exact same  memory location. Consequently ,a union can only hold a value for one member at a time.

# Enumeration :
An enumeration is a user-defined type consisting of a fixed set of named integer constants. It replaces magic numbers with readable words, making your code significantly easier to understand and maintain.
**Behavior of enum**
By default, the first element equals to 0, the second equals to 1 and so on, unless you manuallly assign them values.