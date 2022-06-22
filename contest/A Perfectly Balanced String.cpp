#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;

void solve()
{
    string s;
    cin >> s;

    map<char, int> m;
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
       if(m[s[i]] > 0)
       {
           count++;
       }
       m[s[i]]++;
    }

    if(count == 0)
    {
         cout << "YES" << '\n';
         return;
    }
    if (m[s[0]] == s.length())
    {
        cout << "YES" << '\n';
    }
    else
    {
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                cout << "NO" << '\n';
                return;
            }
        }

        int ans = m.size();
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if ((ans - i->second) > 1)
            {
                cout << "NO" << '\n';
                return;
            }
        }

        cout << "YES" << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}