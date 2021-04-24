//
// Created by Andrzej Świętek on 3/25/21.
//

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

//int ileDni(int pozycja, int ileZostalozK, int licznik, int ileMiast, int*v){
//    if( pozycja == ileMiast )
//        return licznik;
//    if ( v[pozycja] == -1 ) //brak autostrady
//        return ileDni(pozycja++, ileZostalozK, licznik++,ileMiast, v);
//    if (ileZostalozK >= 1)
//        return min( ileDni(v[pozycja], ileZostalozK--, licznik++,ileMiast, v), ileDni(pozycja++, ileZostalozK, licznik++,ileMiast, v));
//    return ileDni(pozycja++, ileZostalozK, licznik++,ileMiast, v);
//}


int main(){
    ios_base::sync_with_stdio(false); // wylacza synchronizacje miedzy cinami a scanf
    cin.tie(NULL); // wylacza flashowanie po kazdym coucie

    int n,k;
    cin >> n >> k;
    vector<int> miasta;

    int najkrotszaDroga[k+1][n]; // Dojście do n miasta wykorzytujac maxymalnie k autostrad

    for(int i=n; i>0 ; i--){
        int tmp;
        cin >> tmp;
        tmp = min(tmp,n-1);
        miasta.push_back(tmp);
    }

    for (int l = 0; l < n; l++)
        najkrotszaDroga[0][l] = l;

    // w zaleznosci od k
    for (int i = 1; i <= k; i++) {
        for (int j = 0; j < n; j++) {
            // najkrotsza droga od 1 do n: lepiej dostac sie bez autostrady
            najkrotszaDroga[i][j] =  najkrotszaDroga[i-1][j];
        }
        // czy uzywajac autostrad da sie zajechac szybciej (stania na bramkach nie uwzgledniamy xd)
        for (int j = 0; j < n; j++) {
            // jesli prowadzi autostrada sprawdzamy czy opyla sie jej uzyc
            if ( miasta[j] >= 0 ){
                najkrotszaDroga[i][miasta[j]] = min( najkrotszaDroga[i][miasta[j]], najkrotszaDroga[i-1][j]+1 );
            }
        }

        for (int j = 1; j < n; j++) {
            najkrotszaDroga[i][j] = min( najkrotszaDroga[i][j], najkrotszaDroga[i][j-1]+1 );
        }
    }
    cout << najkrotszaDroga[k][n-1];
    return 0;
}

// Lecz poniewaz operujemy tylko na 2 ostatnich wierszach to zredukujemy zlozonosc pamieciowa

