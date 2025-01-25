#include<bits/stdc++.h>
using namespace std;
int n,k,m,half[50005][2];
struct ls{
	int w,f,r;
}t[50005];
vector<int> v[50005];
int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;++i) 
	{
		cin>>t[i].w;
		half[t[i].w][0]++;
		v[t[i].w].push_back(i);
	}
	for(int i=1;i<=n;++i)
	{
		if(half[i]==0) continue;
		for(int j=0;j<v[i].size();++j)
		{
			if(j==0) 
			{
				t[v[i][j]].r=v[i][j+1];
				half[i][1]=v[i][j];
			}
			else if(j==v[i].size()-1) t[v[i][j]].f=v[i][j-1];
			else
			{
				t[v[i][j]].r=v[i][j+1];
				t[v[i][j]].f=v[i][j-1];
			}
		}
	}
	int x,p,v;
	for(int i=1;i<=m;++i)
	{
		cin>>x;
		if(x==1)
		{
			cin>>p>>v;
			half[t[p].w][0]--;
			if(half[t[p].w][1]==p) half[t[p].w][1]=t[p].r;
			t[t[p].r].f=t[p].f;
			t[t[p].f].r=t[p].r;
			if(half[v][0]==0)
			{
				half[v][0]++;
				half[v][1]=p;
				continue;	
			}
			int w;
			for(int i=half[v][1];t[i].r!=0;i=t[i].r)
			{
				w=i;
				if(p<i)
				{
					if(i==half[v][1])
					{
						half[v][1]=p;
						t[half[v][1]].f=p;
						t[p].r=half[v][1];
					}
					else
					{
						t[p].f=t[i].f;
						t[i].f=p;
						t[p].r=t[t[p].f].r;
						t[t[p].f].r=p;
						
					}
					continue;
				}
			}
			if(p<t[w].r)
			{
				int q=t[w].r;
				t[p].f=t[q].f;
				t[q].f=p;
				t[p].r=t[t[q].f].r;
				t[t[q].f].r=p;
			}
			else
			{
				int qq=t[w].r;
				t[qq].r=p;
				t[p].f=qq;
			}
		}
		else
		{
			int ls=-1;
			for(int i=1;i<=k;++i)
			{
				if(half[i][0]==0)
				{
					cout<<-1<<endl;
					continue;
				}
				else ls=max(ls,half[i][1]);	
			}
			cout<<ls<<endl;
		}
	}
	return 0;
}
/*
4 3 5
2 3 1 2
2
1 3 3
2
1 1 1
2

6 3 6
1 2 3 2 1 1
2
1 2 1
2
1 4 1
1 6 2
2
*/
