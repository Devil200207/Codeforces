#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        char a = s[n-1];
        s.pop_back();

        if(s.length() > 1)
        {
        if(count(s.begin(),s.end(),a) > 0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
        }
        else
        {
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}