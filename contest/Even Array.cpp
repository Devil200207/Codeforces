#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int *arr = new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  int even=0,odd=0;
  for(int i=0;i<n;i++)
  {
    if(i%2 != arr[i]%2)
    {
        if(arr[i]%2 == 1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
  }

  if(even != odd)
  {
    cout<<-1<<'\n';
  }
  else
  {
    cout<<even<<'\n';
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