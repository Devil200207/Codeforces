#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int a,b,n;
  cin>>a>>b>>n;

  if(n == 1)
  {
    cout<<"YES"<<'\n';
    return;
  }

  int ans = 1;
  while (a%2 == 0)
  {
    ans*= 2;
    a/=2;        
  }

  while (b%2 == 0)
  {
    ans*= 2;
    b/=2;        
  }

  if(n <= ans)
  {
    cout<<"YES"<<'\n';
  }
  else
  {
    cout<<"NO"<<'\n';
  }
  
 
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