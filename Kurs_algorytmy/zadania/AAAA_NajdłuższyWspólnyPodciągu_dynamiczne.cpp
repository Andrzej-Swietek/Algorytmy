//
// Created by Andrzej Świętek on 3/20/21.
//
/*
Wejście:
alamakota
        nabmaxk
Wyjście:
4

DP[i][j]

a l a m a k o t a
0 0 0 0 0 0 0 0 0 0
n 0 0 0 0 0 0 0 0 0 0
a 0 1 1 1 1 1 1 1 1 1
b 0 1 1 1 1 1 1 1 1 1
m 0 1 1 1 2 2 2 2 2 2
a 0 1
x 0 1
k 0 1               ?

DP[i][j]

if S1[i] == S2[j]
DP[i][j] = 1 + DP[i - 1][j - 1]
else:
DP[i][j] = max(DP[i][j - 1], DP[i - 1][j])


S1_1, S1_2, ..., S1_i
        S2_1, S2_2, ..., S2_j

        xxxxxxxx     ?
xxxxxxxxxxxxxx?


O(|S1| * |S2|)



*/
#include <iostream>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;

    int n = A.length(), m = B.length();
    A = " " + A;
    B = " " + B;

    int lcs[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        lcs[i][0] = 0;
    }
    for (int i = 0; i <= m; i++)
    {
        lcs[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (A[i] == B[j])
            {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            }
            else
            {
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    }

    cout << lcs[n][m] << "\n";
    return 0;
}

