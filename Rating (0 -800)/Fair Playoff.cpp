#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;

  if(a > b && b > c && b > d)
  {
    cout<<"NO"<<'\n';
  }
  else if(b > a && a > c && a > d)
  {
    cout<<"NO"<<'\n';
  }
  else if(c > d && d > b && d > a)
  {
    cout<<"NO"<<'\n';
  }
  else if(d > c && c > a && c > b)
  {
    cout<<"NO"<<'\n';
  }
  else
  {
    cout<<"YES"<<'\n';
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