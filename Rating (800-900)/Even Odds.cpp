#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;

// approach 1 (NOt working)
// void solve()
// {
//     int n, k;
//     cin >> n >> k;

//     if (n % 2 != 0)
//     {
//         if (k <= n / 2)
//         {
//             int ans = k - 1;
//             ans = (ans + k)%mod;
//             cout<<ans;
//         }
//         else
//         {
//             int ans = (n + 1) - k;
//             ans = (k - ans)%mod;
//             cout<<ans;
//         }
//     }
//     else
//     {
//         if (k <= n / 2)
//         {
//             int ans = k - 1;
//             ans = (ans + k)%mod;
//             cout<<ans;
//         }
//         else
//         {
//             int ans = n-k;
//             ans =  (k - ans)%mod;
//             cout<<ans;
//         }
//     }
// }

// approach 2 (working)

void solve()
{
    int n,k;
    cin>>n>>k;

    if(k <= (n+1)/2)
    {
        cout<<k*2 - 1;
    }
    else
    {
        cout<<(k - (n+1)/2)*2;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //  int t;
    //  cin>>t;

    // while(t--)
    solve();

    return 0;
}