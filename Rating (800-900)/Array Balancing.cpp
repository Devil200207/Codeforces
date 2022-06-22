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

  for(int i=0;i<n;i++)
  {
      if(arr1[i] > arr2[i])
      {
          swap(arr1[i],arr2[i]);
      }
  }

  int ans=0;
  for(int i=0;i<n-1;i++)
  {
      ans+= abs(arr1[i] - arr1[i+1]) + abs(arr2[i] - arr2[i+1]);
  }

  cout<<ans<<'\n';
  delete[]arr1;
  delete[]arr2;
 
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