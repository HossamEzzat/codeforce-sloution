
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;

    int arr[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=n-1; j>=0; j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<endl;

}
