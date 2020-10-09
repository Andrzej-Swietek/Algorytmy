#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
//    x - poczatek, y - cel, dl skoku
    int x,y,s;
    cin >> x >> y >> s;
//    Cel - poczatek / dl skoku -> ale ze to jeszcze trzeba zaokraglic w gore to -1 w nawiasie i +1 do koncowego wyniku
    int wynik = 1 + (y - x -1 ) / s;
    cout << wynik;
    return 0;
}

//
// Created by Andrzej Świętek on 12/1/19.
//

