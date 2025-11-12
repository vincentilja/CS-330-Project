# Selection, Loops, and Conditionals

## Conditional Statements

### Comparison Conditions
In C++, as with just about every coding language, the Boolean data type refers to two values: true and false. 
Note that "true" and "false" are spelled in all lower case, unlike other programming languages that require the first letter to be capitalized. This is also unlike other programming languages that use 0 and 1 to represent true and false respectively.
We can use Boolean values to create conditional statements, or statements that will only execute under a specific condition.
We can use comparison conditions to evaluate the truth or falsity of a given conditional statement. These include:
- < (less than)
  - x < y reads as "x is less than y"
- <= (less than or equal to)
  - x <= y reads as "x is less than or equal to y"
- > (greater than)
  - x > y reads as "x is greater than y"
- >= (greater than or equal to)
  - x >= y reads as "x is greater than or equal to y"
- == (equal to)
  - x == y reads as "x is equal to y"
- != (not equal to)
  - x != y reads as "x is not equal to y"
### Logical Operators
We also use logical operators to evaluate the truth or falsity of multiple given conditional statements in a single line of code. These include:
- && (and)
  - x && y means that both x and y must be true in order for the entire statement to be true
  - if either x or y are false, then the entire statement is false
- || (or)
  - x || y means that either x or y must be true in order for the entire statement to be true
  - in order for this statement to be false, both x and y must be false
- ! (not)
  - you may also place an exclamation mark or "not" operator in front of two statements to invert their boolean values
  - if both values evaluated to be true, they will now be false and vice versa. if one statement was true and the other false, the not operator will change their truth values to false and true respectively
