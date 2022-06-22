#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;
  int sum=0;
  int*arr = new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    sum+=arr[i];
  }

  sort(arr,arr+n);
  int sum1=0,ans=0;

  for(int i=n-1;i>=0;i--)
  {
    sum1+=arr[i];
    ans++;
    sum-=arr[i];
    if(sum1 > sum)
    {
        break;
    }
  }

  cout<<ans;
  delete[]arr;
 
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