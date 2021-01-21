#include<iostream>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
int liczba0 = 0;
int liczba1 = 0;
string napis; cin >> napis;
for( int i=0; i < napis.length(); i++)
{
    if(napis[i]== '0') liczba0++;
    else liczba1++:
}
cout << 2 * min(liczba0,liczba1);

    return 0;
}
