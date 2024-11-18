// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxx = a[0];
    for (int i = 0; i < n; i++)
    {
        maxx = max(a[i], maxx);
    }

    cout << maxx;

    return 0;
}