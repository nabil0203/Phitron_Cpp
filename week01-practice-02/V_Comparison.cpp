// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    int a,b;
    cin >> a >> c >> b;

    if (c == '>')
    {
        if (a > b)
        {
            cout << "Right";
        }
        else
            cout << "Wrong";
    }

    if (c == '<')
    {
        if (a < b)
        {
            cout << "Right";
        }
        else
            cout << "Wrong";
    }

    if (c == '=')
    {
        if (a == b)
        {
            cout << "Right";
        }
        else
            cout << "Wrong";
    }

    return 0;
}