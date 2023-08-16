#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

enum class Colour { red, blue, green }; // enumeration class
enum class Traffic_light { green, yellow, red, rednyellow};

Colour col = Colour::red; // to access properties of enumeration type, use :: operator
Traffic_light light = Traffic_light::green;


Traffic_light operator++(Traffic_light& t){ // simulation of integer increments in enumeration type.
/* This class takes an address to an initialized Traffic_light type object and changes it*/
    switch (t){
        case Traffic_light::green: return t=Traffic_light::yellow; //if light is green, change it to yellow
        case Traffic_light::yellow: return t=Traffic_light::red; //if light is yellow, change it to red
        case Traffic_light::red: return t=Traffic_light::rednyellow; //if light is red, change it to red and yellow
        case Traffic_light::rednyellow: return t=Traffic_light::green; // if light is red and yellow, change it to green
    }
}

int main(){
    Traffic_light x = operator++(light);
    /* Simulation of traffic lights - they switch from one position to the next until it's green */
    while (x!=Traffic_light::green){
        if(x==Traffic_light::red){
            cout<<"Red: Halt!\n";
            x = operator++(light); // "increment" lights
            this_thread::sleep_for(std::chrono::seconds(1)); //sleep for 1 second
        }
        if(x==Traffic_light::rednyellow){
            cout<<"Red & yellow: Get ready!\n";
            x = operator++(light);  // "increment" lights
            this_thread::sleep_for(std::chrono::seconds(1)); //sleep for 1 second
        }
        if (x==Traffic_light::yellow){
            cout<<"Yellow: Slow down and stop!\n";
            x = operator++(light);  // "increment" lights
            this_thread::sleep_for(std::chrono::seconds(1)); //sleep for 1 second
        }
    }
    cout<<"Green: Go!\n";
}

