// string with space input
// getline & cin.ignore used

/*

2
nabil ahmed
11 98
ahmed chowdhury
32 55

*/


#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();                                  // ignoring the 'enter'

        getline(cin, a[i].name);                         // only for string

        cin >> a[i].roll >> a[i].marks;
    }





    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }


    return 0;
}