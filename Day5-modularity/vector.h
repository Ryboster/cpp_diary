//vector.h

/* Create a class Vector 'template'. This is left blank on purpose to present the separate compilation capability.*/

class Vector {
		public:
			Vector(int s); //Class constructor. Takes in one integer argument
			double& operator[](int i); //modify subscript operator. Takes in integer. Returns double referene type.
			int size(); //Declare size() function. Returns integer.
		private:
			double* elem; // Declare pointer to elem.
			int sz;  // Declare integer sz (size).
		};