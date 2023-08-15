an array of elements of type char can be declared like this:

    • char v[6]; //array of 6 characters
      
similarly, a pointer can be defined like this:

    • char* p; // pointer to a character

In declaration, [] means “array of”, and * means “pointer to”. The size of an array must be a constant expression. 

A pointer object can hold the address to an object of compatible type:

    • char* = &v[3]; //p points to 3rd index of the v variable
    • char x = *p; // *p is the object that p points to

In this expression, the unary * means “contents of”, and the unary & means “address of”. 

Pointers can also be used in loops to access indexes of the sequence without creating a new object and allocating extra memory space. To do so, we need to use the suffix form of the & operator:

    • for(auto& x: a) // for address of a in sequence

In this declaration, the suffix & means “reference to”. A reference is similar to a pointer, except that you don’t need to use a prefix * to access the value of your address. When used in declaration, the operators such as *, &, and [] are called declaration operators:

    • T a[n]; // array of n is T
    • T* p; // p is a pointer to T
    • T& r; //r is a reference to T
    • T f(A); //T receives the value of function that takes type A

It’s a good practice to ensure that a pointer always points to an object so that dereferencing it afterwards doesn’t throw an error. When there’s no object to point to, we need to represent None or null equivalent (e.g. for an end of a list), with the value of nullptr (null pointer). There is only one nullptr shared by all pointer types:

    • double* ptr = nullptr; //pointer of type double receiving the value null
    • Link<Record>* lst = nullptr; //pointer to an instantiation of the template class “Link” with the template parameter type Record is null

One very useful thing to know about pointers is that they’re not static, and they can be moved quite easily:

    • char sentence[] = “This is a string”;
    • char* p = &sentence[0]; //point towards the first index
    • for(; *p!=0; ++p) //incrementing p moves it forward by a character

Now you can access p’s value to retrieve the value of the index of the string.

    • std::cout<<*p<<”\n”;
