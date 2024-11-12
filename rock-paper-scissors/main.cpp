#include <iostream>
#include <unistd.h>
#include <string>
using namespace std;

int a;
int acak = rand() % 3;

void loading(string a){
    for (int i = 0; i < 10; i++){
        usleep(500000);
        string j(i, '[');
        string k(i, ']');
        cout << j << a << k << endl;
        cout << "\033[2J\033[1;1H";
    }
}

void test(){

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
    a == 1 ? rps() : a == 2 ? test() :exit(0);
}

int main(){
    while (true){
        menu();
    }
}