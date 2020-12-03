#include <iostream>
#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int t,n,x;
    cin >> t;
    int i,w;
    int min = 100000;
    for(i=0; i<t; ++i)
    {
        cin >> n >> x;
        int s = 0;
        vector<int> z;
        for(int j = 0; j < n; ++j)
        {
            cin >> w;
            s += w;
            z.pb(w);
        }
        int fl = 0;
        for(int j=0; j<z.size(); ++j)
        {
            if ((s/x) == ((s-z[j])/x))
            {
                cout << -1 << endl;
                fl = 1;
                break;
            }
        }
        if (fl == 0)
        {
            cout << (s/x) << endl;
        }
    }
    return 0;
}
