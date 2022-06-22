#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  if(n%2 != 0)
  {
      if(n == 1)
      {
          cout<<3<<'\n';
      }
      else
      {
          cout<<1<<'\n';
      }
      return;
  }
  else
  {
      if((n & (n-1)) == 0)
      {
          cout<<n+1<<'\n';
      }
      else
      {
          int ans = ~(n-1);
          ans = ans & n;
          cout<<ans<<'\n';
          
      }
      return;
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