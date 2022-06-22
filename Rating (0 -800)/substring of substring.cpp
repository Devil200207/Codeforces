#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  string n;
  cin>>n;

  int count,m=INT_MIN;
  for(int i=0;i<n.size();i++)
  {
      if(n[i] != n[0] && n[i] != n[n.size() -1])
      {
          count++;
      }
      else
      {
          count=0;
      }
      m = max(m,count);
  }
  if(m == 0)
  {
      cout<<"-1";
  }
  else
  {
      cout<<m;
  }
  cout<<'\n';
 
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