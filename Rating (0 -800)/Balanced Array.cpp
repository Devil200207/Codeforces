#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int fp = n/2;
  if(fp%2 != 0)
  {
    cout<<"NO"<<'\n';
    return;
  }

  cout<<"YES"<<'\n';

  int ans = 2;
  int sum1=0,sum2=0;
  for(int i=0;i<n/2;i++)
  {
    sum1+=ans;
    cout<<ans<<" ";
    ans+=2;
  }

  ans = 1;
  for(int i=0;i<n/2 -1;i++)
  {
    sum2+=ans;
    cout<<ans<<" ";
    ans+=2;
  }
  cout<<sum1-sum2;

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