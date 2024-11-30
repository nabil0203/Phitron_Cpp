// prints the whole info of the object that has minimum 'mark'



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

    Student a[n];                   // array of the class

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }



    Student mini;                               // declaring an object for the mininum
    mini.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < mini.marks)
        {
            mini = a[i];                        // changing the mini value
        }
    }

    cout << mini.name << " " << mini.roll << " " << mini.marks << endl;

    return 0;
}