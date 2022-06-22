#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int ans1 = 1 << n;
  int ans2 = 0;

  for(int i=1;i<n/2;i++)
  {
    ans1+= (1 << i);
  }
  for(int i=n/2;i<n;i++)
  {
    ans2+= (1 << i);
  }

  cout<<ans1-ans2<<'\n';
 
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