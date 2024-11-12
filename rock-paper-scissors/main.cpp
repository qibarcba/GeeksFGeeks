#include <iostream>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int a;
int x = 10;
int cois;
void loading(string a){
    cout << "\033[2J\033[1;1H";
    for (int i = 0; i < 10; i++){
        usleep(200000);
        string o (x, ' ');
        string j(i, '>');
        string k(i, '<');
        cout << o << j << a << k << endl;
        cout << "\033[2J\033[1;1H";
        x = x-1;
    }
}
string decide(int a, int b){
    if(a == b){
        return "U Got Tie!!";
    }else if(a == 1){
        if(b == 2){
            return "Computer Wins!";
        }else{
            return "User Wins!";
        }
    }else if(a == 2){
        if(b == 3){
            return "Computer Wins!";
        }else{
            return "User Wins!";
        }
    }
}
string hand(int b){
    if (b == 1){
     return "Rock\n";
    }else if(b == 2){
     return "Paper\n";
    }else if(b == 3){
     return "Scissors\n";
    }
}
void wrong(){
    cout << "Wrong Character!\n\n";
    exit(0);
}
void rps(){
    srand(time(0));
    int acak = rand() % 3;
    loading("loading");
    cout << "Choose Your Weapon!\n";
    cout << "| 1(Rock) | 2(Paper) | 3(Scissors) |\n";
    cout << "= ";
    cin >> cois;
    cout << "u choose the : " << hand(cois);
    cout << "computer choose : " << hand(acak+1);
    loading("Fighting!!");
    cout << decide(cois, acak+1) << endl << endl;
    cout << "Wanna Play Again?\n 1. Play Again \n 2. Exit";
    cin >> a;
    a == 1 ? rps() : a == 2 ? exit(0) : wrong();
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