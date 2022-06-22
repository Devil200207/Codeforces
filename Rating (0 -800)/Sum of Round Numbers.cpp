#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

      vector<int>arr;
      if(n >= 1000)
      {
          int rem = n%1000;
          int ans = n-rem;
          arr.push_back(ans);
          n%=1000;
      }
      if(n >= 100 && n < 1000)
      {
          int rem = n%100;
          int ans = n-rem;
          arr.push_back(ans);
          n%=100;
      }
      if(n >= 10 && n < 100)
      {
          int rem = n%10;
          int ans = n-rem;
          arr.push_back(ans);
          n%=10;
      }
      if(n <= 10 && n > 0)
      {
          arr.push_back(n);
      }

      cout<<arr.size()<<'\n';
      for(int i=0;i<arr.size();i++)
      {
          cout<<arr[i]<<" ";
      }
      cout<<'\n';
 
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