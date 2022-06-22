#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int l=s.length();
    int ans=0;
    for(int i=1; i<l; i++)
    {
        if(s[i]!=s[i-1])
            ans++;
    }

    if(ans&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}


// #include<bits/stdc++.h>  // another approach
// #include<string>
// #include<set>
// using namespace std;

// int main()
// {
//     string s;
//     cin>>s;

//     set<char>s1;
//     for(int i=0;i<s.length();i++)
//     {
//         s1.insert(s[i]);
//     }    

//     if(s1.size()%2 == 0)
//     {
//         cout<<"CHAT WITH HER!";
//     }
//     else
//     {
//         cout<<"IGNORE HIM!";
//     }

//     cout<<'\n';


//     return 0;
// }