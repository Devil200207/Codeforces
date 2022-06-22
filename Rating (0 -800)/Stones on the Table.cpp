#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int ans = 0;

    for(int i=1;i<n;i++)
    {
        if(s[i] == s[i-1])
        {
            ans++;
        }
    }

    if(ans == n)
    {
        cout<<ans-1;
    }
    else
    {
        cout<<ans;
    }


    return 0;
}