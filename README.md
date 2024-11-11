# C++ PLP

# PLP1

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

# PLP2

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



# PLP3
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
### Example:
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



# PLP4

Hello in this PLP, I will be talking about conditional statements;

-In C++, boolean values are represented as:

true: Represents truth (equivalent to 1).
false: Represents falsehood (equivalent to 0).

### Example:

bool isEven = true;
bool isODD = false;

cout << "Is the number even? " << isEven << endl;  // Outputs: 1
cout << "Is it odd " << isODD << endl; // Outputs: 0

Conditional statements in C++:


1- if Statement:


if (condition) {
    // code if true
} else {
    // code if false
}

2- if- else if -else Statement:

if (condition1) {
    // code for condition1
} else if (condition2) {
    // code for condition2
} else {
    // code if all conditions are false

3- ?: statements

### Example:
z=1
y=5
 int max_value = (z > y) ? z : y;
  cout << "The max of " << z << " and " << y << " is " << max_value << endl; //max_value=y

in this example (z > y)? returns true or false, if true then the answer is z else its false




Delimiters:
Delimiting Code Blocks
C++ uses curly braces {} to define code blocks under conditional statements. This allows you to group multiple statements together.

Short-Circuit Evaluation
C++ supports short-circuit evaluation with logical operators:

&& (AND): If the first operand is false, the second is not evaluated.
|| (OR): If the first operand is true, the second is not evaluated.


### Example:

bool checkFirst() {
    cout << "Checking first condition." << endl;
    return false; // returns false
}

bool checkSecond() {
    cout << "Checking second " << endl;
    return true; // returns true
}

int main() {
    if (checkFirst() && checkSecond()) {
        cout << "Both conditions are true." << endl;
    } else {
        cout << "At least one condition is false." << endl; // This will execute
    }
    return 0;
    
Dangling Else Problem
C++ resolves the "dangling else" problem by always associating the else with the closest preceding if that lacks an else.


### Example:

int x = 4;
if (x > 0)
    if (x > 5)
        cout << "x is greater than 5." << endl;
else
    cout << "x is not greater than 0." << endl; // Associated with the inner if so its going to print "x is not greater than 0."

-To avoid this dangling else problem add curly brackets

if (x > 0) {
    if (x > 5) 
    {
        cout << "x is greater than 5." << endl;
    }
            } 
else {cout << "x is not greater than 0." << endl;}

Switch Statement Behavior
In C++, a break is optional, but you would want to use one to exit a switch case. Without a break, the program continues executing the following cases (fall-through behavior).

### Example: 

int x = 2;
switch (x) {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl; // This will execute
        // No break here, so the next case will also execute
    case 3:
        cout << "Three" << endl; // This will also execute
        break;
    default:
        cout << "Default" << endl;
}
Make sure to look through the conditional statement code and debug it to see whats going on beneath the hood


# plp5: 
# Understanding Classes, Inheritance, and Pure Virtual Functions in C++
### This guide explains how to use classes, inheritance, and pure virtual functions in C++ with a simple example.

#### 1. What is a Class?
A class defines the blueprint for creating objects, including their attributes and behaviors.

## Example: The Pet Class
class Pet {
protected:
    string Name;
    int Age;
    float HumanEquAge;
public:
    Pet(string name, int age) : Name(name), Age(age), HumanEquAge(0) {}

    virtual void CalculateHumanEquAge() = 0;  // Pure virtual function

    float getHumanEquAge() const { return HumanEquAge; }
};

- Attributes: Name, Age, and HumanEquAge.
- Constructor: Initializes Name, Age, and HumanEquAge.
- Pure Virtual Function: CalculateHumanEquAge() must be implemented by derived classes.
  
#### 2. What is Inheritance?
Inheritance allows a class to inherit properties and methods from another class.

Example: The Dog Class

class Dog : public Pet {
public:
    Dog(string name, int age) : Pet(name, age) {}

    void CalculateHumanEquAge() override {
        if (Age == 1) HumanEquAge = 1;
        else if (Age == 2) HumanEquAge = 2;
        else HumanEquAge = 2 + ((Age - 2) * 7);
    }
};
Inheritance: Dog inherits from Pet and implements CalculateHumanEquAge().
### 3. Forcing Implementation with Pure Virtual Functions
To force a derived class to implement a function, declare the function as pure virtual using = 0.

Example: Abstract Pet Class with Pure Virtual Function
cpp
Copy code
class Pet {
protected:
    string Name;
    int Age;
    float HumanEquAge;

public:
    Pet(string name, int age) : Name(name), Age(age), HumanEquAge(0) {}

    virtual void CalculateHumanEquAge() = 0;  // Pure virtual function

    float getHumanEquAge() const { return HumanEquAge; }
};
Pure Virtual Function: Forces derived classes to implement CalculateHumanEquAge().
Example: Dog Class Implementation
cpp
Copy code
class Dog : public Pet {
public:
    Dog(string name, int age) : Pet(name, age) {}

    void CalculateHumanEquAge() override {
        if (Age == 1) HumanEquAge = 1;
        else if (Age == 2) HumanEquAge = 2;
        else HumanEquAge = 2 + ((Age - 2) * 7);
    }
};
#### 4. Putting It All Together

int main() {
    Dog d1("Harry", 12);
    d1.CalculateHumanEquAge();
    cout << "Human Equivalent Age of Dog: " << d1.getHumanEquAge() << endl;
    return 0;
}
#### Summary
- Classes define objects with attributes and methods.
- Inheritance allows derived classes to inherit and override methods.
- Pure Virtual Functions force derived classes to implement specific methods, making the base class abstract.
- This example demonstrates how to use inheritance and pure virtual functions to create reusable and flexible object-oriented code.










