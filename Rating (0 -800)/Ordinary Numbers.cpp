#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int ans=0;
  for(int i=1;i<=9;i++)
  {
    int s = i;

    while(s <= n)
    {
        ans++;
        s = s*10 + i;
    }
  }

  cout<<ans<<'\n';
 
}
 
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 int t;
 cin>>t;
 
while(t--)
solve();
 
return 0;
}