#include<bits/stdc++.h>
using namespace std;
struct node{
	int x,y,s;
};
queue<node>q;
char a;
int e[305][305]={};
int dx[4]={1,-1,0,0},dy[4]={0,0,-1,1};
int main()
{
	int m,n,x,y,x1,y1,h=0;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	{
		cin>>a;
		if(a=='Y')
		{
			x=i;
			y=j;
		}
		if(a=='T'){
			x1=i;
			y1=j;
		}
		if(a=='E') e[i][j]=0;
		if(a=='R') e[i][j]=2;
		if(a=='S') e[i][j]=2;
		if(a=='B') e[i][j]=1;
	}
	node f;
	f.x=x;
	f.y=y;
	f.s=0;
	q.push(f);
while(q.size()!=0)
{
int b;
int c;	
if(q.front().x==x1&&q.front().y==y1)
{
	h=1;
	cout<<q.front().s;
	break;
}
for(int k=0;k<=3;k++)
{
	b=q.front().x+dx[k];
	c=q.front().y+dy[k];
	if(b<=m&&c<=n&&b>=1&&c>=1&&(e[b][c]==0||e[b][c]==1))
	{
		f.x=b;
		f.y=c;
		if(e[b][c]==1) f.s=q.front().s+2;
		else f.s=q.front().s+1;
		q.push(f);
	}
	}
	q.pop();
}
if(h==0) cout<<-1;
return 0;
}
