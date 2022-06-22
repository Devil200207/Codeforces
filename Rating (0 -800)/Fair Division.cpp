#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

//   int*arr = new int[n];
  int one=0,two=0;
  for(int i=0;i<n;i++)
  {
    int arr;
    cin>>arr;
    if(arr == 1)
    {
        one++;
    }
    else
    {
        two++;
    }
  }

  if(n%2 == 0)
  {
    if(one%2 == 0 && two%2 == 0)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
  }
  else
  {
    if(one > 0 && one%2 == 0)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
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