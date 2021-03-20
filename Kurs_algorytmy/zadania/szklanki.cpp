//
// Created by Andrzej Świętek on 3/20/21.
//
/*
Zadanie: Szklanki (str. 98)

4
3 1 3 5
3 3 1 5
3 3 3 3
cel = 3

3 3 1 5
3|3+3+3

|    |       |          |      |

3
S ? S ? S ? S ? S ? S
->  <-  ->  ->  <-

*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int szklanki[n];
    int suma = 0;
    for(int i =0;i<n;i++){
        cin >> szklanki[i];
        suma += szklanki[i];
    }
    int cel = suma/n;
    int wynik = 0;
    for(int i=0;i<n-1; i++){
        if(szklanki[i] < cel){
            int a = cel - szklanki[i];
            szklanki[i+1] -= a;
            szklanki[i] += a;
            wynik++;
        }
        else if(szklanki[i] > cel){
            int a = szklanki[i] - cel;
            szklanki[i+1] += a;
            szklanki[i] -= a;
            wynik++;
        }
    }
    cout << wynik << endl;
    return 0;
}
