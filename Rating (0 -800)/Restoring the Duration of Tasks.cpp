#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr1 = new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr1[i];
  }

  int*arr2 = new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr2[i];
  }

  int*ans = new int[n]();
  ans[0] = arr2[0] - arr1[0];

  for(int i=1;i<n;i++)
  {
      if(arr2[i-1] >= arr1[i])
      {
          ans[i] = arr2[i] - arr2[i-1];
      }
      else
      {
          ans[i] = arr2[i] - arr1[i];
      }
  }

  for(int i=0;i<n;i++)
  {
      cout<<ans[i]<<" ";
  }
  cout<<'\n';

  delete[]arr1;
  delete[]arr2;
  delete[]ans;

 
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