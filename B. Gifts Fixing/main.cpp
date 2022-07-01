#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cstring>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
using namespace std;
const int N = 150;
int main()
{
    int a[N], b[N];
    int t;
	cin >> t;
	while (t--)
	{
		int n, ma = 0x3f3f3f3f, mb = 0x3f3f3f3f;
		cin >> n;
		for (int i = 1; i <= n; i ++)
		{
			cin >> a[i];
			ma = min(ma, a[i]);
		}
		for (int i = 1; i <= n; i ++)
		{
			cin >> b[i];
			mb = min(mb, b[i]);
		}
		ll ans = 0;
		for (int i = 1; i <= n; i ++)
		{
			int x = a[i] - ma;
			int y = b[i] - mb;
			ans += max(x, y);
		}
		cout << ans << endl;
	}
    return 0;
}
