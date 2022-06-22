#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

  if(n == m)
  {
    cout<<0<<'\n';
    return;
  }

  if(m > n)
  {
    swap(m,n);
  }

  int ans = 0;
  int sub = n-m;
  ans = sub/10;
  
  if(sub%10 > 0)
  {
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