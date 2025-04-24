 ## 1  What is C++?
C++ is a general-purpose programming language created as an extension of the C programming language. It supports both procedural and object-oriented programming paradigms, making it a versatile language for various types of software development.

## 2 What are the advantages of C++?

- Object-Oriented Programming (OOP): Supports encapsulation, inheritance, and polymorphism.
- Performance: Offers high performance and efficient memory management.
- Standard Library: Rich standard library with functions for data structures, algorithms, and more.
- Portability: Code can be compiled and run on various platforms with minimal changes.
- Flexibility: Supports both high-level and low-level programming.

## 3 What are the differences between C and C++?

- OOP Support: C++ supports object-oriented programming; C does not.
- Standard Library: C++ has a richer standard library compared to C.
- Function Overloading: C++ supports function overloading; C does not.
- Namespaces: C++ supports namespaces to avoid name conflicts; C does not.
- Exception Handling: C++ has built-in support for exception handling; C does not.

## 4 What is a class?

A class is a user-defined data type in C++ that serves as a blueprint for creating objects. It encapsulates data members and member functions.

 ## 5 What is an object?

An object is an instance of a class. It contains data and functions defined in the class.

## 6 What are the various features or concepts of OOP?

- Encapsulation
- Inheritance
- Polymorphism
- Abstraction

## 7 What are the different data types in C++?

- Primitive Types: int, char, float, double, bool
- Derived Types: arrays, pointers, references
- User-Defined Types: classes, structures, unions, enums

## 8 What are the different types of storage classes in C++?

- auto
- register
- static
- extern
- mutable

## 9 What are the tokens in C++?

Tokens are the smallest elements of a program, including:

- Keywords
- Identifiers
- Literals
- Operators
- Punctuation

## 10 Does C++ have automatic garbage collection?

No, C++ does not have automatic garbage collection. Memory management is typically done manually using new and delete.

## 11 What are the different types of polymorphism in C++?

- Compile-time Polymorphism: Function overloading, operator overloading
- Run-time Polymorphism: Virtual functions

## 12 How is Late Binding implemented in C++?

Late binding is implemented using virtual functions and pointers or references to base class objects.

## 13 What is namespace in C++?

A namespace is a declarative region that provides a scope to the identifiers inside it, helping to avoid name conflicts.

## 14 What are the different operations permitted on pointers?

- Dereferencing
- Pointer arithmetic
- Comparison
- Assignment

## 15 What is the difference between delete[] and delete?

 - delete: Used to deallocate memory allocated for a single object.
- delete[]: Used to deallocate memory allocated for an array of objects.

## 16 What are the different C++ access specifiers?

- public
- private
 - protected

## 17 What is a friend function?
A friend function is a function that is not a member of a class but has access to its private and protected members.

## 18 What is a virtual function?
A virtual function is a member function that you expect to be redefined in derived classes. It supports run-time polymorphism.

# 19 What is a destructor?
A destructor is a special member function that is called when an object goes out of scope or is explicitly deleted. It cleans up resources.

## 20 What is an overflow error?
An overflow error occurs when a calculation exceeds the maximum limit of the data type.

## 21 What is overloading?
Overloading allows multiple functions or operators to have the same name but different parameters.

## 22 What is function overriding?
Function overriding allows a derived class to provide a specific implementation of a function that is already defined in its base class.

## 23 What is virtual inheritance?
Virtual inheritance is a technique used to avoid multiple "instances" of a base class when using multiple inheritance.

## 24 What is a constructor?
A constructor is a special member function that initializes objects of a class.

## 25 What is a pointer?
A pointer is a variable that stores the memory address of another variable.

 ## 26 What is a scope resolution operator?
The scope resolution operator (::) is used to define the context in which a name is defined, such as a class or namespace.

## 27 What is a pure virtual function?
A pure virtual function is a function with no implementation, declared by assigning 0 in its declaration. It makes a class abstract.

## 28 What is the difference between a struct and a class?
The primary difference is the default access specifier: struct members are public by default, while class members are private by default.

## 29 What is a virtual destructor?
A virtual destructor ensures that the destructor of the derived class is called when an object is deleted through a base class pointer.

## 30 Write a C++ program to print Hello world

``` c++

[#include](https://leetcode.com/problems/minimum-interval-to-include-each-query) <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

``` 


## 31 Write a C++ program to enter a string and find its length
```c++ 

[#include](https://leetcode.com/problems/minimum-interval-to-include-each-query) <iostream>
[#include](https://leetcode.com/problems/minimum-interval-to-include-each-query) <string>

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Length of the string is: " << str.length() << std::endl;
    return 0;
}
```

