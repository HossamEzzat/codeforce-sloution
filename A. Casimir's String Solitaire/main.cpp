#include <iostream>
using namespace std;
#include<bits/stdc++.h>
bool solve(string s)
{
    int size =s.length();
    int A = 0, B = 0, C = 0;
    for (int i=0;i<size;i++)
    {
        if (s[i] == 'A')
            A++;
        else if (s[i] == 'B')
            B++;
        else
            C++;
    }
    return A + C == B;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (solve(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
