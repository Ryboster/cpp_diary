/*
Simple example presenting struct functionalities.
*/
#include<iostream>
using namespace std;

struct Vector {
    int noe; // number of elements
    double* elem; // pointer to elements
};

void vector_init(Vector& v, int s){ // Import v object via address
    v.elem = new double[s]; // v object's elem variable declaration as an array of doubles
    v.noe = s; // number of elements is equal to the size of the array
}

double read_and_sum(int s){
// read s integers from cin and return their sum; s is assumed to be positive
    Vector v; // Variable of user-defined type Vector
    vector_init(v,s); // allocate s elements for v
    for (int i=0; i!=s; ++i){
        cout<<">";
        cin>>v.elem[i];} // Get user input and save it in v's elem array.

    double sum = 0;
    for (int i=0; i!=s; ++i){
        sum+=v.elem[i];}
    return sum; }


int main(){
    double sum = read_and_sum(5);
    cout<<sum<<"\n";
}