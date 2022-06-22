#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  string a,b;
  cin>>a>>b;

  map<char,int>m;
  for(int i=0;i<b.length();i++)
  {
      m[b[i]]++;
  }

  int j = b.length() - 1;
  int n = a.length();
  for(int i=n-1;i>=0;i--)
  {
      if(a[i] == b[j])
      {
          m[a[i]]--;
          j--;
          continue;
      }
      if(m[a[i]])
      {
          cout<<"NO"<<'\n';
          return;
      }
  }
  if(j == -1)
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