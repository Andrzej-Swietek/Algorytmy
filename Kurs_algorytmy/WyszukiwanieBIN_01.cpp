//
// Created by Andrzej Świętek on 2/6/21.
//
#include <iostream>
using namespace std;

#define MAX 1000000
#define ll long long


bool sito[MAX]; // czy liczba jest zlozona

void gen_sito() {
    for (int i=2; i*i <= MAX; i++){
        if (!sito[i]){
            for (int k=i*i; k<=MAX; k+=i){
                sito[k]=true;
            }
        }
    }
}


void policz(long long x) {
    long long pocz = 1, kon = MAX;

//     Wyszukiwanie binarne
    while(pocz < kon) {
        long long srodek = (pocz + kon) / 2;
        if(srodek * srodek < x) {
            pocz = srodek + 1;
        } else {
            kon = srodek;
        }
    }
// na koncu pocz == koncowi
    if(pocz * pocz == x && !sito[pocz]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}


int main(){
//      MAMY N , N<100k zapytań
//      czy liczba X x<10^12 ma dokladnie 3 dzielniki

    /*
     * input: 3
     * 4 5 6
     * output:
     * YES
     * NO
     * NO
     */


// liczba ma dokladnie 3 dzielniki jeżeli jest postaci p^2 ( p jest pierwsza )

    gen_sito();
    int n;
    cin >> n;
    while (n--){
        ll x;
        cin >> x;
        policz(x);
    }

}