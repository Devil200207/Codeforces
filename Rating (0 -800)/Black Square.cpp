#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;

  string s;
  cin>>s;

  int ans = 0;
  for(int i=0;i<s.length();i++)
  {
    if(s[i] == '1')
    {
        ans+=a;
    }
    else if(s[i] == '2')
    {
        ans+=b;
    }
    else if(s[i] == '3')
    {
        ans+=c;
    }
    else
    {
        ans+=d;
    }
  }

  cout<<ans;
 
}
 
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
//  int t;
//  cin>>t;
 
//while(t--)
solve();
 
return 0;
}