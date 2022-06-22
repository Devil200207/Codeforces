#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;
  map<int,int>m;
  int maxa=0;

  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      m[x]++;
      maxa = max(maxa,m[x]);
  }

  if(maxa == n)
  {
      cout<<0<<'\n';
  }
  else
  {
      int ans = 1;

      while(maxa <= n)
      {
          if(maxa + maxa >= n)
          {
              ans+=(n-maxa);
              break;
          }
          ans+=maxa;
          maxa+=maxa;
          ans++;
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