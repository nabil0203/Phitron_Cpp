// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/replace-word

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s;
        cin.ignore();
        cin >> x;

        int a = s.size();
        int b = x.size();

        for (int i = 0; i < a;)
        {
            int count = 0;
            for (int j = 0; j < b; j++)
            {
                if (s[i + j] != x[j])
                {
                    count++;
                    break;
                }
            }

            if (count == 0)
            {
                s.replace(i, b, "#");
                i++;
            }
            else
                i++;
        }

        cout << s << endl;
    }


    return 0;
}