# Functions in C++

## An Introduction

In C++, functions take in inputs, called parameters. They operate on these parameters to return an output (or you can create a function that returns a void value, if no output is desired).
To declare a function in C++, you follow this syntax:

```
void thisIsAFunction(){
cout << "Hello! I am a function!" << endl;
}
```
One must first declare what the return value is (int, string, void, etc.) before creating a function name. Function naming conventions largely follow variable naming conventions (you may only use alphanumeric characters and underscores, no whitespace or special characters allowed, etc.).
After the function name, you type open and closed parentheses. In this space, you place your inputs or parameters, but they are optional. If you would like to add parameters, between the open and closed parentheses you would state the data type (int, string, etc.) of the parameter first before its name.
If you are adding multiple parameters, separate them by placing a comma after each parameter name. 
One does not need to place a function in main in order for it to run, but it is recommended that you create functions in main if you are writing multiple functions. However, one must declare the variables associated with each parameter before calling a function that operates on them.
Similarly, one must have to first declare a function before it is able to be called in main. For example, to write a function that takes in two integer inputs and multiplies them, you could write something similar to this.
```
#include <iostream>;
using namespace std;


int thisOperatesOnIntegers(int num1, int num2){
    int num3 = num1 * num2;
    return(num3);
}

int main(){
    int num1 = 9;
    int num2 = 12;
    int num3 = thisOperatesOnIntegers(num1, num2);
    cout << num3 << endl;
}
```
Here, return 0 is equivalent to returning void.
You may also write functions that take in multiple parameters of different data types! You simply need to declare the data type of the parameter before the parameter's name as seen before with the integer multiplication function.
```
#include <iostream>;
using namespace std;

void nameAndAge(string name, int age){
cout << "Name: " << name << ", Age: " << age << endl;
}

int main(){ 
    string name1 = "Jessica";
    string name2 = "Joao";
    string name3 = "Jethro";
    int age1 = 29;
    int age2 = 9;
    int age3 = 99;
    nameAndAge(name1, age1);
    nameAndAge(name2, age2);
    nameAndAge(name3, age3);
    
}
```
##Recursive Functions
Recursive functions are also relatively easy to implement. They usually consist of a conditional with a pseudo-loop control variable that permits recursion until a certain condition is achieved. For example, one could write something similar to this if they wished to calculate a factorial:
```
#include <iostream>;
using namespace std;

int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}

int main() {
  int num = 6;
  cout << "Factorial of " << num << " is " << factorial(num);
  return 0;
}
```
##Mutliple Return Values?
Unfortunately, C++ does not allow you to return multiple values at once, but there are sneaky ways to get around this restriction. This can be done with pointers and references, arrays and tuples. But the easiest method is to use vectors along with the find() and substr() methods.
```
#include <iostream>;
#include <string>
#include <vector>
using namespace std;
vector<string> split_sentence(string original) {
    vector<string> stringArray;
    size_t head = 0;
    size_t tail;
    while ((tail = original.find(' ', head)) != string::npos) {
        stringArray.push_back(original.substr(head, tail - head));
        head = tail + 1;
    }
    stringArray.push_back(original.substr(head));
    return stringArray;
}


int main(){
    string original = "Hello there.";
    vector<string> stringArray = split_sentence(original);
    
    for (string words : stringArray) {
        cout << words << endl;
    }
    
}
```
Vectors are data types similar to arrays, but they are more easily manipulatable than arrays or tuples, making them an ideal choice whenever returning multiple data types. To instantiate a vector, write "#include <vector>" before writing "using namespace std;", which allows you to
create vectors and use vector-related methods. The find() method locates and isolates instances of a substring within a larger string. The substr() method splits large strings into smaller strings based on list position and the number of characters that you want to be returned in the substring.
For example, the code below would split the string "Hello there" into "Hello" and "there."
```
int main() {
    string original = "Hello there.";
    string sub = original.substr(0, 5);
    string sub2 = original.substr(6, 5);
    cout << sub << " " << sub2 << endl;
}
```
##Pass-by-Reference vs. Pass-by-Value
Although C++ passes most data types by value by default. For example, this is what happens when one attempts to pass an integer by value.
```
namespace std;
void passByValue(int x) {
    x = 12;
}

int main() {
    int x = 9;
    int y;
    // Passing x by value to change()
    passByValue(x);
    
    cout << "X: " << x << endl;
    return 0;
}
```
However, to pass-by-reference, you only need to make one minute modification to the function above. 
Namely, by using the ampersand (&) after the data type to signify that the parameter being passed in is merely the address to a value in main, not necessarily the value itself.
By changing the value in memory by using a value's address, you allow that function's value to remain instantiated globally (or at least wherever it is next used in code).
```
namespace std;
void passByValue(int& x) {
    x = 12;
}

int main() {
    int x = 9;
    int y;
    // Passing x by value to change()
    passByValue(x);
    
    cout << "X: " << x << endl;
    return 0;
}
```
This possibility for variance allows C++ to be a flexible language.
##Storage in Memory
When you interact with local variables, arguments, and parameters within functions, you are typically interacting with objects on the stack.
However, you can explicitly request to interact with the heap via references with the "new" operator. It is then up to the programmer to free up
memory space by using the delete operator.
- The new operator creates space in memory for one of each data type, i.e. an integer
- The delete operator frees up this space from memory to prevent memory leakage
```
int* ptr = new int;
*ptr = 9;
cout << *ptr << endl;
```
It should be noted that there are side effects as part of function implementation, as C++ supports print and input statements with their iostream library.
