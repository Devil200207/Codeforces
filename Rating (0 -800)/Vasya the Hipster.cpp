#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

  int ans1 = min(n,m);
  int ans2 = max(n,m)-ans1;
  ans2/=2;

  cout<<ans1<<" "<<ans2;
  
 
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