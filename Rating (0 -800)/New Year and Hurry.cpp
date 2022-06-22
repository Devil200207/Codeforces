#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;
  int count=0;
  int ans=m;

  for(int i=1;i<=n;i++)
  {
      ans+= 5*i;
      if(ans <= 240)
      {
          count++;
      }
      else
      {
          break;
      }
  }

  cout<<count;
 
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