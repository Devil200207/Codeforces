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

  for(int i=0;i<n-2;i++)
  {
    for(int j=i+1;j<n-1;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            int ans = arr[i] + arr[j] + arr[k];
            if(ans%10 == 3)
            {
                cout<<"YES"<<'\n';
                delete[]arr;
                return;
            }
        }
    }
  }

  cout<<"NO"<<'\n';
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