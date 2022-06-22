#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        if(s.length()<3)
        {
            cout<<0<<'\n';
            continue;
        }

        int a = count(s.begin(),s.end(),'1');
        int b = count(s.begin(),s.end(),'0');

        if(a == b)
        {
            cout<<min(a,b)-1<<'\n';
        }
        else if(a > b)
        {
            cout<<b<<'\n';
        }
        else
        {
            cout<<a<<'\n';
        }
    }
    return 0;
}