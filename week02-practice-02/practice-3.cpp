/*

Take a sentence S as input and then take another string word X as input. Then count how many times the word X appeared in the sentence. The words in the sentence are separated by spaces.

Sample Input:
Sanju Samson shamanta samson jessica Bhatta Asif John takla john abraham john baby Shark tank
john

Sample Output:
2


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, x;
    getline(cin, s);
    cin >> x;

    stringstream ss(s);
    string word;

    int count = 0;
    
    while (ss >> word)
    {
        if (word == x)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}