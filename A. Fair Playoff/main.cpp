#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <memory.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int a[4];
        int b[2];
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        b[0] = max(a[0], a[1]);
        b[1] = max(a[2], a[3]);
        sort(a, a + 4);
        sort(b, b + 2);
        if (a[3] == b[1] && a[2] == b[0])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
   }
}
