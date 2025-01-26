#include <bits/stdc++.h>
using namespace std;
int a[500+10][500+10];
bool b[500+10][500+10];
int o[500+10][500+10];
vector<int> v;
queue<int> q;
int n,m,p=0,minans=0;
int d[4+1][2+1]={{0,1},{1,0},{0,-1},{-1,0}};
void work(int xx,int yy)
{
	q.push(xx);
	q.push(yy);
	while (!q.empty() )
	{
		int ans=0;
		int x=q.top();
		q.pop();
		int y=q.top();
		q.pop();	
		for (int k=0;k<4;k++)
		{
			int xxx=x+d[i][0];
			int yyy=y+d[i][1];
			q.push(xxx);
			q.push(yyy);
			if (b[h][z]==false)
			{
				o[h][z]=min(abs(a[x][y]-a[h][z]),o[h][z]);
				ans=min(ans,o[h][z]);
			}
		}
		ans=max(ans,abs(a[xx][yy]-a[xxx][yyy]) );
		work(xxx,yyy,ans);
	}
	return; 
}
void WC()
{
	for (int i=0;i<n;i++)
	{
		for (int k=0;k<m;k++)
		{
			cin>>a[i][k];
		}
	}
}
void NB()
{
	int w;
	for (int i=0;i<n;i++)
	{
		for (int k=0;k<m;k++)
		{
			cin>>w;
			if (w==1)
			{
				v.push_back(i);
				v.push_back(k);
				p++;
			}
		}
	}
}
int main()
{
	cin>>n>>m;
	WC();
	NB();
	for (int i=0;i<2*p;i+=2)
	{
		memset(o,1,o.size(););
		b[v[i]][v[i+1]]=true;
		work(v[i],v[i+1]);
		b[v[i]][v[i+1]]=false;
	}
	cout<<minans<<endl;
	return 0;
}/*
3 5
20 21 18 99 5
19 22 20 16 26
18 17 40 60 80
1 0 0 0 1
0 0 0 0 0
0 0 0 0 1*/

