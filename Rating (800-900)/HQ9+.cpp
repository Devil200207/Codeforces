#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  string s;
  cin>>s;

  bool ans = false;
  for(int i=0;i<s.length();i++)
  {
    if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
    {
        ans = true;
    }
    if((int)s[i] >= 126 && (int)s[i] < 33)
    {
        ans = false;
        return;
    }
  }
  
  if(ans)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
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