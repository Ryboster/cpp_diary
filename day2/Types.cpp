#include<iostream>
using namespace std;

int main(){

    bool istrue = true; //bool = boolean: true or false

    /* String Types */
    char character = 'x'; //char is a type capable of storing one character of up to 1 byte.
    wchar_t wide_character = L'\0'; // wchar_t is used to store characters larger than 1 byte.
    char str[] = "This is a c++ string type"; // It is a list of characters

    /* Simple Number Types */
    int signed_number = -2147483647; //signed integer (supports negative numbers). This is min.
    long longer_number = 9223372036854775807; //long is integer for longer values. This is max.
    short shorter_number = 32767; //used to store shorter integers. This is max.

    /* Real Number Types */
    float shorter_real_number = 1.1234567; // single precision floating point numbers up to 7th decimal
    double longer_real_number = 1.23412312312312312; //double precision floating point numbers. Up to 15th decimal.

    /* None Types */
    int* nothing = nullptr; // nullptr is c++ equivalent of python's None
    //void.cannot be assigned to variables but can be returned by functions

    /* Type modifying keywords */
    unsigned int unsigned_integer; // unsigned can be applied to number types. It changes the minimum range from negative numbers to 0 increasing max range
    signed int signed_integer; // signed can be applied to number types. It changes the minimum range from zero to negative numbers reducing max range
    long long int longest_integer; //long is a type but it can also be used to extend integer's memory and consequently, range. It can be used up to 2 times per variable.
    short int shortest_number; // short is a type but it can also be used to reduce integer's memory and consequently, range.

    cout << "\nBoolean Types: \n";
    cout << "bool - true/false   1 Byte   Example: bool x = true\n\n";
    std::cout << "String types: \n" << "char - Single character  " << "1 Byte   " << "Example: char x = \'A\' \n";
    cout << "wchar_t - Wide character   2 Bytes" << "   Example: wchar_t =  L\'\\u263A\'\n";
    cout << "char str[] - String of characters  " << "Example: char str[] = \"This is a c++ string\"\n\n";
    cout << "Simple number Types: \n";
    cout << "int - Integer   2 or 4 Bytes   Example: int x = 2147483647\n";
    cout << "long - longer integer   8 Bytes    Example: long x = 9223372036854775807\n";
    cout << "short - shorter integer    2 Bytes   Example: short x = 32767\n\n";
    cout << "Real number Types: \n";
    cout << "float - floating point numbers up to 7 decimals   4 Bytes   Example: float x = 1.1234567\n";
    cout << "double - floating point numbers up to 15 decimals   8 Bytes   Example: double x = 1.123456789012345\n\n";
    cout << "None Types: \n";
    cout << "void - No value. Cannot be assigned to variables but can be returned by classes\n";
    cout << "nullptr - No value. Can be assigned to variables.   Example: int* n = nullptr\n\n";
    cout << "Type Modifying Keywords:\n";
    cout << "unsigned - can be applied to number types. It changes the minimum range from negative numbers to 0 increasing max range\n";
    cout << "signed - can be applied to number types. It changes the minimum range from zero to negative numbers reducing max range\n";
    cout << "long and long long - can be used to extend integer's memory and range\n";
    cout << "short - can be used to reduce integer's memory and range\n\n";
    return 0;
}