#include<iostream>
#include <vector>
#include <math.h>
using namespace std;

bool pierwsza(int x)
{
    if( (x == 2) || (x == 3) ) return true;
    else if((x < 2) || (x%2==0) || (x%3==0)) return false;

    int i = 5;
    while(i <= sqrt(x)){
        if(x % i ==0) return false;
        i+=2;

        if(x % i==0) return false;
        i+=4;
    }
    return true;
}


bool czyJednoKwadratowa(int a){
    int sumka = 0;

    while(true)
    {
        while(a>0){
            int bb = a%10;
            sumka += bb*bb;
            a/=10;
        }
        a=sumka;

        if (sumka == 1) return true;
        if(sumka == 4 ) return false;
        sumka = 0;
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    int L,U,K;
    cin >> L >> U >> K;

    int k=0;
    int final = 0;
    vector<int>d; //dziedzina;


    for(int i=L; i <U; i++)
    {
        if( (pierwsza(i)) )
        {
            d.push_back(i);
        }
    }
    for(int i=0; i <d.size(); i++)
    {
        if(czyJednoKwadratowa(d[i])){
            k++;
            final = d[i];
        }
        if(k == K)
        {
            cout << final <<endl;
            break;
        }
    }



    if(k<K) cout<< "-1" <<endl;
    return 0;
}
