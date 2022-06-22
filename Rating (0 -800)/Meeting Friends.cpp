#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int a,b,c;
  cin>>a>>b>>c;

  int ans1 = abs(a-b);
  int ans2 = abs(b-c);
  int ans3 = abs(c-a);

  a = ans1+ans2;
  b = ans2+ans3;
  c = ans3+ans1;
  
  int ans = min(a,min(b,c));
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