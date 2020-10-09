#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    double n;
    cin >> n;

    //v.push_back(0);

    double k = 0;
    cout << fixed;

    for(int i=0;i<n;i++)
    {
        double tmp;

        cin>> tmp;

        if(i==0)
            k = tmp;
        else
        {
            if(tmp<k)
                k = tmp;
        }


//        v.push_back(v[v.size()-1]+tmp);
        // sumy prefixowe- odwolanie do ostatniej komorki wektora (na poczatku bedzie to v[0] potem v[1] ..)
        // sumy prefixowe dla ciagu an=n (1,2,3,4,5,6,7,8,9) czyli v = [ 0, 1 , 3, 6 , 10 ...]

        //float wynik = v[i+1] / ( v.size()-1);// srednia z zadania i odejmujemy 1 czyli nasze gowniane zero ktore dodalismy
        // najmniejsza - ponizej -

    }
    cout<< setprecision(2) << k;

    return 0;
}
