#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  vector<int>odd,even;
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      if(i%2 == 0)
      {
          even.push_back(x);
      }
      else
      {
          odd.push_back(x);
      }
  }

  bool f1=true,f2=true;

  for(int i=1;i<odd.size();i++)
  {
      if(odd[i]%2 != odd[i-1]%2)
      {
          f1 = false;
          break;
      }
  }

  for(int i=1;i<even.size();i++)
  {
      if(even[i]%2 != even[i-1]%2)
      {
          f2 = false;
          break;
      }
  }

  if(f1 && f2)
  {
      cout<<"YES"<<'\n';
  }
  else
  {
      cout<<"NO"<<'\n';
  }
 
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