### If... Else if... Else
You can use conditional statements in if-else if-else statements in order to execute lines of code in the contingency that a given statement is true or false.
Let's say for example that we are trying to determine, given two integers, which value is greater than another.
Then we can write a program that says:
```
int x = 9;
int y = 32;
if (x > y){
  cout << x + " is greater than " + y << endl;
}
else{
  cout << y + " is greater than " + x << endl;
}
```
An if-else statement begins with the keyword "if", a conditional statement in parentheses, followed by a statement contained within two curly brackets, our delimiting factors
The "else" statement doesn't require a conditional statement in parentheses because it executes if the "if"'s conditional statement was evaluated to be false.
You can also create an if-else statement that executes if the conditional statement is false:
```
int x = 9;
int y = 32;
if (x > y == false){
  cout << y + " is greater than " + x << endl;
}
else{
  cout << x + " is greater than " + y << endl;
}
```
You can also use the aforementioned logical operators in these statements as well
```
// Create an if-else statement that determines whether someone born in June is a Gemini or a Cancer
int birthDay = 6;
int birthMonth = "June";
if (birthDay <= 20 && birthMonth == "June"){
  cout << "You are a Gemini!" << endl;
else{
  cout << "You are a Cancer!" << endl;
}
```
You can also create nested if-else statements:
```
// Create an if-else statement that determines whether someone born in June is a Gemini or a Cancer
int birthDay = 6;
int birthMonth = "June";
if (birthMonth == "June"){
  cout << "You are either a Gemini or a Cancer!" << endl;
  if (birthDay <= 20){
    cout << "You are a Gemini!" << endl;
  }
  else{
    cout << "You are a Cancer!" << endl;
  }
else{
  cout << "You are something else!" << endl;
}
```
But what if we were to say:
```
int x = 9;
int y = 9;
if (x > y){
  cout << x + " is greater than " + y << endl;
}
else{
  cout << y + " is greater than " + x << endl;
}
```
It would be incorrect to say that y is greater than x if they are both of the same value.
This is where if-else if-else statements come in handy.
If-else if-else statements can be used if you want to evaluate multiple conditional statements, creating a statement that executes in the case that each are true.
We can fix the previous example by writing:
```
int x = 9;
int y = 9;
if (x > y){
  cout << x + " is greater than " + y << endl;
}
else if{
  cout << y + " is greater than " + x << endl;
}
else{
  cout << "It appears that these numbers are equal to each other"
}
```
Remember how we determined that the curly braces are the "delimiting factors" in our if-else if-else statement code blocks? You may wonder what happens if you remove them.
The ambiguity created by the lack of curly braces around each if-else if-else statement, especially when nested, can create what is called a "dangling else" in which a compiler cannot determine which if-else if statement a certain else statement belongs to
Let's use our previous example of a nested if-else statement:
```
// Create an if-else statement that determines whether someone born in June is a Gemini or a Cancer
int birthDay = 6;
int birthMonth = "June";
if (birthMonth == "June"){
  cout << "You are either a Gemini or a Cancer!" << endl;
  if (birthDay <= 20)
    cout << "You are a Gemini!" << endl;
  else
    cout << "You are a Cancer!" << endl;
else
  cout << "You are something else!" << endl;
}
```
Technically curly braces were placed around the if-else statement but not around the code blocks contained within each if and else statement. This will create erroneous results. 
Thankfully this problem is easy to avoid as long as you remember to create delimiting factors ({}) around each code block in an if-else if-else statement
## Short Circuit Evaluation
When using logical operators, you may run into errors by linking a conditional statement to another conditional statement in such a way that a contradiction is formed.
Example:
```
int x = 9;
if (x != 9 && x == 9){
  cout << "This is a contradiction!" << endl;
}
else{
  cout << "Please do not use and operators like this!" << endl;
}
```
In this case, the else statement will execute not only because neither statement can be simultaneously true, but because if the statement to the left of an "and" logical bitwise operator is false, the compiler will not try to evaluate the truth value of the right side statement.
Remember that in an "and" statement, both conditional statements must be true for the entire statement to be true. 
If the first conditional statement evaluated is false, the entire statement is false and it would be redundant to evaluate the rest of the statement, saving on processing speed.
Now what would happen if you were to use an or statement?
```
int x = 9;
if (x == 9 || x != 9){
  cout << "This is a contradiction!" << endl;
}
else{
  cout << "Please do not use and operators like this!" << endl;
}
```
This code would execute the code block contained under the "if" statement because it evaluates the statement to the left side of the logical operator, evaluates it to be true, and executes the statement below.
## Switch Statements
A switch statement can be used in lieu of an if-else if-else statement if you only need to evaluate the value of one condition, e.g. what month were you born on?
Like if-else if-else conditions, each case must end with a "break;" statement, a unique delimiting factor used in switch statements. This allows you to bypass the other swtich statements and continue through the rest of your code.
However, unlike if-else if-else statements that trigger a dangling else problem if each statement is not enclosed in curly braces, 
the entirety of a switch statement can be enclosed in curly braces as each "case" (used in lieu of if-else if-else) evaluates as true if the case number matches the value of the variable in the switch condition statement.
You can use the default keyword at the end of the switch statement to execute a statement in the event that none of the cases evaluate to true.
Let's revisit our Zodiac example.
Given a birth month, you can narrow down someone's Zodiac sign to two options.
```
int birthMonth = 6;
switch (birthMonth) {
  case 1:
    cout << "You are either a Capricorn or an Aquarius" << endl;
    break;
  case 2:
    cout << "You are either an Aquarius or a Pisces" << endl;
    break;
  case 3:
    cout << "You are either a Pisces or an Aries" << endl;
    break;
  case 4:
    cout << "You are either an Aries or a Taurus" << endl;
    break;
  case 5:
    cout << "You are either a Taurus or a Gemini" << endl;
    break;
  case 6:
    cout << "You are either a Gemini or a Cancer" << endl;
    break;
  case 7:
    cout << "You are either a Cancer or a Leo" << endl;
    break;
  case 8:
    cout << "You are either a Leo or a Virgo" << endl;
    break;
  case 9:
    cout << "You are either a Virgo or a Libra" << endl;
    break;
  case 10:
    cout << "You are either a Libra or a Scorpio" << endl;
    break;
  case 11:
    cout << "You are either a Scorpio or a Sagittarius" << endl;
    break;
  case 12:
    cout << "You are either a Sagittarius or a Capricorn" << endl;
    break;
  default:
    cout << "Invalid birth month. Try again." << endl;
    break;
}
```
