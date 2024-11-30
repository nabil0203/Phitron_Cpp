/*

Make a class named Student. Write a program to take a positive integer N as input and make an Student array of size N.

Student
{
    name;
    roll;
    marks;
}

Your task is to sort the Students data according to the marks in descending order. If multiple students have the same marks then sort them according to the roll in ascending order as the roll will be unique.


Note: name will not contain any spaces.


Sample Input 1:
5
Asif 29 95
Sakib 55 89
Zubair 57 93
Ahsan 39 86
Joy 12 99

Sample Output 1:
Joy 12 99
Asif 29 95
Zubair 57 93
Sakib 55 89
Ahsan 39 86


Sample Input 2:
5
Asif 29 95
Sakib 55 86
Zubair 57 86
Ahsan 39 86
Joy 12 99

Sample Output 2:
Joy 12 99
Asif 29 95
Ahsan 39 86
Sakib 55 86
Zubair 57 86


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

bool comp(Student l, Student r)
{
    if (l.marks == r.marks)
    {
        return l.roll < r.roll;
    }
    else
    {
        return l.marks > r.marks;
    }
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}