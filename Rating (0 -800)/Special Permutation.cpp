#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n]();
  
  if(n%2 == 0)
  {
    int ans = n;
    for(int i=0;i<n;i+=2)
    {
        arr[i] = ans;
        ans-=2;
    }

    ans = n-1;
    for(int i=1;i<n;i+=2)
    {
        arr[i] = ans;
        ans-=2;
    }
  }

  else
  {
    int ans = n-1;
    for(int i=0;i<n;i+=2)
    {
        arr[i] = ans;
        ans-=2;
    }

    ans = n;
    for(int i=1;i<n;i+=2)
    {
        arr[i] = ans;
        ans-=2;
    }

    arr[n-1] = 1;

  }

  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<'\n';
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