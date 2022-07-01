#include<iostream>
#include<string>
using namespace std;
int main()
{

	int n, k;
	int arr[105]{};
	cin >> n;
	cin >> k;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] >= arr[k] && arr[i] != 0)
		{
			cnt++;
		}
	}

	cout << cnt << endl;


}
