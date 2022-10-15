#include <bits/stdc++.h>


using namespace std;

struct Solution
{
    void run()
    {
        int n;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
            {
                cout << 'D';
            }
            else if (s[i] == 'D')
            {
                cout << 'U';
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
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
