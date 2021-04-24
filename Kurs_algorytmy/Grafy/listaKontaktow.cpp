//
// Created by Andrzej Świętek on 4/24/21.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const int MAX = 1000000;

vector<int> id(MAX+2, 0);
vector<vector<int>> adj(MAX);

void DFS(int s, int iden){
    id[s] = iden;
    for(int u : adj[s]){
        if(id[u] == 0){
            DFS(u, iden);
        }
    }
}

void solve(){
    int n,m;
    cin >> n >> m;
    for(int i = 0; i<m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    //dfs dla kolejnych wierzcholkow ktore nie maja id:
    for(int i = 1; i<n+1; i++){
        if(id[i]==0){
            DFS(i,i);
        }
    }


    int z;
    cin >> z;
    for(int i = 0; i<z; i++){
        int a, b;
        cin >> a >> b;
        if(id[a] == id[b]){
            cout << "TAK" << endl;

            else{
                cout << "NIE" << endl;
            }
        }
    }
    int main(){
        solve();
        return 0;
    }
