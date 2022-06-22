#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  map<int,int>m;
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      m[x]++;
  }

  int ans=-1;
  for( auto it = m.begin(); it != m.end(); ++it )
    {
      int key = it->first;
      if(m[key] > 2)
      {
          ans = key;
          break;          
      }
    }

    cout<<ans<<'\n';
 
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