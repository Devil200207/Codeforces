#include<bits/stdc++.h>
#include<string>
using namespace std;

bool helper(string s,int n)
{
    int i=0,j=n-1;

    while(i<=j)
    {
        if(s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;
        
        if(helper(s,n) == true || k == 0)
        {
            cout<<1<<'\n';
        }
        else
        {
            cout<<2<<'\n';
        }
    }

    return 0;
}
