#include<iostream>
using namespace std;
bool accept()
{   
    char answer = 0;
    do{
        cout<<"\nDonate liver?? Y/N\n";
        cin >> answer;
    
        switch(answer){
            case 'y':
                cout<<"\nGood.\n";
                return true;
            case 'n':
                cout<<"You must comply ...";
                continue;
            default:
                cout <<"no hablo ingles";
        }}while(answer!='y');
    return true;
}

bool accept2(){
    char x = 0;
    while(x!='y'){
        cout<<"Transfer over savings?\n";
        cin >> x;
        switch(x){
            case 'y':
                cout<<"Very good\n";
                return true;
            case 'n':
                cout<<"Oblige.\n";
                continue;
            default:
                cout<<"no hablo ingles";
                continue;
        }
    }
    return true;
}

bool accept3(){
    char answer = 0;
    for(bool x=false;x==false;){
        cout<<"Donate car?\n";
        cin >> answer;
        switch(answer){
            case 'y':
                cout<<"attaboy!\n";
                x = true;
            case 'n':
                cout<<"You cannot resist\n";
                continue;
            default:
                cout<<"no hablo ingles\n";
                continue;
        }
    }
    return true;

}

int main(){
    bool x = accept();
    if (x == true) cout<<"Thank you for your donation\n";
    bool y = accept2();
    if (y == true) cout<<"Thank you for your donation\n";
    bool c = accept3();
    if (c == true) cout<<"Thank you for your donation\n";
}