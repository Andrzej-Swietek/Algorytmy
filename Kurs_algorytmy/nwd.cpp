#include<iostream>

using namespace std;

int nwd(int a, int b){
    if(a % b ==0) return 0;
    return nwd(b, a%b);
}


int main() {
    ios_base::sync_with_stdio(false);
    int a,b;
    cin >> a >> b;
    return 0;
}
