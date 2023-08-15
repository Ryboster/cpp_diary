#include <iostream>
#include <span>
using namespace std;


/* New simpler form of for-loop. Same functionality as Pythonic for x in y */
void print_out(span<int> l){ // span<> is needed to import arrays of integers into a function.
    cout<<"For x in y loop (Simpler form of for-loop): "<<"\n";
    for (auto x: l){  // for x in l
        cout<<x<<"\n";}    // print x

    cout<<"For x in newly initialized array: "<<"\n";
    for (auto x: {10, 14, 99, 73, 87}){ // for x in newly initialized array
        cout<<x<<"\n";}
}
/* Function for testing of passing array variables */
void send_vars(){
    int l[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // list (array) of integers
    print_out(l); // send the array over to be printed

}

void pointer_loop(){
    cout<<"Loop that uses a pointer to access each index"<<"\n";
    int f[] = {1, 2, 3, 4, 5};
    for (auto& x: f){ // This can be translated to "iterate over properties of f and send the current address to x"
        cout<<"pointer x: "<<x<<"\n"; // x = f[current_index]
    }
}

int moving_pointer(){
    /* Returns the number of occurences of the letter "x" */
    cout<<"Entering moving_pointer()\n";
    char sentence[] = "xxxtentacionx";
    int count = 0;
    char* ptr = &sentence[0];
    for(; *ptr!=0; ++ptr){
        if (*ptr=='x'){
            ++count;
        }
    }
    return count;
}

/* Pointers and arrays */
int main() {
    char v[6] = {'a', 'b', 'c', 'd', 'e', 'f'}; // array of 6 characters object
    //char* p;   // pointer object

    char* p = &v[3]; // "contents of" p is "address" of v's 4th index
    char x = *p; // x is the "contents of" p

    send_vars();
    cout<<"Pointer: "<<x<<"\n";
    pointer_loop();
    int y = moving_pointer();   
    cout<<"count: "<<y<<"\n";
}