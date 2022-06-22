#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int counta=0,countb=0;
  for(int i=0;i<n;i++)
  {
    int a,b;
    cin>>a>>b;

    if(a > b)
    {
        counta++;
    }
    else if(b > a)
    {
        countb++;
    }
  }

  if(counta == countb)
  {
    cout<<"Friendship is magic!^^";
  }
  else if(counta > countb)
  {
    cout<<"Mishka";
  }
  else
  {
    cout<<"Chris";
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