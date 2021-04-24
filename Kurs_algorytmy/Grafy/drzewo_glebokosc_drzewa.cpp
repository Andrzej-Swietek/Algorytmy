#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;

const int MAX_N = 100005;

vector<int> graf[MAX_N];
int gl[MAX_N];

void dfs(int v) {
    for(int u : graf[v]) {
        if(gl[u] == 0) {
            gl[u] = gl[v] + 1;
            dfs(u);
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

    gl[1] = 1;
    dfs(1);

    int wynik = gl[1];
    for(int i = 1; i <= n; i++) {
        wynik = max(wynik, gl[i]);
    }
    cout << wynik;

    return 0;
}
