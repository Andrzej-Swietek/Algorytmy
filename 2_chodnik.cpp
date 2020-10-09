#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n; // ilosc napisanych liczb
    int suma = 0; // jsuma liczb widniejacych na chodniku
    cin >> n;

    for(int j=0; j< n-1; j++){
        int a=0;
        cin >> a;
        suma +=a;
    }
// wzor na sume kolejnych liczb od 1 do n s=(n*(n+1))/2 #matemetyka
    int powinnaByc = (n * (n + 1)) / 2;

    cout << powinnaByc - suma << endl;

}


//
// Created by Andrzej Świętek on 12/1/19.
//

