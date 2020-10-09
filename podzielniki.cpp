#include <iostream>

using namespace std;
int ile_podzielnikow(int n){
    int suma=1;
    for (int i=2; i*i <= n;i++) {
        if(i*i==n) suma+=1;
        else if (n % i == 0) suma += 2;
    }
    return suma;
}
int main() {
    ios_base::sync_with_stdio(false);
    int a,b,c;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >> a>>b>>c;
        char who, who2;
        cin >> who;
        if(who=='J')
            who2 = 'P';
        else
            who2 = 'J';

// 2 lub 3 liczby pierwsze
        if( ( ile_podzielnikow(a) == 1 &&  (ile_podzielnikow(b) == 1) )|| (ile_podzielnikow(c) ==1 && ile_podzielnikow(a) == 1) || (ile_podzielnikow(c) ==1 && ile_podzielnikow(b) == 1))
        {
            cout<< who << endl;
        }

        else {
            int u = (ile_podzielnikow(a)%2) + (ile_podzielnikow(b)%2) + (ile_podzielnikow(c)%2);
            switch (u) {
                case 0: // 3 parzyste
                    cout << who2 << endl;
                    break;
                case 1: //jedena nie patrzysta liczba podzielnikow - 2 padrzyste
                    cout << who << endl;
                    break;
                case 2: //2 nieparzyste
                    cout << who2 << endl;
                    break;
                case 3: // 3 nieparzystee
                    cout << who << endl;
                    break;
            }

//            cout<<endl<<u<<endl<<ile_podzielnikow(4);
        }
    }





    return 0;
}
