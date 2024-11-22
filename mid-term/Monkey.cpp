// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa/challenges/monkey-1-2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];

    while (cin.getline(s, 100001))
    {
        int len = strlen(s);

        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == ' ')
            {
                count++;
            }
        }

        sort(s, s + len);

        for (int i = count; i < len; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}