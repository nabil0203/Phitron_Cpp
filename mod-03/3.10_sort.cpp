#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }



    sort(A, A + n);                               // full array sort in asc order

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;





    sort(A, A + 5, greater<int>());                 // full array sort in desc order

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}