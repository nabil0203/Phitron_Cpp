// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa/challenges/choose-three

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, s;
        cin >> n >> s;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int count = 0, t_sum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    t_sum = a[i] + a[j] + a[k];
                    if (t_sum == s)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        if (count == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
