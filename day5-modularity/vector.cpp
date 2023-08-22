//vector.cpp:
#include "vector.h"

/* Note that :: operator is used instead of . (dot). This is because we're accessing the class's elements without
   creating a class instance. This is because we want to modify the behaviour of the class. */

Vector::Vector(int s) //access Vector class constructor
    :elem{new double[s]}, sz{s} // Assign values to elem and sz variables. elem gets an array of size s. sz gets integer of s.
{} // leave the body of the constructor blank.


double& Vector::operator[](int i){ // Access subscript operator modification of Vector class.
    return elem[i]; // Modify the body of the function so it returns specified elem's index.
}

int Vector::size(){ // Access size() function of Vector class.
    return sz; // Modify the function's body so it returns size integer. 
}