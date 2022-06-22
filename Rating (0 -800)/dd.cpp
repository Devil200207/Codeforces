#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  int min1 = INT_MAX;
  int even=0,odd=0,sum=0;
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      if(arr[i]%2 == 0)
      {
          even++;
          int x = arr[i];
          int cnt=0;
          while(x%2 == 0)
          {
              cnt++;
              x>>=1;
          }
          min1 = min(cnt,min1);
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
      int ans = min1+n-1;
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