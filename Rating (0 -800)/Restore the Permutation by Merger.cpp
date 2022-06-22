#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  int x,k=0;
  unordered_map<int,int>m;
  for(int i=0;i<(n << 1);i++)
  {
    cin>>x;

    if(m[x] > 0)
    {
        m[x]++;
    }
    else
    {
        m[x]++;
        arr[k] = x;
        k++;
    }
  }

  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  delete[]arr;

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