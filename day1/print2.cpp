#include<iostream>
using namespace std; // makes names from std visible without std::

double square(double x){
    return x * x;
}

void print(double x){
    cout << "the square of " << x << " is " << square(x) << "\n";
}

int main(){
    print(1.242);
}