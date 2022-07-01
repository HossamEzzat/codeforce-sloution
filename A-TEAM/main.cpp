#include<iostream>
#include<string>  //// for string
using namespace std;
int main()
{

	int n;
	cin >> n;
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		int p, v, t;
		int cnt = 0;

		cin >> p;
		cin >> v;
		cin >> t;
		if (p == 1) cnt++;
		if (v == 1) cnt++;
		if (t == 1) cnt++;
		if (cnt >= 2)
			ans++;

	}
	cout << ans << endl;

}
