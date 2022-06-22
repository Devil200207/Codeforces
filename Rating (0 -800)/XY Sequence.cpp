#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,b,x,y;
  cin>>n>>b>>x>>y;

  int* arr = new int[n+1]();
  for(int i=1;i<=n;i++)
  {
      if(arr[i-1]+x <= b)
      {
          arr[i] = arr[i-1] + x;
      }
      else
      {
          arr[i] = arr[i-1] - y;
      }
  }
  int sum=0;
  for(int i=0;i<=n;i++)
  {
      sum+=arr[i];
  }
  cout<<sum<<'\n';
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