
//Jaki jest najdłuższy podciąg tego fragmentu, który jest palindromem?


#include<iostream>
using namespace std;

const int MAX_N = 10005;

string S;
int n, DP[MAX_N][MAX_N];

int dlugosc(int start, int end){
//    jesli dl slowa == 1 => 1
    if(end - start + 1 == 1){
        return 1;
    }
//    Jeślli dl slowa == 2
    if(end - start + 1 == 2){
        //  i poczatkowa i koncowa sa rowne to => 2 np "aa"
        if(S[start] == S[end]){
            return 2;
        }
        // jak nie to 1 np "ab"
        return 1;
    }
//    W innych wypadkach
    if(S[start] == S[end]){
        return 2 + DP[start+1][end-1];
    }

    return max(DP[start+1][end], DP[start][end-1]);
}

int main() {
    cin >> S;
    n = S.length();
    S = "?" + S;
// iterujemy po dlugosciach = 1,2,3,4,...,n
    for(int d = 1; d <= n; d++) {
        for(int start = 1; start + d - 1 <= n; start++) {
            int end = start + d - 1;
            DP[start][end] = dlugosc(start, end);
        }
    }

    return 0;
}
/*
Wejście:
xaadxada    długość <= 1000
4   zapytań <= 10^6
3 7
2 3
4 4
5 8
Wyjście:
3
2
1
3
*/