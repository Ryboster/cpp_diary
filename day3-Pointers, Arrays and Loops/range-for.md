C++20 supports a simpler syntax of for loops. Instead of defining your variables and control the exact number of iterations, you can simply iterate over the range of an array object.

    • for(x: a) // for x in array

The left hand side of the colon is your iterator and on the right hand side is the sequence. What this loop does is it goes from the first index of the sequence to the last and on each iteration the value of the current index is passed to the iterator variable.

For-range loops can also be used with pointers:

    • for(auto& x: a)

In this example, for is iterating over the addresses of a, passing them to the x variable which can then access them to get value. It’s basically the same as writing:
    • x = a[iterator_index];

except it uses a pointer to access an already existing address in the memory instead of creating a new object and doubling memory usage.

