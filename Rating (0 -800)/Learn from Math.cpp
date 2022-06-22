#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  if(n%2 == 0)
  {
    cout<<n-4<<" "<<4;
  }
  else
  {
    cout<<n-9<<" "<<9;
  }
  cout<<'\n';
 
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