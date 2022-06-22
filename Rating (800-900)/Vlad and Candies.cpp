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

  if(n == 1)
  {
      if(arr[0] == 1)
      {
          cout<<"YES"<<'\n';
      }
      else
      {
          cout<<"NO"<<'\n';
      }
      return;
  }

  sort(arr,arr+n);
  int ans = arr[n-1] - arr[n-2];
  if(ans == 1 || ans == 0)
  {
      cout<<"YES"<<'\n';
  }
  else
  {
      cout<<"NO"<<'\n';
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