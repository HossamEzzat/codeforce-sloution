#include <bits/stdc++.h>
using namespace std;

struct Solution
{
    void run()
    {
        int p;
        cin >> p;
        if (p % 2 == 1)
        {
            cout << "2 " << p - 1 << endl;
        }
        else
        {
            cout << "2 " << p << endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);

    Solution solution = Solution();

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solution.run();
    }
    return 0;
}
