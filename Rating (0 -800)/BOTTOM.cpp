#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
using namespace std;
 
void dfs(vector<int>*edges,unordered_set<int> visited,int start,stack<int> fv)
{
    visited.insert(start);

    for(int i=0;i<edges[start].size();i++)
    {
        int ans = edges[start][i];
        if(visited.count(ans) == 0)
        {
            dfs(edges,visited,ans,fv);
        }
    }
    fv.push(start);
} 

void dfs2(vector<int>* tedges,int start,unordered_set<int> visited,unordered_set<int>* comp)
{
    visited.insert(start);
    comp->insert(start);

    for(int i=0;i<tedges[start].size();i++)
    {
        int ans = tedges[start][i];
        if(visited.count(ans) == 0)
        {
            dfs2(tedges,ans,visited,comp);
        }
    }
}

unordered_set<unordered_set<int>*>* helper(vector<int>* edges,vector<int>* tedges,int n)
{
    unordered_set<int> visited;
    stack<int> fv;

    for(int i=0;i<n;i++)
    {
        if(visited.count(i) == 0)
        {
            dfs(edges,visited,i,fv);
        }
    }

    visited.clear();
    unordered_set<unordered_set<int>*>* output = new unordered_set<unordered_set<int>*>();

    while(fv.empty() != true)
    {
        int ans = fv.top();
        fv.pop();

        if(visited.count(ans) != 0)
        {
            continue;
        }

        unordered_set<int>* comp = new unordered_set<int>();
        dfs2(tedges,ans,visited,comp);
        output->insert(comp);
        delete[]comp;
    }
    return output;
} 
void solve()
{
  int n,m;
  cin>>n>>m;

  vector<int>* edges = new vector<int>[n];
  vector<int>* tedges = new vector<int>[n];

  for(int i=0;i<m;i++)
  {
      int x,y;
      cin>>x>>y;

      edges[x-1].push_back(y-1);
      tedges[y-1].push_back(x-1);
  }

  unordered_set<unordered_set<int>*>* components = helper(edges,tedges,n);

  auto it = components->begin();
  vector<int> ans;

  while(it != components->end())
  {
      int flag = 0;
      auto it2 = (*it)->begin();

      while(it2 != (*it)->end())
      {
          for(int i=0;i<edges[*it2].size();i++)
          {
              if((*it)->count(edges[*it2][i]) == 0)
              {
                  flag = 1;
                  break;
              }
          }
          if(flag == 1)
          {
              break;
          }
          it2++;
      }
      if(flag == 0)
      {
          it2 = (*it)->begin();
          while(it2 != (*it)->end())
          {
              ans.push_back(*it2+1);
              it2++;                            
          }
      }
      it++;
  }

  sort(ans.begin(),ans.end());
  for(int i=0;i<ans.size();i++)
  {
      cout<<ans.at(i)<<" ";
  }
  cout<<'\n';
  
 delete[]tedges;
 delete[]edges;

}
 
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 int t;
 cin>>t;
 
while(t--)
solve();
 
return 0;
}