## 32 What is this pointer?
The this pointer is an implicit pointer available in non-static member functions, pointing to the object for which the function is called.

## 33 What is the difference between function overloading and operator overloading?

- Function Overloading: Multiple functions with the same name but different parameters.
- Operator Overloading: Defining new behaviors for existing operators for user-defined types.

## 34 What is a static member in C++?
A static member is shared among all instances of a class. It belongs to the class rather than any object instance.

## 35 What is a reference variable?
A reference variable is an alias for another variable, created using the & operator.

## 36 What is a copy constructor?
A copy constructor initializes an object using another object of the same class.

## 37 Does C++ support String as a primitive data type?
No, C++ does not support String as a primitive data type. It uses the std::string class from the Standard Library.

## 38 What is a diamond problem and where does it occur?
The diamond problem occurs in multiple inheritance when two classes inherit from the same base class and a derived class inherits from both, leading to ambiguity.

## 39 What is an inline function?
An inline function is a function defined with the inline keyword, suggesting to the compiler to insert the function's body where the function call is made to reduce overhead.

## 40 What is the use of a volatile keyword?
The volatile keyword tells the compiler that a variable's value may change at any time, preventing the compiler from optimizing code that assumes the value does not change unexpectedly.

## 41 Define pass by value and pass by reference

- Pass by Value: A copy of the actual parameter is passed to the function.
- Pass by Reference: The actual parameter itself is passed to the function, allowing modifications.

## 42 What is an auto keyword?
The auto keyword automatically deduces the type of a variable from its initializer.

## 43 What are the different types of loops in C++?

 - for loop
 - while loop
- do-while loop

## 44 What is an abstract class?
An abstract class is a class that cannot be instantiated and usually contains at least one pure virtual function.

## 45 What is a default constructor?
A default constructor is a constructor that can be called with no arguments. If no constructor is defined, the compiler provides a default one.

## 46 Stack vs Heap in C++ ?
"In C++, memory can be allocated either on the stack or the heap, and both have different use cases."

"Stack memory is used for static or automatic memory allocation. It's very fast and managed by the compiler. For example, when I declare a variable like int x = 10; inside a function, it's stored on the stack. The memory is automatically freed when the function ends. But the stack has limited size, and if we use too much of it, we can get a stack overflow."

"Heap memory, on the other hand, is used for dynamic allocation. When I use new to create an object, it's stored on the heap, and it stays there until I explicitly delete it. This gives me more control over the lifetime of the object, but it also means I need to manage it carefully to avoid memory leaks. Heap allocation is generally slower than stack allocation because it involves more complex bookkeeping."

"So, to summarize, the stack is fast and simple but limited in size and lifetime, while the heap is flexible and larger, but requires manual management."


  or -- another way

  "In C++, memory is mainly allocated in two areas — the stack and the heap — and they serve different purposes."

🔹 Stack memory is used for local variables and function calls. It’s managed automatically and is very fast. For example:

``` c++
void myFunction() {
    int x = 10; // stored on the stack
}

```
"Here, x is a stack variable. It gets created when the function runs and is destroyed automatically when the function ends."

🔹 Heap memory, on the other hand, is used when I need to allocate memory dynamically — like when the size isn't known at compile time or the object needs to outlive the current function. For example:

```c++
int* ptr = new int(20); // stored on the heap
delete ptr;   // needs to be manually deleted
```

"In this case, ptr points to a value on the heap. It stays in memory until I explicitly delete it. If I forget to use delete, it causes a memory leak."

📌 In short:
"Use the stack when the data is small, short-lived, and known at compile time. Use the heap when you need dynamic memory, large data, or longer lifetimes."

## 47 Smart Pointers 
"Smart pointers in C++ are a feature from the C++11 standard that help manage dynamic memory more safely and efficiently. They automatically handle memory deallocation, which helps prevent memory leaks and dangling pointers."

🧠 Why use them?

"In traditional C++, if I allocate memory using new, I need to remember to use delete manually. If I forget, that leads to memory leaks. Smart pointers automate this process."

📦 Types of Smart Pointers:

 - unique_ptr –
"It owns a resource exclusively. Only one unique_ptr can point to a given object at a time. It’s great when I don’t want shared ownership."

- shared_ptr –
"Used when multiple smart pointers need to share ownership of the same object. It keeps an internal reference count and deletes the object only when all references are gone."

- weak_ptr –
"It’s a non-owning reference to a shared_ptr object. It’s mainly used to avoid circular references, especially in cases like tree or graph structures."

