#include<bits/stdc++.h>
using namespace std;
#define int long long
priority_queue<int,vector<int>,less<int> > q;
queue<int> todo;
int tot;
signed main()
{
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }
    //cout<<q.top()<<endl;
    while(!q.empty())
    {
        int now=q.top();
        q.pop();
        todo.push(now);
        while(2*q.top()<=todo.front())
        {
            //cout<<todo.front()<<endl;
            q.pop();
            todo.pop();
            tot++;
            if(q.empty() || todo.empty()) break;
        }
    }
    cout<<tot<<endl;
    return 0;
}
