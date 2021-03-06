//
// Created by Andrzej Świętek on 3/6/21.
//
/*
Jaką największą sumę można wybrać nie biorąc dwóch kolejnych elementów?

Wejście:
6
4 2 5 1 2 4
*   *     *

Wyjście:
13


wynik[i] - jaki jest największy wynik, że kończymy w i-tym polu (i to pole wybieramy)
wynik[i] = max(wynik[i - 2], wynik[i - 3]) + A[i]

wynik całego zadania = max(wynik[1], wynik[2], ..., wynik[n])
wynik całego zadania max(wynik[n-1], wynik[n])

x x x x(x)x x


Jeśli A[i] >= 0

x x x(x)x x x [x]
i

        Jak konstrujemy dynamika?
1) jakie mamy stany?
2) jak liczymy pojedynczy stan? w jakiej kolejności liczymy stany? od i = 1 do i = n
3) gdzie jest wynik?


Wersja -10^9 <= A[i] <= 10^9?

6
3 -1 -1 -1 2 4
3  3  3  3 5 7 <- wyniki


        wynik[i] - jaka jest największa suma dla fragmentu A[1], A[2], ..., A[i]
wynik[i] =

if(A[i] >= 0){
wynik[i] = max(wynik[i-2],wynik[i-3]) + A[i];
}
else{
wynik[i] = max(wynik[i-1], wynik[i-2]);
}


wynik[3]

0   1   2   3
5   5   5   1 <- A[i]
5   5  10   6 <- wynik[i]


wynik[i][TAK\NIE] - wynik dla prefiksu A[1], A[2], ..., A[i] przy założenie, że biorę/nie biorę ostatni element A[i]
wynik[i][0] -> NIE
        wynik[i][1] -> TAK


5   5   5   1
wynik[i][0]   0   5   5  10
wynik[i][1]   5   5  10   6


x x x x x(x) ...
wynik[i][0] = max(wynik[i - 1][0], wynik[i - 1][1]);
wynik[i][1] = A[i] + max(wynik[i - 2][0], wynik[i - 2][1])


5  -3   -3   2  -2  4
wynik[i][0]   0   5    5   5   7  7
wynik[i][1]   5  -3    2   5   3  11

*/

//Kod:
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n + 5];
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }

    int wynik[n + 5][2];
    wynik[0][0] = 0;
    wynik[0][1] = 0;
    for (int i = 1; i <= n; i++) {
        wynik[i][0] = max(wynik[i - 1][0], wynik[i - 1][1]);
        wynik[i][1] = A[i] + max(wynik[max(0, i - 2)][0], wynik[max(0, i - 2)][1]);
    }
    cout << max(wynik[n][0], wynik[n][1]);

    return 0;
}
