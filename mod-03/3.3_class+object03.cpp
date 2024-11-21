/* all input; input has space & enter

    Nabil Chowdhury
    22 3.96
    Ahmed Nabil
    44 8.44

    */

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{

    Student nabil, turzo;

    cin.getline(nabil.name, 100);                               // cin.getline(string,size)-----> sapce included
    cin >> nabil.roll >> nabil.gpa;

    cin.ignore();                                               // ignores new line or enter


    cin.getline(turzo.name, 100);
    cin >> turzo.roll >> turzo.gpa;

    cout << nabil.name << " " << nabil.roll << " " << nabil.gpa << endl;
    cout << turzo.name << " " << turzo.roll << " " << turzo.gpa;

    return 0;
}