#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  int even=0,odd=0,sum=0;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      if(arr[i]%2 == 0)
      {
          even++;
      }
      else
      {
          odd++;
      }
      sum+=arr[i];
  }

  if(odd == n)
  {
      cout<<0<<'\n';
      return;
  }

  else if(even == n)
  {
      int ans = n-1;
      while(sum%2 != 0 && sum > 0)
      {
          ans++;
          sum/=2;
      }
      cout<<ans<<'\n';
      return;
  }
  else
  {
      cout<<even<<'\n';
      return;
  }
delete[]arr;

 
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