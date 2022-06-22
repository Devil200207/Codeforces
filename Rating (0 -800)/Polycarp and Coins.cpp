#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int c1 = n/3,c2=n/3;

  if(n%3 == 1)
  {
    c1++;
  }
  else if(n%3 == 2)
  {
    c2++;
  }

  cout<<c1<<" "<<c2<<'\n';
 
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