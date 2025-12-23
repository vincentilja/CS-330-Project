# Classes and Inheritance in C++

## What are Objects and Classes?

In C++ as in other programming language, an object is a representation of data, usually with attributes and methods to operate on those attributes. They are contained within classes that instantiate the attributes and create methods to operate on them.
C++ was created to be a version of C that supports objects and classes. As such, it is considered an object oriented programming language. 
For example, a cat could be an object. Cats have certain attributes: name, age, weight, pelt color, etc. A cat object can be instantiated using a class. To create a class, one may use similar syntax:
```
class CatClass {
  public:
    string catName;
    int catAge;
    int catWeight;
    string catPelt;
};
```
When creating a class, you must start by declaring the class with the "class" reserved word. You may then name your class. Conventionally, this is done by using an uppercase letter as the first character in the class name. Any other words should also begin with uppercase letters.
Then you describe the scope of the object attributes with an access specifier. If you would like for them to be operated on and returned to another function (like main()), you would set it to public. 
- You may also set it to private, which means attributes cannot be accessed outside the class
- You may also set it to protected, which means attributes cannot be accessed outside class that aren't inherited (more about that later)

Finally, you can create object attributes by first specifying the data type of the attribute, the attribute's name (using variable conventions (e.g. first character should be a lowercase letter, any alphanumeric characters may follow ([A-Za-z0-9_])). Finish with a semicolon.
Wrap everything contained within the class (the access specifier and attributes) in an open and closed curly brace ({class features}) and finish once more with a semicolon.
## Creating an Object
Now that we've created a cat class, we can create a cat object! We can instantiate a cat object and its attributes in main
```
#include <iostream>;
using namespace std;
class CatClass {
  public:
    string catName;
    int catAge;
    int catWeight;
    string catPelt;
};

int main(){
    CatClass cat1;

    cat1.catName = "Violet";
    cat1.catAge = 11;
    cat1.catWeight = 9;
    cat1.catPelt = "Diluted Tortoiseshell";

    cout << "Name: " << cat1.catName << " Age: " << cat1.catAge << " Weight: " << cat1.catWeight << " Pelt Color: " << cat1.catPelt << endl;
    return 0;
}
```
You can create objects in main by stating the name of the class, then naming the object (variable naming conventions apply, as stated in the section on attribute naming above). Finish with semicolon.
To instantiate attributes (as long as the access specifier is private), you state the name of the newly created object, followed by a period (.), and state the name of the attribute you'd like to instantiate (catName, catAge, etc.). 
Then hit the space bar, type an equal sign that assigns a value to the attribute to instantiate it, then another spacebar hit. Type the value you'd like to instantiate the attribute with. This must be of the same data type as the specified attribute. Error will occur otherwise. Finish with semicolon.
You can also create multiple attributes!
```
#include <iostream>;
using namespace std;
class CatClass {
  public:
    string catName;
    int catAge;
    int catWeight;
    string catPelt;
};

int main(){
    CatClass cat1;
    CatClass cat2;
    CatClass cat3;

    cat1.catName = "Violet";
    cat1.catAge = 11;
    cat1.catWeight = 9;
    cat1.catPelt = "Diluted Tortoiseshell";

    cat2.catName = "Jet";
    cat2.catAge = 0;
    cat2.catWeight = 5;
    cat2.catPelt = "Tuxedo";

    cat3.catName = "Mimi";
    cat3.catAge = 6;
    cat3.catWeight = 7;
    cat3.catPelt = "Black";
    

    cout << "Name: " << cat1.catName << " Age: " << cat1.catAge << " Weight: " << cat1.catWeight << " Pelt Color: " << cat1.catPelt << endl;
    cout << "Name: " << cat2.catName << " Age: " << cat2.catAge << " Weight: " << cat2.catWeight << " Pelt Color: " << cat2.catPelt << endl;
    cout << "Name: " << cat3.catName << " Age: " << cat3.catAge << " Weight: " << cat3.catWeight << " Pelt Color: " << cat3.catPelt << endl;
    return 0;
}
```
However, this method is rather tedious. You can use class constructors to streamline the process. Constructors take in parameters and instatiate them as object attributes. You can call a constructor from main to create an object.
```
#include <iostream>;
using namespace std;
class CatClass {
  public:
    string catName;
    int catAge;
    int catWeight;
    string catPelt;
    Cat(string n, int a, int w, string p) {
      catName = n;
      catAge = a;
      catWeight = w;
      catPelt = p;
      }
};

int main(){
    CatClass cat1("Violet", 11, 9, "Diluted Tortoiseshell");
    CatClass cat2("Jet", 0, 5, "Tuxedo");
    CatClass cat3("Mimi", 6, 7, "Black");
    
    cout << "Name: " << cat1.catName << " Age: " << cat1.catAge << " Weight: " << cat1.catWeight << " Pelt Color: " << cat1.catPelt << endl;
    cout << "Name: " << cat2.catName << " Age: " << cat2.catAge << " Weight: " << cat2.catWeight << " Pelt Color: " << cat2.catPelt << endl;
    cout << "Name: " << cat3.catName << " Age: " << cat3.catAge << " Weight: " << cat3.catWeight << " Pelt Color: " << cat3.catPelt << endl;
    return 0;
}
```
## Object Methods
There are a few functions that are commonplace when instantiating methods, especially when the access specifier is set to private. These include getter and setter methods that retrieve the values of certain attributes and change them.
Let's say that we're working for a veterinary office and we want our feline patient data to be inaccessible to the general public. Let's also say that one of our patients had an appointment in which it was discovered that they had gained weight. We may reconstruct the class as such:
```
class Cat {
  private:
    string catName;
    int catAge;
    int catWeight;
    string catPelt;
  public:
    void setName(string n) {
      catName = n;
    }
    string getName() {
      return catName;
    }
    void setAge(int a) {
      catAge = a;
    }
    int getAge() {
      return catAge;
    }
    void setWeight(int w) {
      catWeight = w;
    }
    int getWeight () {
      return catWeight;
    }
    void setPelt (string p) {
      catPelt = p;
    }
    string getPelt () {
      return catPelt;
    }
};

int main() {
    Cat cat1;
    cat1.setWeight(12);
    cout << cat1.getWeight() << endl;
    return 0;
}
```
## Inheritance
You may also create classes that inherit from other classes. 
Let's say for example that our veterinary office does not only treat domestic cats, but all varieties of felines, including lions.
Unlike domestic cats (felis catus), lions have subspecies. They can be divided into two subspecies: the Asiatic lion (panthera leo leo) and the African lion (panthera leo melanochaita).
This means that lions have many shared traits with their domesticated relatives, but they have one key difference. We can create a lion class that inherits from the cat class, which includes a subspecies attribute:
```
#include <iostream>;
using namespace std;
class CatClass {
  public:
    string catName;
    int catAge;
    int catWeight;
    string catPelt;
};

class Lion: public Cat {
  public:
    string subspecies;
};

int main(){
    CatClass cat1;
    Lion lion1;

    cat1.catName = "Violet";
    cat1.catAge = 11;
    cat1.catWeight = 9;
    cat1.catPelt = "Diluted Tortoiseshell";

    lion1.catName = "Leopold";
    lion1.catAge = 9;
    lion1.catWeight = 500;
    lion1.catPelt = "Tawny";
    lion1.subspecies = "African";
    
    return 0;
}
```
To assign a parent class to a child class, you type class and the name of your child class, followed by a colon (:), followed by the word class and the name of the parent class.
C++ also supports multiple inheritance. Let's say that we need to differentiate between lions that were raised in the wild and ones raised in captivity. 
We might need an extra attribute to catalog which zoo the lion is from.
```
#include <iostream>;
using namespace std;
class CatClass {
  public:
    string catName;
    int catAge;
    int catWeight;
    string catPelt;
};

class Lion: public Cat {
  public:
    string subspecies;
};

class ZooLion : public Lion, public CatClass {
  public:
    string zoo;
};

int main(){
    CatClass cat1;
    Lion lion1;
    ZooLion lion2;

    cat1.catName = "Violet";
    cat1.catAge = 11;
    cat1.catWeight = 9;
    cat1.catPelt = "Diluted Tortoiseshell";

    lion1.catName = "Leopold";
    lion1.catAge = 9;
    lion1.catWeight = 500;
    lion1.catPelt = "Tawny";
    lion1.subspecies = "African";

    lion2.catClass::catName = "Nepeta";
    lion2.catClass::catAge = 5;
    lion2.catClass::catWeight = 280;
    lion2.catClass::catPelt = "Tawny";
    lion2.subspecies = "Asiatic";
    lion2.zoo = "Central Park Zoo";
    
    return 0;
}
```
Note that when instantiating attributes in the parent class for a grandchild object, the grandchild object name must be followed by a period (.), the parent class name, two colons (::), and the attribute name before instantiation can occur.
Otherwise an ambiguity error will result.
## Overloading
Overloading occurs when a function from a parent class shares a name with a function from the child class.
When the function is called in main, you are only able to access the child class' function, not the parent.
You may avoid this by utilizing the "using" keyword.
```
#include <iostream>
using namespace std;

class Parent {
public:
  int function() {
    cout << "Hi! I'm a function!" << endl;
    return 0;
}
};

class Child : public Parent {
public:
  using Parent::function;

  int function(char c){
    cout << "DON'T LOOK AT ME" << endl;
    return 0;
}
};

int main()
{
  Child c;
  c.function();
  return 0;
}
```
This is known as name hiding. 
To implement the using keyword, after instantiating the attributes in the child class, type the keyword "using", followed by the parent class' name, followed by the parent class function with the same name as the child class function.

## Sources:
- https://www.w3schools.com/cpp/cpp_classes.asp
- https://www.w3schools.com/cpp/cpp_constructors.asp
- https://www.w3schools.com/cpp/cpp_access_specifiers.asp
- https://www.w3schools.com/cpp/cpp_encapsulation.asp
- https://www.w3schools.com/cpp/cpp_inheritance.asp
- https://www.w3schools.com/cpp/cpp_inheritance_multiple.asp
- https://www.geeksforgeeks.org/cpp/inheritance-ambiguity-in-cpp/
- https://www.geeksforgeeks.org/cpp/does-overloading-work-with-inheritance/
