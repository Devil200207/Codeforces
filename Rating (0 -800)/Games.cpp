#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  pair<int,int>* arr = new pair<int,int>[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i].first>>arr[i].second;
  }

  int ans=0;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(arr[i].second == arr[j].first)
          {
              ans++;
          }
      }
  }

  delete[]arr;
  cout<<ans<<'\n';
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