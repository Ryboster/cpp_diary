Enumeration in C++ is a user-defined data type that consists of integral constants or enumeration types. C++ supports a simple form of user-defined type for which we can enumerate the values, e.g.:

    • enum class Colour {red, blue, green);
    • enum class Traffic_lights {green, yellow, red);

Enumerators (e.g. red) are in the scope of their enum classes, so Colour::red is different from Traffic_lights::red.

Enumerations are used to represent small sets of integer values (integral types). They are used to make code more readable and less error-prone than it would have been had the symbolic enumerator names not been used.

The class after enum specifies that an enumeration is scoped. Being separate types, enum classes help prevent accidental misuses of constants. In
particular, we cannot mix Traffic_light and Colour values.

    • Colour x = red; // Error: Didn’t specify which red
    • Colour y = Traffic+light::red; // Error that red is not Colour
    • Colour z = Colour::red; // OK

Similarly, we cannot mix integers with colours:

    • int i = Colour::red; //Error: Colour is not int
    • Colour c = 2; //Error: 2 is not Colour


