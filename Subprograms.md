# Subprograms and Functions in C++

## Syntax

> In C++, we our function declaration statement begins with the data type that we are to return (void, String, int, etc.).
> Next, we name our function with rules and conventions similar to that of naming variables (first character must be a lowercase letter, but lowercase, uppercase, digits, and underscores are allowed after that).
> We finish the function name by following it immediately with an open and closed parenthesis, i.e. ()
> We also use curly braces ({}) to delimit any code contained within a function. Conventionally, we should place an open curly brace after the open and closed parentheses in the function definition and a closing curly brace at the end of the code to be executed within the function body.

### Example
```
void myFunction(){
// this is code to be executed in myFunction()
}
```

## To Forward Declare or Not to Forward Declare

> You may be wondering whether we should include a program's functions in a main function or if we can declare them globally. Generally, you should simply just declare your functions in a main function contained within a class but you may also choose to "forward declare" or declare a variable, function, etc. before you use it. Whatever you choose, you must be consistent. Though generally, you should place all functions in a main function contained within a class for legibility, especially if working with a team of programmers.
```
#include <iostream>
  using namespace std;

class className{
  
```
