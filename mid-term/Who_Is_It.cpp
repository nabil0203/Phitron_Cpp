// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa/challenges/who-is-it-4

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char sec;
    int mark;
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student a, b, c;

        cin >> a.id >> a.name >> a.sec >> a.mark;
        cin >> b.id >> b.name >> b.sec >> b.mark;
        cin >> c.id >> c.name >> c.sec >> c.mark;

        if (a.mark != b.mark || b.mark != c.mark || c.mark != a.mark)
        {
            int max_mark = max({a.mark, b.mark, c.mark});
            if (max_mark == a.mark)
            {
                cout << a.id << " " << a.name << " " << a.sec << " " << a.mark;
            }
            else if (max_mark == b.mark)
            {
                cout << b.id << " " << b.name << " " << b.sec << " " << b.mark;
            }
            else if (max_mark == c.mark)
            {
                cout << c.id << " " << c.name << " " << c.sec << " " << c.mark;
            }
        }

        else
        {
            int min_id = min({a.id, b.id, c.id});
            if (min_id == a.id)
            {
                cout << a.id << " " << a.name << " " << a.sec << " " << a.mark;
            }

            else if (min_id == b.id)
            {
                cout << b.id << " " << b.name << " " << b.sec << " " << b.mark;
            }
            else if (min_id == c.id)
            {
                cout << c.id << " " << c.name << " " << c.sec << " " << c.mark;
            }
        }


        
        cout << endl;
    }

    return 0;
}