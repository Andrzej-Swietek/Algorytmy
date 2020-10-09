#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int z;
    cin >> z; //ilosc zestawów
    vector<int>v; // ilczby calkowite

    for (int i = 0; i < z ; i++) {
        int n; // n liczb w kazdym zestawie
        int k = 0; // odpowiedz
        cin >> n;
        v.clear();
        for (int j = 0; j < n; j++) {

            int a;
            cin >> a;
            v.push_back(a);
        }

        //sortowanie

        sort(v.begin(),v.end());

            int x,y,z;
            x=v[0]*v[1]*v[2];// 3 pierwsze
            y= v[v.size()-1] * v[v.size()-2] * v[v.size()-3]; //3 ostatnie
            z= v[0] * v[1] * v[v.size()-1]; //3 ostatnie

            k = max(max(x,y),z);


        cout << k << endl;
    }




    return 0;
}

// INPUT
//2
//5
//1 4 3 2 5
//
//4
//-2 1 1 5

// OUTPUT
// 60 5