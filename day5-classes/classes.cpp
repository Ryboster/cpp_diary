#include<iostream>
using namespace std;

class Vector{
    public:
    /* Declare Vector class's functions and assign values to variables */

        Vector(int s):elem{new double[s]}, sz{s} { }//construct Vector. Assign values of double[s] to elem and int s to sz
	    double& operator[](int i){return elem[i];} //Constructs a subscript access operator returning given index of elem variable
	    int size(){return sz;} //declare function size which returns integer value of sz variable.
        
        double* begin(){return elem;}
        double* end() {return elem+sz;}

private:
    /* Declare Vector class's variables */

    double* elem; //pointer to the elements
    int sz; //the number of elements
};

int main(){
    int intended_size = 6;
    Vector v(intended_size); // Create a Vector object with the array size of 6
    cout<<"size is "<< v.size()<<"\n";
    double value = 10.21;
    for(int x=0; x<intended_size; ++x){
        v[x] = value;// operator[] modified the behaviour of the subscript operator, and as such v variable can be used as an array.
        value = value + 2.12;
    };
    for(int x =0; x<v.size(); ++x){
        cout<<v[x]<<"\n";
    }
    return 0;
}