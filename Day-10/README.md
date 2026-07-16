# Inline Functions in C++
**Definition**
An inline function is a function whose body is expanded in place at the point of call, rather than performing a normal function call.
The inline keyword is a suggestion to the compiler — it is not guaranteed.
# Key Points

**Purpose**:

1.Reduce function call overhead for small, frequently used functions.
2.Enable compile-time substitution of function code.
3.When Functions Are Implicitly Inline:

# Limitations:

1.Large functions should not be inlined (can increase binary size).
2.Recursive functions are generally not inlined.
3.Inlining is decided at compile time.



# Best Practices:
1.Use inline for small, performance-critical functions.
2.Place inline function definitions in header files.
3.Avoid inlining large or complex functions (can cause code bloat).
4.Let the compiler’s optimizer decide — modern compilers often inline automatically.
