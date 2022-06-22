#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;
  int minidx=0;
  int maxidx=0;
  int minval=101;
  int maxval=0;

  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;

      if(x > maxval)
      {
          maxval = x;
          maxidx = i;
      }
      if(x <= minval)
      {
          minval = x;
          minidx = i;
      }
  }

  if(maxidx > minidx)
  {
      cout<<(maxidx - 1) + (n - minidx) -1;
  }
  else
  {
      cout<<(maxidx - 1) + (n - minidx);
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