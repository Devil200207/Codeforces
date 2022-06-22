#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int a = count(s.begin(),s.end(),'A');
    int b = count(s.begin(),s.end(),'D');

    if(a == b)
    {
        cout<<"Friendship";
    }
    else if(a > b)
    {
        cout<<"Anton";
    }
    else
    {
        cout<<"Danik";
    }

    return 0;
}