#include <iostream>

using namespace std;
bool wynik = false;
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int *a;
    a =  new int[n];
    int *b;
    b =  new int[n];
    int *zlicz;
    zlicz =  new int[n+1];

    int sumaA, sumaB = 0;
    for (int i = 0; i < n ; i++) {
        cin >> a[i] >> b[i];
        sumaA+=a[i]; sumaB+=b[i];
    }
int r = sumaA-sumaB;

if (r%2==0){
    r/=2;
    // zliczanie ilosci elementow
    for (int i = 0; i < n; i++) {
        zlicz[a[i]] += 1;
    }
    for (int i = 0; i < n; i++){
        if(b[i] - r >= 0 && b[i] - r <= n && zlicz[ b[i] - r ] > 0 ){ // 1 - b[i] - r >= 0 bo inaczej odwoła sie do ujemnego index tablicy zlicz w 3 warunku  - never mind - 3 -> sprawdzenie czy w tablicy a znajduje się element a[i]==b[i]+-r
            wynik = true;
        }
    }
}

cout<< wynik;

    return 0;
}
