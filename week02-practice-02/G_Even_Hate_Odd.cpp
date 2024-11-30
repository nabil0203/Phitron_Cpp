// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int even = 0;

        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    even++;
                }
            }

            cout << abs(even - (n / 2)) << endl;
        }
        
        else
            cout << "-1" << endl;
    }

    return 0;
}