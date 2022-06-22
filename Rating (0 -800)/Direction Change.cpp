#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

  if(n > m)
  {
      swap(n,m);
  }
  if(n == 1 && m > 2)
  {
      cout<<-1<<'\n';
      return;
  }
  else if(n+1 >= m)
  {
      cout<<n+m-2<<'\n';
      return;
  }

  else
  {
      int ans = n+m-2;
      int ans1 = m-1-n;
      if(ans1%2 == 0)
      {
          ans+=ans1;
      }
      else
      {
          ans+=ans1+1;
      }
      cout<<ans<<'\n';
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