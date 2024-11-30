// sort(a,a+n)
// we have to say to the function that, we are sorting depending on what
// because the objects have 3 things --> name, roll, marks

/*

6
sakib 15 89
rakib 18 65
akib 28 75
sifat 24 92
ifat 17 85
rifat 23 99

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

    // if (l.marks < r.marks)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }



    return l.marks < r.marks;           // in ascending order
    
//  return l.marks > r.marks;           // in descending order


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