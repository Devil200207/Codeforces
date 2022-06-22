#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  string a,b,c,s;
  cin>>a>>b>>c;

  s = a+b;

  sort(s.begin(),s.end());
  sort(c.begin(),c.end());

  if(s == c)
  {
      cout<<"YES";
  }
  else
  {
      cout<<"NO";
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