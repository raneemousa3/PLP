# C++ PLP

PLP1

Welcome to My Repository
In this repository, I will be coding in C++.

About C++
History: C++ was developed by Bjarne Stroustrup in 1979 as an enhancement to C, originally called "C with Objects." It was officially named C++ in 1983.

Applications: C++ is widely used in system software, game development, embedded systems, scientific computing, and high-performance applications.

Transitioning from Python: As someone familiar with Python, I find it helpful to compare equivalent code in both languages to understand C++'s advantages and limitations. I plan to explore Bjarne Stroustrup's C++ book as well.

Resources
Python to C++ Code Converter: CodeConvert
Codecademy
Installation and Environment
Installing C++: I followed this YouTube tutorial for installation.

Programming Environment: I’m using Visual Studio Code (VS Code) for C++ development. I find it convenient for compiling, as I've used it for other languages before.

Running Programs: In C++, comments are written using //. In Python, comments are made with #.

PLP2

This Week's Focus: C++ Data Types and Operations
Primary Data Types
C++ has several primary data types, including:

Integer
Character
Boolean
Floating Point
Double
Void (Valueless)
Wide Character
Additionally, C++ supports complex data types like:

Pointers
References
Enumerations
Classes
Dictionaries
Reserved Words
C++ has about 48 reserved keywords (e.g., class, const, for, do, short, long) that cannot be used as identifiers.

Interesting Facts about C++ Operations
Arithmetic operations can be performed on various data types (integers, floats, etc.).
Identifiers should follow the format: firstWord (first word in lowercase, subsequent words capitalized, no underscores).
Adding floats and doubles defaults to double type.
When dividing two integers, the result is truncated to an integer (e.g., 1/3 results in 0).
Dividing an integer by a float yields a float.
Character arithmetic uses ASCII values (e.g., char c = 'a'; c + 5 results in 102).
Syntax for Characters and Strings
Characters: Enclosed in single quotes (e.g., 'a').
Strings: Enclosed in double quotes (e.g., "Hello").
Understanding Void and Wide Characters
Void: Indicates no return value expected in functions.
Wide Characters: Used for larger character sets in different languages.
Boolean Values
In C++, boolean values are represented as 0 (false) and 1 (true). The keywords true and false correspond to these values.

Language Characteristics
Statically or Dynamically Typed?: C++ is statically typed, with variable types checked at compile time, allowing early bug detection.

Strongly or Weakly Typed?: C++ is strongly typed, requiring explicit type declarations for variables.

Explicitly or Implicitly Typed?: C++ is explicitly typed, requiring the type to be declared for each variable.

Mutable or Immutable?: Objects are mutable by default, but can be made immutable with the const keyword.

Limitations of C++
Integer size is typically 4 bytes, which can be restrictive for large numbers.
You cannot directly mix data types (e.g., adding integers or floats to characters).
Lists (arrays) and dictionaries (maps) store only one data type at a time and require iteration for printing.



PLP3-
FUNCTIONS 
In this section, I will be covering Functions in C++, Lets get started:

Function Declaration Syntax
In C++, a function is declared using the following syntax:

return_type function_name(parameter_type1 parameter_name1, parameter_type2 parameter_name2)
{
    // function body
}
2.How functions are placed in Code:

Functions can be defined in various places within a C++ file:

Before main: If defined before the main() function, it can be called directly.
After main: If defined after, you need to declare a function prototype before main().
Inside Classes: inline functions are defined inside class definitions.

Recursive Functions
C++ supports recursive functions, allowing a function to call itself. There's no special syntax for this—just the normal function declaration, in the follwing example, it shows how to do factorial
int factorial(int n) {
    if (n <= 1) return 1; // Base case
    return n * factorial(n - 1); // Recursive call
}
There is one issue here, which is that memory is limited for ints and even long types so the factorial function doesn't work for larger numbers


-Multiple Parameters and Different Data Types:
C++ functions can accept multiple parameters, and they can be of different data types. For example:

void myFunction(int a, double b, const string c);

-Returning Multiple Values:
C++ does not support returning multiple values like some languages. However, there are ways to achieve similar functionality:

Using std::pair or a list  You can return a pair or tuple containing multiple values.

std::pair<int, double> myFunction() {
    return std::make_pair(1, 2.5);
}


Pass-by-Reference vs. Pass-by-Value
C++ primarily uses pass-by-value, where a copy of the argument is made. However, you can get around this by passing the location of that item.

void myFunction(int& a); // Passes 'a' by reference

-Storage of Arguments, Parameters, and Local Variables:
Parameters and local variables are stored on the stack. For large objects or dynamic memory, the heap may be used.
When passing by reference, a reference to the memory location (heap or stack) is passed instead of a copy.

Scoping Rules
Local Scope: Variables defined within a function are local to that function and cannot be accessed outside.
Global Scope: Global variables are accessible from any function.
Lifetime: Local variables are created upon function entry and destroyed upon exit.


Side Effects
Side effects (modifying global state or passing by reference) are possible in C++, for example if you pass a value in an array, you would be able to chnage it as arrays in c++ are passby reference.

Storage of Local Variable Values:
Local variables are typically stored on the stack. If you dynamically allocate memory using new, that memory is on the heap.


Other Aspects of Functions
Static vs. Dynamic Scope: C++ uses static scoping, meaning that variable scope is determined at compile time, it could be dynamic by creating virtual functions

Function Overloading: C++ allows multiple functions with the same name but different parameter types or counts.
Inline Functions: Functions can be declared with the inline keyword to suggest to the compiler to expand them inline to reduce function call overhead, this is only possible for simple functions with no returns and no loops.

Make sure You take a look at files sp3, 4,5 and 6 and the functions file to gain a deeper understanding on functions and how they work in c++.








