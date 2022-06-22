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

  int ans = 0;
  for(int i=1;i<n-1;i++)
  {
    if(arr[i] != arr[i+1] && arr[i] != arr[i-1])
    {
        cout<<i+1<<'\n';
        delete[]arr;
        return;
    }
  }

  if(arr[0] != arr[1])
  {
    cout<<1<<'\n';
  }
  else
  {
    cout<<n<<'\n';
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