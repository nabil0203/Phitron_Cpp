/*

At first in the main function take an integer N as input. Then make a function named get_array() which will receive that N as a parameter. Then inside the get_array() function create an integer array of size N. Then the values of that array will be taken as input. After that return that array from that function and receive it in the main function and print the values of the array there.



Sample Input 1:-
5
1 2 3 4 5
Sample Output 1:-
1 2 3 4 5

Sample Input 2:-
7
5 1 2 4 6 9 3
Sample Output 2:-
5 1 2 4 6 9 3

*/




#include <bits/stdc++.h>
using namespace std;

int *get_array(int a)
{
    int *x = new int[a];                        // static array can't be returned from different function; so dynamic array used

    for (int i = 0; i < a; i++)
    {
        cin >> x[i];
    }

    return x;
}

int main()
{

    int n;
    cin >> n;

    int *p = get_array(n);

    for (int i = 0; i < n; i++)
    {
        cout << p[i]<< " ";
    }

    return 0;
}