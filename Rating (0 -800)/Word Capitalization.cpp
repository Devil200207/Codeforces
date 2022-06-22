#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    if((int)s[0] > 90)
    {
        s[0] = (char)((int)s[0] - 32);
        cout<<s;
    }
    else
    {
        cout<<s;
    }
    
    return 0;
}