//separate-compilation.cpp

#include "vector.h" // get Vector’s interface
#include <cmath> // get the the standard library math function interface
#include<iostream>
using namespace std; // make std members visible


double sqrt_sum(Vector& v){ //declare sqrt_sum function. It takes in a reference to a Vector class object and returns double.
	double sum = 0;
	for (int i=0; i!=v.size(); ++i){ //Iterate over elem's indexes.
        sum+=sqrt(v[i]);} //sum is square root of elem array's elements.
	return sum;
};

int main(){
    int size = 5;
    Vector myv = Vector(size); //Initialize vector class object with the array size of 5.

    double value = 0.21; // Initialize value to be added to Vector's elem array.

    for(int x = 0; x!= myv.size(); ++x){ // Iterate over Vector elem array's indexes
        myv[x] = value; // Append values to the array.
        value+=1.91; // Increment value.
    }

    for(int x = 0; x!= myv.size(); ++x){
        cout<<"Value at index "<<x<<" = "<< myv[x]<<"\n"; // Print out the values
    }

    double square_sum = sqrt_sum(myv);
    cout<<"Square sum of the values is "<< square_sum<<"\n";
    

    return 0;
}