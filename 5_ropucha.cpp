#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int destination,falling = 0;
    cin >> destination >> falling;

    int *positions;
    positions =  new int[destination+1];
    positions[destination+1]={0};

    int spadniete=0;// ilosc spadnietych lisci na unikalnych miejscach (czyli, 1,3,4 a nie 1,1,1,3,3,3)
    for(int i=0; i<falling; i++){
        int leaf;
        cin >> leaf;
            if(positions[leaf]==0) {spadniete++;}
            if(spadniete==destination){
                cout<<i+1;
                exit(0);
            }


        positions[leaf]=1; // zczytujemy z wejscia ktore listki spadly
    }

    cout << -1;


    return 0;
}
