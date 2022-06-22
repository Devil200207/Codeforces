#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int a=0,b=0;
    for(int i=0;i<s.length();i++)
    {
        int c = s[i];
        if(c >= 65 && c <= 90)
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    if(a == b || a < b)
    {
        for(int i=0;i<s.length();i++)
        {
            cout<<(char)tolower(s[i]);
        }
        cout<<'\n';
    }
    else
    {
        for(int i=0;i<s.length();i++)
        {
            cout<<(char)toupper(s[i]);
        }
        cout<<'\n';
    }

    return 0;
}