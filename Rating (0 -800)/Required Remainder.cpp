#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int x,y,n;
  cin>>x>>y>>n;

  int cnt = n/x;
  int ans = x*cnt + y;

  while(ans > n)
  {
    ans-=x;
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