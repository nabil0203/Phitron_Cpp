// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin >> X;

    if (X >= 48 && X <= 57)
    {
        cout << "IS DIGIT" << endl;
    }

    if (X >= 65 && X <= 90)
    {
        cout << "ALPHA"
             << endl
             << "IS CAPITAL"
             << endl;
    }

    if (X >= 97 && X <= 122)
    {
        cout << "ALPHA"
             << endl
             << "IS SMALL"
             << endl;
    }
    return 0;
}