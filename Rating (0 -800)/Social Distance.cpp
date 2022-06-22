#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    if(n>m)
    {
        cout<<"NO"<<'\n';
        return;
    }

    sort(v.begin(),v.end(),greater<int>());

    v[0] = v[0] << 1;
    int sum = 0;
    for(int i=0;i<n-1;i++)
    {
        sum+=v[i]+1;
    }

    sum+=1;
    if(sum>m)
    {
        cout<<"NO"<<'\n';
    }
    else
    {
        cout<<"YES"<<'\n';
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