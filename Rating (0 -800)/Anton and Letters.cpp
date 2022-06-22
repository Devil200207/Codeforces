#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  string n;
 getline(cin,n);

  set<char>m;
  for(int i=0;i<n.length();i++)
  {
      if(n[i] >= 'a' && n[i] <= 'z')
      {
          m.insert(n[i]);
      }
  }

  cout<<m.size()<<'\n';
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