#include<iostream>
#include<vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n,m;
    int ileObrotow = 0;
    cin >> n >> m;
    vector<vector<int> > v;
    for (int i = 0; i < n; i++) {
        vector<int> tmp;
        for (int j = 0; j < n; j++) {
            int xy;
            cin >> xy;
            tmp.push_back(xy);
        }
        v.push_back(tmp);
    }

    for (int k = 0; k < m; k++) {
        char op;
        cin >> op;
        switch (op)
        {
            case 'A':
                int deg;
                cin >> deg;
                ileObrotow += (deg / 90);
            break;

            case 'Q':
                int r, c;
                int tmp1;
                cin >> r >> c;
                if(ileObrotow%4==1)
                {
                    tmp1 = c;
                    c = r;
                    r = n -1- tmp1;
                }
                else if(ileObrotow%4==2)
                {
                    for(int i=0;i<2;i++) {
                        tmp1 = c;
                        c = r;
                        r = n -1- tmp1;
                    }
                }
                else if(ileObrotow%4==3)
                {
                    for(int i=0;i<3;i++) {
                        tmp1 = c;
                        c = r;
                        r = n - 1 - tmp1;
                    }
                }

                cout << v[r][c] << endl;
            break;

            case 'U':
                int x, y, value;
                cin >> x >> y >> value;

                v[x][y] = value;
            break;
        }
    }
    return 0;
}
