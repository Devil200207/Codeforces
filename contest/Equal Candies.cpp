#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }

  int ans1 = *min_element(arr,arr+n);
  int ans=0;
  for(int i=0;i<n;i++)
  {
      if(arr[i] == ans1)
      {
          continue;
      }
      ans+=(arr[i]-ans1);
  }
  cout<<ans<<'\n';
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