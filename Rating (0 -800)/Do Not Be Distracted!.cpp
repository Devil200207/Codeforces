#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  string s;
  cin>>s;

  map<char,int>m;
  m[s[0]]++;
  for(int i=1;i<s.length();i++)
  {
    if(s[i] != s[i-1])
    {
        if(m[s[i]] > 0)
        {
            cout<<"NO"<<'\n';
            return;
        }
    }
    m[s[i]]++;
  }

  cout<<"YES"<<'\n';
 
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