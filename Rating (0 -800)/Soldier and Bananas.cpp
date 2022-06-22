#include<bits/stdc++.h>
using namespace std;

int main()
{
    long k,n,w;
    cin>>k>>n>>w;

    long ans = 0;
    for(int i=1;i<=w;i++)
    {
        ans+= i*k;
    }  
    
    if((ans- n) <= 0)
    {
        cout<<0;
    }
    else
    {
        cout<<ans-n;
    }

    return 0;
}