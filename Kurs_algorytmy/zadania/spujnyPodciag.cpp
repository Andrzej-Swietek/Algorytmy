#include <iostream>
#include <map>
using namespace std;

map <int, int> ile;

int main () {
    int n, m;
    cin >> n >> m;

    ile[0] = 1;
    int suma = 0;
    long long wynik = 0;

    for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        suma = (suma + a) % m;
        wynik += ile[suma];
        ile[suma]++;
    }

    cout << wynik;

    return 0;
}

