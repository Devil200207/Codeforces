#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  string s;
  cin>>s;

  int n = s.length();
  for(int i=0;i<n;i++)
  {
    if(s[i] == '.')
    {
        cout<<0;
    }

    else if(s[i] == '-' && s[i+1] == '.')
    {
        cout<<1;
        i++;
    }
    else
    {
        cout<<2;
        i++;
    }
  }
 
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