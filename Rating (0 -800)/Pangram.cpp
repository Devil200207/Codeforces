#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  string s;
  cin>>s;

  if(n < 26)
  {
      cout<<"NO"<<'\n';
      return;
  }

  map<char,int>m;
  for(int i=0;i<n;i++)
  {
      if(isupper(s[i]))
      {
          m[s[i]+32]++;
      }
      else
      {
          m[s[i]]++;
      }
  }

  for(int i=97;i<=122;i++)
  {
      if(m[i] == 0)
      {
          cout<<"NO"<<'\n';
          return;
      }
  }
  cout<<"YES"<<'\n';

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