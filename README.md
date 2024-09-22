# PLP


PLP1

Welcome to my Repository;

Here: I will be coding in C++
1- C++

2- C++ was developed by Bjarne Stroustrup in 1979. Since C++ is an attempt to add object-oriented features (plus other improvements) to C, it was called C with Objects. As the language developed, Stroustrup named it as C++ in 1983.

3- it's Used in system software, game development, embedded systems, scientific computing and high-performance applications. 

4-I’m used to coding in Python so a helpful thing for me would be seeing the same code for python and c++ side by side and comparing C++ advantages and limitations  to python, I will also try to get my hands on the c++ book by Bjarne Stroustrup 

I’m planning to make use of these sources : https://www.codeconvert.ai/python-to-c++-converter and code academy

1.What did you need to do to install the language?I followed this video to install c++:https://www.youtube.com/watch?v=Qw5qjRNlC-Y
2. Does this language come with a recommended programming environment? What is it? If not,
how did you pick the one that you'll be using?I’m using VS code to code in c++, I used vs code to code in other languages and I find it very convenient for compiling
3. How do you run programs in that language?To write comments in c++, use double backslash //
4. How do you write comments in your language? in python, I used #


#PLP2
This week, I will be addressing several key questions about C++.

Primary Data Types

C++ has several primary data types similar to other languages , including:

Integer
Character
Boolean
Floating Point
Double
Valueless (Void)
Wide Character

Additionally, C++ features more complex data types, such as:

Pointers
References
Enumerations
Classes
Dictionaries
Reserved Words
C++ has approximately 48 reserved keywords, such as class, which cannot be used as identifiers (e.g., filenames). Other reserved words include const, for, do, short, and long.

Interesting Facts about C++ Operations
In C++, you can perform arithmetic operations on various data types:

You can add integers, floats, long integers, and short integers.
Identifiers are named as followed firstWord , the first word should be in lower case and if there's a second word, it starts in a capital case. NO _ in standard notationo
When adding floats and doubles, the default type is double unless specified otherwise.
Similarly, if you combine an integer and a double, the result will also be double by default.
For decimal numbers, C++ assumes a double type unless otherwise indicated. Using float may be beneficial in terms of memory efficiency when dealing with smaller numbers.
when dividing two integers, you get an integer back even if the answer is float , for example 1/3=0.333 0.333 will be translated into 0 in c++ and that can't be changed... sad. when dividing an integer and float, you get a float back unless assigned to be a double, the same thing applies when dividing a double and integer. you can divide character and integer if and only if that character is a number or it's ASCII value has a number stored in it.


When performing operations involving characters, C++ will use the ASCII value of the character. For example, if you declare char c = 'a' and execute the operation c + 5, C++ interprets this as adding the ASCII value of 'a' (97) to 5, resulting in 102.

Syntax for Characters and Strings
Characters must be enclosed in single quotes (e.g., 'a').
Strings require double quotes (e.g., "Hello").
Understanding void
The void type is typically used in functions to indicate that no return value is expected. It can also be employed with pointers to accommodate different data types.

Wide Characters
Wide characters (wchar_t) are used when working with larger character sets, such as those found in different languages.

Boolean Values
In C++, boolean values are represented as 0 (false) and 1 (true). You can use the keywords true and false, but they are ultimately stored as 0 or 1.




Now to to answer the following questions

Is  c++ language statically or dynamically typed? 
Statically written, since 
the type of a variable is checked at the compile time and not the run time. The Main Advantage of this is that all little bugs could be caught earlier in the compilation process and avoided later in the process. The operations are bound during compile time, the identifiers are bound to the memory during runtime.

Strongly typed or weakly typed? -
It is strongly typed , as with every variable declared, you will have to assign a specific type.

Explicitly typed or implicitly typed? 
C++ is explicitly typed. This means that you must declare the type of each variable when you define it. 
This makes the code clearer regarding what types of data are being used.

Mutable or immutable
By default, all objects are mutable in C++, but there are keywords such as const that can make them immutable?


One limitation of C++ is that integers typically use 4 bytes in memory, which can be restrictive when dealing with larger numbers. Additionally, C++ does not allow you to mix data types directly—meaning you cannot add integers or floats to characters. While lists (arrays) and dictionaries (maps) can only store one data type at a time, printing their contents requires iteration; you can't use a simple print statement to display them directly.

