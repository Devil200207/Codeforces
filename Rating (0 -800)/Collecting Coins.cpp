#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
//  approach 1 (Not working) 

// void solve()
// {
//   int a,b,c,n;
//   cin>>a>>b>>c>>n;

//   int ans1=0;

//   if(a > b && a > c)
//   {
//      ans1 = (a-b) + (a-c);
//   }
//   else if(b > a && b > c)
//   {
//     ans1 = (b-a) + (b-c);
//   }
//   else
//   {
//     ans1 = (c-a) + (c-b);
//   }

//   if((n-ans1) >=0 && (n-ans1)%3 == 0)
//   {
//     cout<<"YES"<<'\n';
//   }
//   else
//   {
//     cout<<"NO"<<'\n';
//   } 
// }

// approach 2 (working approach)

void solve()
{
  int*arr = new int[3];
  int n;
  cin>>arr[0]>>arr[1]>>arr[2]>>n;

  sort(arr,arr+3);
  int diff = (arr[2] - arr[1]) + (arr[2] - arr[0]);

  if(n >= diff)
  {
    n-=diff;
    if(n%3 == 0)
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
    cout<<"NO"<<'\n';
  }

  delete[]arr;
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