🔧 Practical Example:
```c++
#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> uptr = make_unique<int>(10); // automatically deleted
    cout << "Value: " << *uptr << endl;

    shared_ptr<int> sptr1 = make_shared<int>(20);
    shared_ptr<int> sptr2 = sptr1; // shared ownership
    cout << "Shared Count: " << sptr1.use_count() << endl;
    
    return 0;
}
```
🗣️ "In this example, unique_ptr owns the integer exclusively, and shared_ptr shows how multiple references can safely manage one object."

## 48 What is namespace and what is the use of namespace?

In C++, a namespace is a feature that allows us to group related variables, functions, and classes under a name. It helps organize code and avoid naming conflicts — especially in large projects or when using multiple libraries."

🧠 Why are namespaces useful?

"Let’s say two libraries both define a function called print(). Without namespaces, that would cause a name collision. But if each function is inside a different namespace, we can distinguish them."

📦 Simple Code Example:
```c++
#include <iostream>
using namespace std;

namespace LibraryA {
    void print() {
        cout << "Print from Library A" << endl;
    }
}

namespace LibraryB {
    void print() {
        cout << "Print from Library B" << endl;
    }
}

int main() {
    LibraryA::print(); // Calls A's version
    LibraryB::print(); // Calls B's version
    return 0;
}
```
🗣️ "As you can see, we avoid naming conflicts by qualifying the function with the namespace."

📦 using namespace std;

"This line is commonly used to avoid writing std::cout or std::string repeatedly. But in large applications, it's better to avoid it in global scope to prevent conflicts."

🧳 Real-World Analogy:

"Think of namespaces like folders on your computer. You might have two files named report.txt, but if they’re in different folders, they don’t clash. Similarly, namespaces allow the same function or class name to exist in different scopes without conflict."

✅ Summary (For Clarity at the End):

 - Avoids naming conflicts

- Helps organize code

- Used heavily in STL and large projects

## 49 What is function overloading?

"Function overloading in C++ means defining multiple functions with the same name, but with different parameter types, number of parameters, or order of parameters. The compiler determines which version to call based on the arguments passed. It's a form of compile-time polymorphism.

🧠 Why it's useful:
"It improves code readability and allows us to use the same function name for logically similar operations, avoiding unnecessary names."

```c++
#include <iostream>
using namespace std;

void show(int num) {
    cout << "Integer: " << num << endl;
}

void show(double num) {
    cout << "Double: " << num << endl;
}

void show(string text) {
    cout << "Text: " << text << endl;
}

int main() {
    show(10);          // calls show(int)
    show(3.14);        // calls show(double)
    show("Tea Time");  // calls show(string)
    return 0;
}


```

"In this example, all three functions are named show, but each handles a different data type — int, double, and string. When I call show(), the compiler automatically picks the right version based on the argument type."

"Function overloading enhances flexibility and keeps code clean by grouping related functionality under a single name."

## 50 What is Compile-Time Polymorphism?
"Compile-time polymorphism in C++ means the function that gets called is determined during compilation, not at runtime. It allows a program to decide which version of a function or operator to use based on the arguments or context at compile time."

"This is also called static polymorphism."

🧠 How is it Achieved?
👉 Through:

Function Overloading

Operator Overloading

Templates (in some cases)

```c++
void print(int x) {
    cout << "Integer: " << x << endl;
}

void print(string s) {
    cout << "String: " << s << endl;
}


```

🗣️ "When I call print(5) or print("Hello"), the compiler decides which version to use before the program runs. That’s compile-time polymorphism."

✅ Why it's useful:
"It improves performance since everything is resolved at compile time. It also makes code more flexible and easier to manage, especially when performing similar operations on different types."

🔁 Compare with Runtime Polymorphism:
"Unlike runtime polymorphism — which relies on inheritance and virtual functions — compile-time polymorphism doesn’t have runtime overhead."


## 51 what is diffrence between &call and call&

* &call usually means you're getting the address of a variable or function named call.

* call& is used in function or class declarations, meaning a reference to a variable named call.

* Let’s break it down more clearly:

🧠 1. &call – Address-of Operator

```c++
int call = 10;
int* ptr = &call; // Here, &call gives the address of the variable 'call'

```

🗣️ "In this case, & is the address-of operator. It returns the memory address of the variable call, and we store it in a pointer."

🧠 2. call& – Reference Declaration (Usually in Functions or Templates)

```c++
void display(int& call) {
    call = call + 5;
}

```
🗣️ "Here, call& is part of a parameter declaration — int& call — which means call is passed by reference, not by value. So, changes to call inside the function affect the original variable.

"So, to summarize — &call gets the address of the variable call, while call& is just the syntax used when we're declaring a reference to a variable. One is about memory address; the other is about reference binding."