#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  string s;
  cin>>s;

  if(s.length() < 6)
  {
      cout<<"NO"<<'\n';
      return;
  }
  else
  {
      int ans = s[0]+s[1]+s[2];
      int n = s.length();
      int ans1 = s[n-1]+s[n-2]+s[n-3];

      if(ans == ans1)
      {
          cout<<"YES"<<'\n';
      }
      else
      {
          cout<<"NO"<<'\n';
      }
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