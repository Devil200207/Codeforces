#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,m;
  cin>>n>>m;

  int ans = 0;
  char x;;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        cin>>x;
        if(x == 'W' || x == 'B' || x == 'G')
        {
            ans++;
        }
    }
  }

  if(ans == (n*m))
  {
    cout<<"#Black&White";
  }
  else
  {
    cout<<"#Color";
  }
 
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