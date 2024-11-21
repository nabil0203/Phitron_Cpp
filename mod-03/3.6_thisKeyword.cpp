#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    double gpa;
    int roll;

    Student(int cls, double gpa, int roll)                          // same variable name of class & conntructor; so "this" must be used to indicate class
    {
        this->cls = cls;
        this->gpa = gpa;
        this->roll = roll;
    }
};



int main()
{
    Student rahim(5, 3.44, 77);
    Student kaka(9, 7.32, 35);

    cout << rahim.cls << " " << rahim.gpa << " " << rahim.roll << endl;
    cout << kaka.cls << " " << kaka.gpa << " " << kaka.roll;

    return 0;
}