#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int liczniki, nacisniecia; // liczniki przyciski poza ostatnim ktory przypisuje najwieksza wartosc wszystkim
    cin >> liczniki >>nacisniecia;
    int *licznik;
    licznik =  new int[liczniki+1];
    licznik[liczniki+1]={0};

int minimum=0; int maximum = 0;

    for (int i = 0; i < nacisniecia; i++) {
        int numer_przycisku;
        cin >> numer_przycisku;
        if(numer_przycisku==liczniki+1){ // czyli ostatni ostatni
            minimum = maximum; // minimum otrzymuje wartosc najwiekszego licznika
        }
        else
        {
            licznik[numer_przycisku] = max(minimum, licznik[numer_przycisku]) + 1; // licznik (numer[numer_przycisku]) otrzymuje wartosc powiekszona o 1 lub minimum powiekszone o 1
            maximum = max(maximum, licznik[numer_przycisku]); // nowa maksymalna wratosc bazowana na dotychczasowej i liczniku
        }

    }


    for (int j = 1; j < liczniki+1; j++) {
        cout<< max(licznik[j],minimum)<<" ";
    }

    return 0;
}
