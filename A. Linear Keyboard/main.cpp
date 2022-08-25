#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		int ans = 0;
		for (int i = 1; i < s2.size(); i++)
		{
			int k = s1.find(s2[i]) - s1.find(s2[i - 1]);
			ans += abs(k);
		}
		cout << ans << endl;
	}
	return 0;
}
