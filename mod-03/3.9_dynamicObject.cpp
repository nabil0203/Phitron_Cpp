#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};






int main()
{
    Student rahim(32, 9, 3.88);                                // static object rahim

    Student *karim = new Student(88, 4, 2.67);                    // dynamic object karim



    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;

    return 0;
}