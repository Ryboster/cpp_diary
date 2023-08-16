#include<iostream>
using namespace std;

enum class Colour { red, blue, green };
enum class Traffic_light { green, yellow, red };
Colour col = Colour::red;
Traffic_light light = Traffic_light::red;

int pick_colour(){
    int choice = 0;
    Colour myColour;
    while (choice!=1 || choice !=2 || choice!=3){
        cin>>choice;
        switch(choice){
            case 1: 
                myColour = Colour::red;
                return choice;
            case 2:
                myColour = Colour::blue;
                return choice;
            case 3:
                myColour = Colour::green;
                return choice;
        }
    }
}

int main(){
    int x = pick_colour();
    cout<<x<<"\n";
    switch (x){
        case 1: cout<<"You chose red\n"; break;
        case 2: cout<<"You chose blue\n"; break;
        case 3: cout<<"You chose green\n"; break;
    }
}

