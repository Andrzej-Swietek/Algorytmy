//
// Created by Andrzej Świętek on 3/20/21.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    int n, m;
    n = a.length();
    m = b.length();
    int tab[n+1][m+1];
    for(int i = 0; i<=n;i++){
        tab[i][0] = 0;
    }
    for(int i = 0; i<=m; i++){
        tab[0][i] = 0;
    }
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=m;j++){
            if(a[i-1] == b[j-1]){
                tab[i][j] = tab[i-1][j-1] + 1;
            }
            else{
                tab[i][j] = max(tab[i-1][j], tab[i][j-1]);
            }
        }
    }
    cout << tab[n][m];
    return 0;
}
