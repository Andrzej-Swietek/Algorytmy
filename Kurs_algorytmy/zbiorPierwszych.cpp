#include<iostream>
#include <vector>
using namespace std;

int nwd(int a, int b){
    if(a % b ==0) return b;
    return nwd(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(false);
    int n,a,b;
    cin >> n;
    for(int i=0; i< n; i++)
    {
        cin >> a >> b;
        int c = nwd(a,b);
        while( a != 1 && c!= 1){
            a /= c;
            c = nwd(a,b);
        }
        string s = a==1? "TAK":"NIE";
        cout << s << endl;
    }

    return 0;
}
