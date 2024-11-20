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
    Student a;                              // class & object

    a.roll = 22;
    a.gpa = 3.96;

    char temp[100] = "Nabil";                    // put it in a temp array then copy;
    strcpy(a.name, temp);



    cout << a.name << " " << a.roll << " " << a.gpa;

    return 0;
}