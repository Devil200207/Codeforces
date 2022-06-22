#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

  if(n == 1)
  {
    cout<<0<<'\n';
    return;
  }

  if(n == 2)
  {
    cout<<m<<'\n';
  }
  else
  {
    cout<<(m << 1 )<<'\n';
  }
 
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