// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int num;
        char z;

        cin >> num >> z;

        for (int i = 0; i < num; i++)
        {
            cout << z << " ";
        }
        cout << endl;
    }

    return 0;
}