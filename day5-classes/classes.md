While the user-defined types have their advantages in separating data from the operations carried out on them, it can prove insufficient in more complex applications. To extend the properties of a user-defined type, to make it look more like a “real type”, we can use a mechanism called class. 

A class is defined to have a set of members, which can be data, functions, or user-defined types. The interface is defined by the public members of a class, and private members are accessible only through that interface. For example:

	class Vector {
		public:
			Vector(int s):elem{new double[s]}, sz{s} { }//construct Vector
			double& operator[](int i){return elem[i];} 			
			int size(){return sz;} //declare function size which returns integer value of sz variable.
		private:
			double∗ elem; //pointer to the elements
			int sz; //the number of elements
	};

Let’s break down the syntax:
	
	Vector(int s):elem{new double[s]}, sz{s} { }:

	Vector(int s) - This part is the constructor declaration. It states that this is the constructor for the Vector class and it takes an integer 	parameter ‘s’.

	: elem{new double[s]}, sz{s} {} - This is the member initializer list. It initializes the member variables of the Vector class. Each member variable 			is initialized using the syntax variableName{value}.
    • elem{new double[s]} - This initializes the elem member with a dynamically allocated array of double values of size s. The new double[s] expression dynamically 		allocates memory for an array of double values with the specified size.
    • sz{s} - This initializes the sz member with the value of the parameter s.
    • {} - This is the body of the constructor, and in this case, it's empty. It signifies that there are no additional statements or operations to be executed within 		the constructor body.


	double& operator[](int i){return elem[i];}:

	double& - This part declares the return type of the operator[] function. It indicates that this operator returns a reference to a double.
	
	operator[](int i) - This part is the function declaration. It declares the operator[] function, which is used for accessing elements of the Vector class using 		the subscript(‘[]’) notation. It takes an integer parameter i, which represents the index of the element to be accessed. Operator[] itself is a C++ provided 		operator overloading mechanism. It allows you to define the behaviour of the subscript(‘[]’) operator when used with instances of user-defined classes.
	
	{return elem[i];} - This is the body of the operator[] function. It contains a single statement which returns a reference to the double element located at 		index i in the dynamically allocated array elem.
	

In summary, private defines local class variables accessible only through that class interface, while public is used to work with those variables via the use of functions (like Vector(), operator[], and size()).
