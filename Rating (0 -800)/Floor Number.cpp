#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,x;
  cin>>n>>x;

  if(n == 1 || n == 2)
  {
    cout<<1<<'\n';
    return;
  }
 
  int ans=1,c=2;
  while(c < n)
  {
    c+=x;
    ans++;
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