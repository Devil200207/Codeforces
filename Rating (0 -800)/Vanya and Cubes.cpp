#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int ans = 0;
  int cnt = 1,i=2;

  while(n > 0 && n >= cnt)
  {
    ans++;
    n-=cnt;
    cnt+=i;
    i++;
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