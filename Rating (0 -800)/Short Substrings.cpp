#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
   string s;
   cin>>s;

    string ans = "";
      for(int i=0;i<s.length();i++)
      {
        if(i%2 == 0)
        {
            ans+=s[i];
        }
      }

      if(s.length()%2 == 0)
      ans+= s[s.length()-1];

      cout<<ans<<'\n';
 
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