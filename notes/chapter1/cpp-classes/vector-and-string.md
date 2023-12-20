# 1.4.4 vector and string
- **vector is intended to replace the built-in C++ array, which causes no end of trouble**
- arrays cannot be coped with =
- arrays don't remember how many items they can store
- the array indexing operator does not check that the index is valid
- **The built-in string is simply an array of characters, and thus has the liabilities of arrays plus a few more. Example, the `==` operator does not correctly compare two built-in strings** : If possible, you should avoid using the
built-in C++ array and string.
- *The vector and string classes in the STL treat arrays and strings as first-class objects.* - "Two string objects can be compared with ==, <, and so on. Both vector and string can be copied with =. "
- The inital size of a vector is 0 and it grows as needed
- `vector<int> daysInMonth = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };` You can also write the same statement without the equal sign, but to initialize a vector of size 12 you would write `vector<int> daysInMonth( 12 );`
#### Classic way of indexing each element in an array or vector:

    int  sum = 0;
    for( int i = 0; i < squares.size( ); ++i )
        sum += squares[ i ];

---

#### Using range to index each element of an array or vector:

    int sum = 0;
    for( int x : squares )
        sum += x;

**in order to infer the type the appropriate type of element in the vector, use *auto* instead of the type**

    int sum = 0;
        for( auto x : squares )
            sum += x;