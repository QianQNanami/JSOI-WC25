#include<bits/stdc++.h>
using namespace std;
int a;
int b;
char c[301][301];
int d[301][301];
struct Stu
{
	int e;
	int f;
	int g;
	int h;
};
Stu k;
Stu l[100001];
int p;
int q;
int r;
int s;
int v[5][3]={{0,0,0},{0,1,0},{0,0,1},{0,-1,0},{0,0,-1}};
int y;
void m(int n,int o)
{
	int t;
	t=0;
	int u;
	u=1;
	int w;
	int x;
	while(t<=u)
	{
		t=t+1;
		k=l[t];
		for(int i=1;i<=4;i++)
		{
			w=k.e+v[i][1];
			x=k.f+v[i][2];
			if(w>=1&&w<=a&&x>=1&&x<=b&&d[w][x]==0&&c[w][x]!='R'&&c[w][x]!='S')
			{
				u=u+1;
				if(c[w][x]=='E')
				{
					d[w][x]=1;
					l[u].e=w;
					l[u].f=x;
					l[u].g=k.g+1;
					l[u].h=0;
				}
				if(c[w][x]=='B')
				{
					if(k.h==i)
					{
						d[w][x]=1;
						l[u].e=w;
						l[u].f=x;
						l[u].g=k.g+1;
						l[u].h=0;
					}
					else
					{
						l[u].e=k.e;
						l[u].f=k.f;
						l[u].g=k.g+1;
						l[u].h=i;
					}
				}
				if(c[w][x]=='T')
				{
					d[w][x]=1;
					l[u].e=w;
					l[u].f=x;
					l[u].g=k.g+1;
					l[u].h=0;
					y=l[u].g;
					return;
				}
			}
		}
	}
}
int main()
{
	cin>>a;
	cin>>b;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			cin>>c[i][j];
			if(c[i][j]=='Y')
			{
				p=i;
				q=j;
			}
			if(c[i][j]=='T')
			{
				r=i;
				s=j;
			}
		}
	}
	d[p][q]=1;
	l[1].e=p;
	l[1].f=q;
	l[1].g=0;
	l[1].h=0;
	y=-1;
	m(p,q);
	cout<<y;
	return 0;
}
