#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n,k;
  cin>>n>>k;

  int*arr = new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  int*arr1 = new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
  }

  sort(arr,arr+n);
  sort(arr1,arr1+n,greater<int>());

  for(int i=0;i<k;i++)
  {
    for(int j=0;j<n;j++)
    {
        if(arr1[j] > arr[i])
        {
            swap(arr1[j],arr[i]);
            break;
        }
    }
  }

  int sum = 0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
  }

  cout<<sum<<'\n';
  delete[]arr;
  delete[]arr1;
 
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