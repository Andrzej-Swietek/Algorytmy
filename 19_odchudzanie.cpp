#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;

    vector<int>v;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    int m = v[0]; // pierwsza maksymalna waga ( ewentualnie zmieni sie at wartosc)
    int k = 0; // max kalori spalonych
    for(int j=0; j<n; j++) // od jedynki bo pierwszy element jest w "m"
    {
        if(v[j] > m)
        {
            m = v[j]; // jesli wieksza to zmieniamy największa mase
        }
        else {
            if(m-v[j]>k) // masa max - obecna => jesli tak to najwiekszemu spadkowi przypisujemy najwiekszy spadek
                k = m-v[j];
        }
    }

    cout<<k;
    return 0;
}
//5
//6 7 5 4 2