#include<bits/stdc++.h>
using namespace std;

struct event
{
    int value,l,r,idx;
};

bool cmp(event l1,event l2)
{
    return l1.value > l2.value;
}

int helper(int idx,int* bit)
{
    int ans = 0;
    for(;idx>0;idx-=(idx&(-idx)))
    {
        ans+= bit[idx];
    }
    return ans;
}

void update(int idx,int* bit,int n)
{
    for(;idx<=n;idx+=(idx&(-idx)))
    {
        bit[idx]++;
    }
}
int main(){
    
    // write your code here
    int n;
    cin>>n;
    
    int* bit = new int[n+1]();
    vector<pair<int,int>>arr;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back({x,i});
    }
    
    sort(arr.begin(),arr.end());
    
    int q;
    cin>>q;
    
    event* que = new event[q];
    for(int i=0;i<q;i++)
    {
        cin>>que[i].l>>que[i].r>>que[i].value;
        que[i].idx = i;
    }
    
    sort(que,que+q,cmp);
    int* ans = new int[q]();
    
    for(int i=0;i<q;i++)
    {
        int j = arr.size()-1;
        
        while(j>=0)
        {
            if(arr[j].first > que[i].value)
            {
                update(arr[j].second,bit,n);
                arr.pop_back();                    
            }
            else
            {
                break;
            }
            j--;
        }
        int temp = helper(que[i].r,bit) - helper((que[i].l)-1,bit);
        ans[que[i].idx] = temp;
        
    }
    
    for(int i=0;i<q;i++)
    {
        cout<<ans[i]<<'\n';
    }
    
    delete[]bit;
    delete[]que;
    
    return 0;
}
