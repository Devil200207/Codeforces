#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

//   if(n == 1)
//   {
//     cout<<"YES"<<'\n';
//     return;
//   }

  int*arr = new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  sort(arr,arr+n);  

  int diff = 0;
  for(int i=1;i<n;i++)
  {
    diff = arr[i] - arr[i-1];
    if(diff > 1)
    {
        cout<<"NO"<<'\n';
        delete[]arr;
        return;
    }
  }  

  cout<<"YES"<<'\n';

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