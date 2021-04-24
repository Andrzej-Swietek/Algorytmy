#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;

const int MAX_N = 100005;

vector<int> graf[MAX_N];
bool odwiedzony[MAX_N];
int dol[MAX_N];

void dfs(int v) {
    odwiedzony[v] = true;
    for(int u : graf[v]) {
        if(!odwiedzony[u]) {
            dfs(u);
            dol[v] = max(dol[v], 1 + dol[u]);
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

    for(int i = 1; i <= n; i++) {
        cout << dol[i] << " ";
    }

    return 0;
}