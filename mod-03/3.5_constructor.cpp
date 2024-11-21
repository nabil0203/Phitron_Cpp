#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    double gpa;
    int roll;

    // contructor
    Student(int c, double g, int r)
    {
        cls = c;
        gpa = g;
        roll = r;
    }
};

int main()
{
    Student rahim(5, 3.44, 77);                                     // calling constructor, passing value directly
    Student kaka(9, 7.32, 35);


    // don't need to do this whole thing
    /*  Student kaka;   (class, obj)
        kaka.cls = 9;
        kaka.gpa = 7.32;
        kaka.roll = 35;
    */

    cout << rahim.cls << " " << rahim.gpa << " " << rahim.roll << endl;
    cout << kaka.cls << " " << kaka.gpa << " " << kaka.roll;

    return 0;
}