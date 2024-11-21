// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

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

        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int x = INT_MAX;
        int mini;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int value = a[i] + a[j] + j - i;

                mini = min(x, value);
                
                x = mini;
            }
        }
        cout << mini << endl;
    }

    return 0;
}