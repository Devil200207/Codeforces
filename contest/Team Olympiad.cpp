#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  vector<int>math,cp,phe;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    if(arr[i] == 1)
    {
        cp.push_back(i+1);
    }
    else if(arr[i] == 2)
    {
        math.push_back(i+1);
    }
    else
    {
        phe.push_back(i+1);
    }
  }

  int ans = min(cp.size(),min(math.size(),phe.size()));

  cout<<ans<<'\n';
  if(ans != 0)
  {
    for(int i=0;i<ans;i++)
    {
        cout<<cp[i]<<" "<<math[i]<<" "<<phe[i]<<'\n';
    }
  }
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