#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  if(n <= 1399)
  {
      cout<<"Division 4";
  }
  else if(n >= 1400 && n <= 1599)
  {
      cout<<"Division 3";
  }
  else if(n >= 1600 && n <= 1899)
  {
      cout<<"Division 2";
  }
  else
  {
      cout<<"Division 1";
  }
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