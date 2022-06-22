#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int a,b,ans=0;
  cin>>a>>b;

  if(a == b)
  {
    cout<<0<<'\n';
    return;
  }
  else if(a > b)
  {
    ans++;
    int dif = a-b;

    if(dif%2 != 0)
    {
        ans++;
    }
  }
  else
  {
    ans++;
    int dif = b-a;

    if(dif%2 != 1)
    {
        ans++;
    }
  }

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