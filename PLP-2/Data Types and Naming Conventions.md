# Data Types and Naming Conventions</h1>
## Variables
### What is a Variable?
A variable is a placeholder name that represents a specific data value of a certain data type.
            Data types that can be represented as variables include:
            <li>int (short for integer): a positive or negative whole number,
                 without decimal points (e.g. 32)</li>
            <li>float: a positive or negative decimal number with slightly less precision with a size of 4 bytes (e.g. 78.9)</li>
            <li>double: a positive or negative decimal number with slightly more precision with a size of 8 bytes (e.g. -32.8) </li>
            <li>string: text characters (often but not necessarily words) 
                unified by double quotation marks (e.g. "Handle with Care")</li>
            <li>char: one single text character contained within single quotation marks (e.g. 'X')</li>
            <li>bool: the values true or false (note that "true" and "false" are stated in all lowercase,
                unlike other languages such as Python that require the first letter to be capitalized ("True", "False"))
            </li>
            <li>void: represents the absence of a value, especially for use in statements that return nothing</li>
            <li></li>
        <p>To declare a variable, one must state the data type (int, string, bool, etc.), add a space, write out the variable name,
        add a space, type an equal sign, add a space, type out the value of the data type, and finish with a semicolon.
        The finished product should look something like this:</p>
     ```int myNum = 32;```
        <p>It should be noted that in order to create a string variable in C++, you must import the string library to your file first.</p>
            ```#include <string>
            string myGreeting = "Hello, World!";```
        <p>The creation of a pointer variable proves to be equally interesting, requiring the addition of an asterisk at the end of
            the data value and an ampersand before the declaration of a value.</p>
            ```string* myPointer = &myGreeting;```
        <p>Now that you understand how to create a variable, we should discuss how Not to create a variable.</p>
        <h3>Variable Naming Conventions</h3>
        <p>Each variable must have a unique name, called an identifier. Remember that in order to create a variable in C++, you
        must type something similar to this:</p>
            ```string identifier = "This is a variable";```
        <p>However, C++ has built in rules that control what you can and cannot use as an identifier name. These rules can be listed
        as follows: </p>
            <li>Identifiers may include alphanumeric characters and underscores (_)*</li>
            <li>Identifiers may not include whitespace characters ( ) or special characters (@#$%&^, etc.)</li>
            <li>Identifiers are case-sensitive meaning that variablename and variableName aren't the same</li>
            <li>Identifiers may start with a letter or an underscore (_) but they may
                terminate with any alphanumeric or underscore character**</li>
            <li>Identifiers must not be reserved words</li>
        <p>These are naming conventions put forth by the compiler/interpreter, the following describes conventions put forth
            by the community
        </p>
        <li>* Note that the ability to use underscore characters in identifier names means that when you use two words to
        create an identifier, you can either state it as "variable_name" or "variableName"</li>
        <li>** Although you technically can start a variable name with an uppercase letter or an underscore, you should
        begin each identifier with a lowercase letter to follow naming conventions</li>
        <h3>*** Reserved Words</h3>
        <p>So what is a reserved word anyway?</p>
        <p>A reserved word is a word that you cannot use as an identifier because it is used to represent a frequently used
            data type, method, booleans, etc.</p>
        <p>These include:</p>
            <li>bool</li>
            <li>char</li>
            <li>int</li>
            <li>float</li>
            <li>double</li>
            <li>void</li>
            <li>if</li>
            <li>else</li>
            <li>do</li>
            <li>break</li>
            <li>while</li>
            <li>true</li>
            <li>false</li>
            <li>etc.</li>
        <p>For a full list of reserved words, consult your C++ manual or <a>https://www.geeksforgeeks.org/cpp/cpp-keywords/</a></p>
        <p>As of right now, there are 84 reserved words in C++ but do not fret, you will become familiarized with them the more that you
            work with the language</p>
        <h2>Further Discussion Questions</h2>
        <li>C++ is statically typed, meaning that each the data type and the value of each variable is
            acknowledged by compile time</li>
        <li>C++ is strongly typed in that strings and integers cannot be added together or else an error will result.
            You can get around this by converting an integer to a string and vice versa</li>
        <li>Variables in C++ are considered mutable as you can change the data values associated with a specific variable</li>
        <li>All arithmetic operators are available for use with int, float, and double data types, but you may use the plus (+)
            operator on strings for concatenation. Logical, relational, and assignment operators can be used by all data types </li>
        <li>Mixed type operations are allowed between ints, floats, and doubles. Concatenation operations between strings and ints, floats,
            and/or doubles are forbidden unless the latter data values have been converted to strings using the to_string() method</li>
        <li>Identifier names and operators are bound in compile-time</li>
        <li>C++ data values are explicitly typed because you must declare the data type of a variable before instantiating it</li>
        <li>In C++ you can perform arithmetic operations on int, float, and double data types</li>
        <li>However, in C++ you cannot redefine variables with values of foreign data types. You also are unable to create an array containing
            values of different data types. When declaring an array, you must declare the data type of the elements contained within the array first</li>
        <li>There aren't any built-in complex data types that are commonly used in the language as I have yet to come across one or I simply didn't
             recognize it as such when encountering it</li>
```
/*To create string variables, you must import the C++ string library
I have also imported iostream so I can display any output in a terminal 
and namespace std to import the standard C++ library*/
#include <iostream>
#include <string>
using namespace std;
/* Although one can use underscores in identifier names,
I prefer to use camel case */
int main() {
int myInt = 32;
float myFloat = 78.9;
double myDouble = 17.7666;
//Note that string values are declared with double quotes ("")
string myString = "c00kie";
//Whereas char values are declared with single quotes ('')
char myChar = 'X';
bool myBool = true;
int* myPointer = &myInt;
//What happens if I add an integer and a float?
cout << myFloat + myInt; //110.9
/* As you can see, it defaults to a float value (110.9)
which means C++ uses widening conversion*/
// Now what happens if I add a float and a double?
cout << myDouble + myFloat; //96.6666
// Something unexpected happens when I do this.
/*Rather than creating a new line and displaying the sum of
myDouble and myFloat, it concatenates 110.9 and 96.6666 as 
"110.996.6666"*/
// Let's redo this and save each operation as its own variable
float mySum = myFloat + myInt;
cout << mySum;
double myDoubSum = myFloat + myDouble;
cout << myDoubSum;
//Even when I do this, it still concatenates my output
// This happens because I did not use "<< endl;" at the end of my cout statements
// Let's try that again
float mySum = myFloat + myInt;
cout << mySum;
double myDoubSum = myFloat + myDouble;
cout << myDoubSum << endl;
// Much better
// What happens if I divide an integer and float?
cout << myInt/myFloat;
// It once again displays as a float value (0.405577)
//And divide a float and a double?
cout << myFloat/myDouble;
// It displays as a double 4.44092
/*This shows that integers, floats, and doubles can be put together
in an arithmetic expression but it will default to a float if an integer is paired
with a float or default to a double if any data type is paired with a double*/
// What about placing items into arrays?
string myArray[7] = {myInt, myFloat, myDouble, myString, myBool, myChar, myPointer};
/* When creating this array, I already get an error message telling me that I cannot
add these foreign data types into my array of strings. This means that an array
can only contain variables of one shared data value that is declared when the array is created*/
//What if I were to try to convert an integer to a float
float myFloat = myInt;
cout << myFloat;
/* When attempting to redefine myFloat as containing the value of myInt, it displays an
error. You cannot explicitly convert one data type to another data type*/
float myInt;
cout << myInt;
// Implicit redefinition is also a no-no in C++
string x = "5" + 6;
cout << x;
// The only output when I run this code is º <-- this character. I have no idea what this is
int x = "5" + 6;
cout << x;
/* The same character "º" is output when I attempt to run this code,
 saving x as an int type variable instead */
//Seemingly the only way for this operation to work would be to use the to_string() method
string x = "5" + to_string(6);
cout << x;
}
```
    
</html>
