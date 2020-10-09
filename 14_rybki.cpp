#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n; // liczba rybek

    int *ryby; // rozmiar rybki
    ryby = new int [n];

    bool *kierunek;
    kierunek = new bool [n];

    stack<int>prawo; // rybki z pradem
    int przezyte = 0;


    for (int i = 0; i < n; i++) {
        cin >> ryby[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> *kierunek;
       if( *kierunek == 1){
            prawo.push(*ryby);
        } else{
            while(prawo.empty()==0){
                if(prawo.top() > *ryby/*rybka zostaje zjedzona*/){
                    break;
                } else{
                    prawo.pop();
                }

            }
            if(prawo.empty()) przezyte++;

       }
       kierunek++;ryby++;
    }

int suma = przezyte + prawo.size();
    cout << suma;
    return 0;
}

//5
//4 3 2 1 5
//0 1 0 0 0