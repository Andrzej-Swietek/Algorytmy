//
// Created by Andrzej Świętek on 3/6/21.
//
/*

5 0 1 2 3  4
************
0 1 2 3 4 5 6 7 8 9 10 11 12 13
?

value[i]
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int value[6];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int maxval = INT32_MIN;
        for (int j = i - 1; j >= 0 && j >= i - 6; j--)
        {
            maxval = max(maxval, value[j % 6]);
        }
        value[i % 6] = a + maxval;
    }
    cout << value[(n - 1) % 6] << "\n";
    return 0;
}
/*
    Czas: O(N)
    Pamięć: O(1)
*/