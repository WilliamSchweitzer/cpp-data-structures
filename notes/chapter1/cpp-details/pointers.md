# 1.5.1 Pointers

- pointer variable: a variable that stores the address whee another object resides. **Fundamental mechanism used in many data structures** *Linked List*
- A * indicates a pointer variable where the value of that variable is the address of the object that it points at.
    int *x = 2;
- "The use of uninitialized pointers typically crashes
programs, because they result in access of memory locations that do not exist."
- You can also initalize to a nullptr like:
    int *y = nullptr;
- "In C++ new returns a pointer to the newly created object."
- Two pointers are equal if they point to the same object

## Gargbage Collection and delete

- C++ does not have garbage collection. You must **delete** an object after creating an object with **new**. 
- If an object that is allocted by new is no longer referenced, the memory that object consumed is lost and can lead to a **memory leak** that terminates the program.
- One important rule is to no use new when an **automatic variable** can be used instead. This way the program, will reclaim the memory when the function the variable is declared in returns. 

## Accessing Members of an Object through a Pointer

- A (visible) member of the object being pointed at can be access via the -> operator.
- "address-of operator &. This operator returns the mem-
ory location where an object resides and is useful for implementing an alias test"

## lvalue and rvalue
- "An lvalue is an expression that identiﬁes a non-temporary object. An rvalue is an
expression that identiﬁes a temporary object or is a value (such as a literal constant) not
associated with any object."
- "As a general rule, if you have a name for a variable, it is an lvalue"
- **lvalue reference** is used to rename variables like
    string xtr = "hi";
    string & xtr = str; // Renames the string xtr to str
- 3 main use cases of lvalue references are aliasing complicated names, range for loops, and avoiding a copy (see xample below)
- **rvalue reference** is declared using && after a type like
    string && bad1 = "hello";

---

**Using references to increment each value in a vector by 1 instead using a range for loop instead of a for loop**

// This code does not work because x assumes a copy of each value in vector arr
    for( auto x : arr )
        ++x;

// This code works using a reference to the variable x
    for(auto & x : arr)
        ++x;

**Avoiding a copy**
// This code does not copy the max value from arr *Make sure not to modify arr after referncing it*
    auto & x = findMax( arr );

---

1. Reference variables are often used to avoid copying objects across function-call
boundaries (either in the function call or the function return).
2. Syntax is needed in function declarations and returns to enable the passing and
returning using references instead of copies.