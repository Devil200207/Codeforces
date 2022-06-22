#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;

int arr[1001]; 
void solve()
{
    int j = 1;
  for(int i=1;i<=1666;i++)
  {

    if(i%3 != 0 && i%10 != 3)
    {
        arr[j] = i;
        j+=1;
    }

  } 
}
 
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 int t;
 cin>>t;

 solve(); 
while(t--)
{
    int k;
    cin>>k;

    cout<<arr[k]<<'\n';
}

 
return 0;
}