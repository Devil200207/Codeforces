#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  n*=2;

  vector<string> v(n+1);
  for(int i=0;i<=n;i++)
  {
     cin>>v[i];
  }

  map<char,int> freq;
  for(int i=0;i<=n;i++)
  {
      for(char j='a';j<='z';j++)
      {
          freq[j]+= count(v[i].begin(),v[i].end(),j);
      }
  }

 for(char j='a';j<='z';j++)
    {
       if(freq[j] & 1)
        {
            cout<<j<<'\n';
        }
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