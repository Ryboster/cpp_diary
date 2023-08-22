C++ supports a notion of separate compilation where user code sees only declarations of types and functions used. The definitions of those types and functions are in separate source files and compiled separately. This can be used to organize the code into a set of co-dependent files. 

An example of this would be most libraries that are often separately compiled code fragments (e.g. functions).
Typically, we place the declarations in a file with a name indicating its intended use. For example:

	// Vector.h:
	class Vector {
		public:
			Vector(int s); //Reference to function Vector
			double& operator[](int i);
			int size();
		private:
			double∗ elem; // elem points to an array of sz doubles
			int sz; 
		};

This declaration would be placed in a file Vector.h, and users will include that file, called a header file, to access that interface. For example:

	// user.cpp:
	#include "Vector.h" // get Vector’s interface
	#include <cmath> // get the the standard library math function interface
	using namespace std; // make std members visible

	double sqrt_sum(Vector& v){
		double sum = 0;
		for (int i=0; i!=v.size(); ++i)
		sum+=sqrt(v[i]); //sum of square roots
		return sum;
	}
