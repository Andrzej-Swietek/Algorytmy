#include<iostream>

using namespace std;

int main() {
//    ios_base::sync_with_stdio(false);
    int n;
    cin >> n; // ilosc elementow
    int *a;
    a =  new int[n+1];
    a[n] = {0};


    for (int i = 1; i <= n ; i++) {
        int tmp;
        cin>>tmp;
        if(tmp>n || a[tmp]==1)
        {
            printf("%s","NIE");
            exit(0);
        }
        a[tmp] = 1;
    }

    printf("%s","TAK");
    delete [] a;
    return 0;
}
