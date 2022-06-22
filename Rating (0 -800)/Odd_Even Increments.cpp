#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n+1];
  for(int i=1;i<=n;i++)
  {
      cin>>arr[i];
  }
  
 int oss = 0;
 int even = 0;
  for(int i=1;i<=n;i++)
  {
      if(i%2 == 0)
      {
          even+=arr[i];          
      }
      else
      {
          oss+=arr[i];
      }
  }

  if(oss%2 == 1 || even%2 == 0)
  {
      cout<<"YES"<<'\n';
  }
  else
  {
      cout<<"NO"<<'\n';
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