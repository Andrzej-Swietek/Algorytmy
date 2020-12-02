#include<iostream>
#include <math.h>
#include <vector>

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

int main() {
    ios_base::sync_with_stdio(false);
    int N, D;
    cin >> N >> D;
    vector<int>p; // pierwsze rosn�co
    vector<int>q;


    int finalResult =0;
    int iter = 5; p.push_back(2); p.push_back(3);
    while(p.size() <= N+D)
    {
        if(pierwsza(iter)){
            p.push_back(iter);
        }

        iter+=2;

        if(pierwsza(iter)){
            p.push_back(iter);
        }

        iter+=4;
    }

    for(int i=0; i < N; i++)
    {
        q.push_back(p[i]*p[i+D]);
    }
    int qOdEnMinusJeden = q[N-1];
    int qZero = q[0]; // dowód nie wprost 2*p[0] da parzysta potrzebna by 4 liczby kolejne daly nieparzysta

    for (int b = 0; b < N; b++) {
        //            b
        // suma > q[a-1] brak rozwiaznia
        if(qZero+q[b] > qOdEnMinusJeden) continue;
        else {
            for (int c = b; c < N; c++) {
                //                c
                // suma > Q[a-1] brak rozwiaznia
                if(qZero+q[b]+q[c] > qOdEnMinusJeden) continue;
                else{
                    for (int d = c; d < N; d++) {
                        //                d
                        // suma > Q[a-1] brak rozwiaznia

                        int suma = qZero+q[b]+q[c]+q[d];
                        if( suma > qOdEnMinusJeden) continue;
                        else {
                            int e=d;
                            while(suma >= q[e] && e<N)
                            {
                                e++;
                                if(suma == q[e])
                                    finalResult++;
                            }
                        }
                    }
                }
            }

        }
    }


    cout<<finalResult;
    return 0;
}
