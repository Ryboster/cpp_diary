Structures (a.k.a Structs) are user-defined types, they’re a way to group several related variables into the same place. Unlike arrays, they’re not limited to one data type and can store multiple incompatible data types including other user-defined types.

Structures are very similar to classes with only a handful of key differences, such as: 

    • Structure’s members are public by default
    • member classes/structures of a struct are also public by default
    • An instance of a struct is called “Structure variable” and not “object”.
    • NULL values are not possible in structs
      
We use . (dot) operator to access struct members through a name, and -> to access struct members through a pointer. For example:

      void f(Vector v, Vector& rv, Vector* pv) {
		int i1 = v.size; //access through name
		int i2 = rv.size; //access through reference
		int i3 = pv->size; //access through pointer
	}


