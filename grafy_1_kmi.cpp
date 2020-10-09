#include<iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

vector<int> G[10001];
int N,V;
int kolor[10001]={0};

void BFS_kotki(int n){

    queue<int>Q;
    kolor[n] = 1;
    Q.push(n);

    while (!Q.empty()){
        int k = Q.front();Q.pop();
        for (int i=0; i< (int)G[k].size(); i++ ){
            if(kolor[ G[k][i] ] == 0){
                kolor[ G[k][i] ]= (-1) * kolor[k];
                Q.push( G[k][i] );
            }
            else if (kolor[ G[k][i]] ==kolor[k]) // sa rowne kolorki i nie mozna pokolorowac i nie beda sasiadami
            {
                cout << "NIE" << endl;
                exit(0);
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);

    cin >> N >> V;

    // Wczytywanie do grafu
int k,l;
for(int i=1; i <=V; i++ )
{
    cin >> k >> l;
    G[k].push_back(l);
    G[l].push_back(k);
}

for( int n=1; n<=N; n++)
    if(kolor[n]==0) BFS_kotki(n);
    cout<<"TAK"<<endl;

    return 0;
}
