#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  int min1=INT_MAX;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    min1 = min(arr[i],min1);
  }

  int*arr1 = new int[n];
  int min2=INT_MAX;
  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
    min2 = min(min2,arr1[i]);
  }

  int ans1=0,ans2=0,com=0;

  for(int i=0;i<n;i++)
  {
    if(arr[i] > min1)
    {
        ans1+= (arr[i]-min1);
    }
    if(arr1[i] > min2)
    {
        ans2+= (arr1[i]-min2);
    }
    if(arr[i] > min1 && arr1[i] > min2)
    {
        int dif1 = (arr[i]-min1);
        int dif2 = (arr1[i]-min2);
        com+= min(dif1,dif2);
    }
  }

  int ans = ans1 + ans2 - com;
  cout<<ans<<'\n';
  delete[]arr;
  delete[]arr1;

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