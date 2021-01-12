#include<iostream>

using namespace std;

int nwd(int a, int b){
    if(a % b ==0) return b;
    return nwd(b, a%b);
}
int main() {
    ios_base::sync_with_stdio(false); // wylacza synchronizacje miedzy cinami a scanf
    cin.tie(NULL); // wylacza flashowanie po kazdym coucie
    int z = 0;
    int n = 0, d = 0;

    cin >> z;
    for(int i=0; i < z; i++){
        cin >> n >> d;
        cout << n/nwd(n,d) << endl;
    }

    return 0;
}
