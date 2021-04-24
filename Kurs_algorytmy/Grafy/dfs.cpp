//DFS:
#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 100005;

vector<int> G[MAX_N];
int wynik;
bool odwiedzony[MAX_N];

void dfs(int v) {
    wynik++;
    odwiedzony[v] = true;

    for(int sasiad : G[v]) {
        if(!odwiedzony[sasiad]) {
            dfs(sasiad);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    dfs(1);

    cout << wynik;

    return 0;
}
