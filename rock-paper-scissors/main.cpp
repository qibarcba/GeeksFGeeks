#include <iostream>
#include <unistd.h>
#include <string>
using namespace std;

int a;
int acak = rand() % 3;
int x = 10;

void loading(string a){
    for (int i = 0; i < 10; i++){
        usleep(500000);
        string o (x, ' ');
        string j(i, '[');
        string k(i, ']');
        cout << o << j << a << k << endl;
        cout << "\033[2J\033[1;1H";
        x = x-1;
    }
}

void wrong(){
    cout << "Wrong Character!";
    menu();
}

void rps(){
    loading("loading");
}

void menu(){
    cout << "Welcome To Rock Paper Scissors\n";
    cout << "1. Play\n";
    cout << "2. Exit\n";
    cout << "=";
    cin >> a ;
    a == 1 ? rps() : a == 2 ? exit(0) : wrong();
}

int main(){
    while (true){
        menu();
    }
}