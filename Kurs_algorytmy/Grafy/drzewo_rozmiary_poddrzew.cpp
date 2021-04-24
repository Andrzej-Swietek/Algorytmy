#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;

const int MAX_N = 100005;

vector<int> graf[MAX_N];
int rozmiar[MAX_N];

void dfs(int v) {
    rozmiar[v] = 1;
    for(int u : graf[v]) {
        if(rozmiar[u] == 0) {
            dfs(u);
            rozmiar[v] += rozmiar[u];
        }
    }
}

int main() {
    int n;
    cin >> n;

    for(int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        graf[a].push_back(b);
        graf[b].push_back(a);
    }

    dfs(1);

    int wynik = rozmiar[1];
    for(int i = 1; i <= n; i++) {
        wynik = max(wynik, rozmiar[i]);
    }
    cout << wynik;

    return 0;
}