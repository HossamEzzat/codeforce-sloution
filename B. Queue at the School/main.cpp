#include <iostream>

using namespace std;
char arr[55];
int main()
{
    int n,t;
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<t;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[j]=='B'&&arr[j+1]=='G')
            {
                arr[j++]='G';
                arr[j]='B';
            }

        }
    }
    for (int i = 0; i < n; i++)
    {

        cout<<arr[i];
    }
    return 0;
}
