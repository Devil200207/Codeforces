#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  string s;
  cin>>s;

  int idx = 0;
  char max1 = 'z';

  for(int i=0;i<s.length();i++)
  {
    if(s[i] < max1)
    {
        max1 = s[i];
        idx = i; 
    }
  }

  string ans;
  ans+=max1;

  for(int i=idx-1;i>=0;i--)
  {
    ans+=s[i];
  }
  for(int i=idx+1;i<s.length();i++)
  {
    ans+=s[i];
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