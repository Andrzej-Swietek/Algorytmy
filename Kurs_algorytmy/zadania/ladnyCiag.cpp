//
// Created by Andrzej Świętek on 3/27/21.
//

#include<iostream>
using namespace std;

const int MAX = 1000;

int DP[MAX + 5][MAX + 5];

int main() {
    int N, K, q;
    cin >> N >> K >> q;

    for(int k = 0; k <= K; k++) {
        DP[1][k] = 1;
    }

    for(int n = 2; n <= N; n++) {
        for(int k = 0; k <= K; k++) {
            if(k > 0) DP[n][k] = DP[n - 1][k - 1];
            DP[n][k] = (DP[n][k] + DP[n - 1][k]) % q;
            if(k < K) DP[n][k] = (DP[n][k] + DP[n - 1][k + 1]) % q;
        }
    }

    for(int zapytanie = 1; zapytanie <= N; zapytanie++) {
        int n;
        cin >> n;

        int wynik = 0;
        for(int ostatni = 0; ostatni <= K; ostatni++) {
            wynik = (wynik + DP[n][ostatni]) % q;
        }
        cout << wynik << " ";
    }
    return 0;
}
