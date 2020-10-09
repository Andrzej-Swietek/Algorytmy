#include<iostream>
#include<time.h>
#include<cstdlib>

using namespace std;

clock_t start, stop;
double czas;

float sredniaReferencja(float *tab, int ile){
    float suma = 0;

    for (int i=0; i < ile ; i++){
        suma += *tab;
        tab++;
    }
    return suma / ile;
}

float sredniaZmiennychReferencja(float &a, float &b, float &c){
    return (a+b+c)/3;

}

int main() {
    ios_base::sync_with_stdio(false);
    float a = 5.25;
    float b = 6.25;
    float c = 7.25;


    float tabDlaSredniej[] = {5.5, 6.0, 4.5, 6.0, 5.33};

//     Wywolanie funkcji przesylajac tablice i zmienne przez referncje - oryginaly tez sie zmienia
    float s = sredniaReferencja(tabDlaSredniej, 5);
cout << "Wartosc sredniej to: " << s << endl;
    float sz = sredniaZmiennychReferencja(a,b,c);
cout << "Wartosc sredniej to: " << sz << endl;

    int ile;
    cout << "Ile elementøw tablicy: ";
    cin >> ile;

    int *tablica;
    tablica = new int [ile];



// ----------------  Bez Wskaznika ---------------

start = clock(); // pomiar czasu
    for( int i=0 ; i < ile ; i++ )
    {
      tablica[i] = i;
      tablica[i] += 50;
    }
stop = clock(); // pomiar czasu
    czas = (double)(stop - start)/CLOCKS_PER_SEC; // liczymy czas
    cout << "Czas zapisu BEZ Wskaznika : " << czas << endl;

delete [] tablica;



// ---------------  Z Wskaznikiem  ---------------
int *wskaznik = tablica;
tablica = new int [ile];

start = clock(); // pomiar czasu
    for( int i=0 ; i < ile ; i++ )
    {
        *wskaznik = i; // do wartosci komurki wskazywanej przez pointer przypisz zmienna"i"
        *wskaznik += 50;
        wskaznik++; // zwiekszamy wartosc samego wskaznika (czyli bedzie wskazywal o komurke intowa dalej)
    }
stop = clock(); // pomiar czasu
    czas = (double)(stop - start)/CLOCKS_PER_SEC; // liczymy czas
    cout << "Czas zapisu Z WSKAZNIKIEM : " << czas << endl;
delete [] tablica;

    return 0;
}
