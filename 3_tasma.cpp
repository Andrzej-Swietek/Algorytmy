#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int suma =0;
    vector<int>v;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
        suma+=tmp;
    }
int wynik = 2*1000+1;

int lewa =0;
int prawa =0;
int roznica =  0 ;


    for (int j = 0; j < n-1; ++j) {
        lewa+=v[j]; // czesc lewa zwiekszam o kolejne elementy tablicy
        prawa = suma - lewa; // prawa = to sie rowna wszystko co nie jest lewa z calosci
        roznica = abs(lewa - prawa); // liczymy roznice o ktora chodzi w zadaniu
        wynik = min(wynik, roznica); //porownanie i przypisanie do wyniku mniejszej - bo jesli obecny wynik jest lepszy to zostawiamy
    }



    cout << wynik;

    return 0;
}
