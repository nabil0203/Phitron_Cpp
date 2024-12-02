// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/find-jessica

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    int count = 0;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            count++;
            break;
        }
    }


    if (count == 0)
    {
        cout << "NO";
    }
    else
        cout << "YES";

    return 0;
}