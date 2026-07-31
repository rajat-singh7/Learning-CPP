# Friend Function:
A friend function in C++ is a non-member function that has the right to access the private and protected members of a class in which it is declared as a friend.
**Key Points:**

Friend functions are not members of the class but have full access to its private/protected data.

They can be global functions or member functions of another class.

Friendship is not inherited — derived classes do not automatically inherit friend relationships.

They can be used to allow operator overloading or to enable tight coupling between classes when necessary.