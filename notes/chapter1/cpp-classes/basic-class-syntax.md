# 1.4 C++ Classes

In order to write data structures in C++, you must use object to store data that ussually come in the form of a collection of identially typed items with functions that provide the ability to manipulate the collection of typed items. In C++, this is accomplished by using a **class**. 

## Basic *class* syntax

- members: The data or functions of a class
- member functions / methods / functions: The functions that manipulate the data of the class
- object: each instance of a class is known as an object
	- An object contains all the data components of a class unless the data component is static
- public vs. private: These labels determine the visibility of class **members** (data or functions)
- public: A member that is public may be accessed by any method in any class
- private: A member that is pirvate may only be access by methoids in its class. Typicaly, data members are declared private. This restricts access to internal detrails of the class, while methods intended for general use are made public. This is know as **information hiding**. *By using private data members, we can change the internal representation of the object without having an effect on other parts of the program that use the object.*

**In a class, all members are private by default, so the inital public is not optional.**

- Accessor: A member function that examines but does not change4 the state of its object is an accessor.
- Mutator: A member function taht changes the state is a mutator (because it mutates the state of the object).

In the typical collection class, for instance, **isEmpty** is an *accessor*, while **makeEmpty** is a *mutator*.

## Important Terminology
- "::" is class the scope resolution operator with syntax `ClassName::member`

### General Notes
- A member function is denoted an accessor via the const at the end 
- Default parameters are specified in the interface only. They are omitted in the implementation.