#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;

  int count = 0;
  if(b > a)
  {
    count++;
  }
  if(c>a)
  {
    count++;
  }
  if(d>a)
  {
    count++;
  }

  cout<<count<<'\n';
 
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