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
// cout << myFloat + myInt; //110.9
/* As you can see, it defaults to a float value (110.9)
which means C++ uses widening conversion*/
// Now what happens if I add a float and a double?
// cout << myDouble + myFloat; //96.6666
// Something unexpected happens when I do this.
/*Rather than creating a new line and displaying the sum of
myDouble and myFloat, it concatenates 110.9 and 96.6666 as 
"110.996.6666"*/
// Lets redo this and save each operation as its own variable
// float mySum = myFloat + myInt;
// cout << mySum;
// double myDoubSum = myFloat + myDouble;
// cout << myDoubSum;
//Even when I do this, it still concatenates my output
/* I believe I will comment out my code progressively 
until I get a solid answer on this phenomenon */
// What happens if I divide an integer and float?
//cout << myInt/myFloat;
// It once again displays as a float value (0.405577)
//And divide a float and a double?
//cout << myFloat/myDouble;
// It displays as a double 4.44092
/*This shows that integers, floats, and doubles can be put together
in an arithmetic expression but it will default to a float if an integer is paired
with a float or default to a double if any data type is paired with a double*/
// What about placing items into arrays?
//string myArray[7] = {myInt, myFloat, myDouble, myString, myBool, myChar, myPointer};
/* When creating this array, I already get an error message telling me that I cannot
add these foreign data types into my array of strings. This means that an array
can only contain variables of one shared data value that is declared when the array is created*/
//What if I were to try to convert an integer to a float
//float myFloat = myInt;
//cout << myFloat;
/* When attempting to redefine myFloat as containing the value of myInt, it displays an
error. You cannot explicitly convert one data type to another data type*/
//float myInt;
//cout << myInt;
// Implicit redefinition is also a no-no in C++
//string x = "5" + 6;
//cout << x;
// The only output when I run this code is º <-- this character. I have no idea what this is
//int x = "5" + 6;
//cout << x;
/* The same character "º" is output when I attempt to run this code,
 saving x as an int type variable instead */
//Seemingly the only way for this operation to work would be to use the to_string() method
//string x = "5" + to_string(6);
//cout << x;
}
