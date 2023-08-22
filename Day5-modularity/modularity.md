A c++ program consists of many separately developed parts. At code level there is no particular distinction between things like inclusions, modules, functions, or classes. All of those are simply code that is defined “somewhere else”. To drive this point home, consider the following example:

	#include<iostream>
	class Vector {
		//…
		}
	double sqrt(double){
		//…
		return square_root;
		}
	

In the example above we define a function called sqrt, a class Vector, and we import iostream library. Now notice how those objects can be used in any place in your code despite of whether they were defined in the right scope or not:

	class myClass{
		public:
			double square = sqrt(double x); //Get square_root from sqrt
			Vector(square); //Call function Vector
			std::cout<<”Operation Complete”;s //Use inclusion
		}

Despite the fact that they were all declared outside of myClass’ scope, they can still be accessed as normal functions and classes inside another class’ or function’s scope.

