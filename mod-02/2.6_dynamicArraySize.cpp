//check week01-practice01 (practice02.cpp) for better understanding

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int *b = new int[5];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];                    // coping
    }

    b[3] = 34;
    b[4] = 87;

    delete[] a;                                 // the previous array is deleted; but it's already copied

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}