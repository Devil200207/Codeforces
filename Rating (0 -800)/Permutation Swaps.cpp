#include<bits/stdc++.h>
using namespace std;
 
 void bfs(vector<int>* edges,int start,bool* visited,unordered_set<int>* comp)
 {
     if(visited[start] == true)
     {
         return;
     }
     visited[start] = true;
     comp->insert(start);

     for(vector<int>:: iterator it = edges[start].begin();it != edges[start].end();it++)
     {
         if(!visited[*it])
         {
             bfs(edges,*it,visited,comp);
         }
     }
 }

 unordered_set<unordered_set<int>*>* helper(vector<int>* edges,int n)
 {
     bool* visited = new bool[n];
     for(int i=0;i<n;i++)
     {
         visited[i] = false;
     }

     unordered_set<unordered_set<int>*>* output = new unordered_set<unordered_set<int>*>();

     for(int i=0;i<n;i++)
     {
         if(!visited[i])
         {
             unordered_set<int>* comp = new unordered_set<int>();
             bfs(edges,i,visited,comp);
             output->insert(comp);
             delete[]comp;
         }
     }
     delete[]visited;

     return output;
 }

void solve()
{
  int n,m;
  cin>>n>>m;

  int* p = new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>p[i];
  }

  int* q = new int[n];
  for(int i=0;i<n;i++)
  {
      cin>>q[i];
  }

  vector<int>* edges  = new vector<int>[n];
  for(int i=0;i<m;i++)
  {
      int a,b;
      cin>>a>>b;

      edges[a-1].push_back(b-1);
      edges[b-1].push_back(a-1);
  }

  unordered_set<unordered_set<int>*>* components = helper(edges,n);

  unordered_set<unordered_set<int>*> :: iterator it = components->begin();
  bool ans = true;

  while(it != components->end())
  {
      unordered_set<int>* compon = *it;

      unordered_set<int> :: iterator it2 = compon->begin();
      unordered_set<int>pset;
      unordered_set<int>qset;

      while(it2 != compon->end())
      {
          pset.insert(p[*it2]);
          qset.insert(q[*it2]);
          it2++;
      }

      if(pset != qset)
      {
          ans = false;
          break;
      }
      it++;
      delete[]compon;
  }

  delete[]components;
  delete[]edges;
  delete[]p;
  delete[]q;


  if(ans)
  {
      cout<<"YES"<<'\n';
  }
  else
  {
      cout<<"NO"<<'\n';
  }
}
 
int main()
{
 int t;
 cin>>t;
 
while(t--)
solve();
 
return 0;
}