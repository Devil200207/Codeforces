#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    reverse(s2.begin(),s2.end());
    
    if(s1.compare(s2) == 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}