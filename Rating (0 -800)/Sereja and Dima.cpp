#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
  int n;
  cin>>n;

  int*arr = new int[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  int ans1 = 0,ans2=0;

  int i=0,j=n-1,k=1;

  while(n != 0)
  {
    if(arr[i] > arr[j])
    {
        if(k%2 == 0)
        {
            ans2+=arr[i];
        }
        else
        {
            ans1+=arr[i];
        }
        i++;
    }
    else
    {
        if(k%2 == 0)
        {
            ans2+=arr[j];
        }
        else
        {
            ans1+=arr[j];
        }
        j--;
    }
    k++;
    n--;
  }

  cout<<ans1 <<" "<<ans2;
  delete[]arr;
 
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