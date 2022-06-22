#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  string n,m;
  cin>>n,m;

  for(int i=0;i<=n.length()-m.length();i++)
  {
      bool ans = true;
      for(int j=0;j<m.length();j++)
      {
          if(n[i+j] != m[j])
          {
              ans = false;
              break;
          }
      }
      if(ans)
      {
          cout<<"YES"<<'\n';
          return;
      }
  }

  cout<<"NO"<<'\n';
 
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