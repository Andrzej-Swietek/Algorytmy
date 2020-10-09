#include<iostream>
#include <cstdlib>
#include <vector>

#define MAXN 100000
#define INF 1000000000000

using namespace std;

//Cykl Eulera -> ilosc krawedzi z danego wierzcholka musi nyc parzysta, sparzysty
// przez wiekszolki mozemy przechodzic wielokrotnie ale nie przez krawedz
    // Algorytm Fleury'ego -> znajdowanie cyklu eulrera:
    //    Dopuki istnieje krawedz z v:
    //            usun te krawedz

// Dixtry problemy grafów ważonych - krawedzie maja dlugosci - jaka jest najkrutsza scierzkanz v do w / 2^n

int n; //liczba wierzchołków
int m; // liczba krawędzi
vector<int> krawedzie[MAXN + 1]; //listy sąsiedztwa
vector<int> waga[MAXN + 1]; // waga[i][j] - waga krawedzi i-krawedz[i][j]
int dist[MAXN +1]; //te dwie tablice
int ojc[MAXN + 1]; // ...opisane sa w tekjsicie powyzej
bool visited[MAXN+1]; // czy wierzchołek był już porzertworzony

int main() {
// wczytanie grafu

//    ios_base::sync_with_stdio(false);
printf("%s","Podaj kolejno n ilosci wierzcholkow i m - ilosc krawedzi \n");
scanf("%d%d", &n, &m); //przez wskazniki
while( --m){ //ile razy wykona sie ta petla
    int a,b,c;
    printf("%s","Podaj kolejno a, b i c - krawedz a->b o koszcie c \n");
    scanf("%d%d%d", &a, &b, &c);

    krawedzie[a].push_back(b);
    waga[a].push_back(c);

}


// algorytm dijkstry
for (int i=1; i<=n; i++) visited[i]= false; // nie odwiedxzone
for (int i=1; i<=n; i++) dist[i]= INF; // maxymalana wartosc dla dystansu
dist[1]= 0; //dystans z s do s ->poczatkowy

while (true){
    //wybierz nie odwiedzony wierchołek o najmniejszej dist
    int v=1;

    // aktualnie wybrany wierchołek
    for (int i = 0; i <= n ; i++) {
        if (!visited[i]) v=i;
    }
//    wybierz jeden dowolny ni+eodwiedzony wierzchołek
    for (int i = 0; i <= n ; i++) // przejrzyj wszystkie wierzchołki
        if(!visited[i] && dist[i]< dist[v]) // jesli ma mniejsze dist niz obecny
            v=i; //to wez go


    if(visited[v] || dist[v] == INF) break;
    //jesli nie ma juz nie odwiedzonych wierchołkow
//    o skonczonej odleglosci to konczymy

    visited[v] = true; // oznacz v jak odwiedzony
    for (int i = 0; i <=  krawedzie[v].size() ; i++) {
        int w=krawedzie[v][i];
        int k=waga[v][i];

        if(dist[v] + k < dist[w] ){
            dist[w] = dist[v]+k;
            ojc[w] = v;
        }
    }





}
    for (int i = 0; i <= n ; i++) {
        cout<< "v=" << i << " ojc[v] = " << " dist[v]=  " << dist[i] << " vis[v] = " << visited[i]<<endl;
    }
    return 0;
}
