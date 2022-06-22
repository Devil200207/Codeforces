#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int a,b;
  cin>>a>>b;

  a = 23-a;
  b = 60-b;

  int ans = b + 60*a;
  cout<<ans<<'\n';


 
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