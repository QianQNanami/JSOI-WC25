#include <bits/stdc++.h>
using namespace std;

int n,rt,s,c;
int data[100003],sum[100003];
int c1[100003],c2[100003];
int f[100003];
long long ans1,ans2;
vector<int> ch[100003];
vector<int> a1,a2;

void cal(int v)
{
	sum[v]=data[v];
	for(auto x:ch[v])
	{
		cal(x);
		sum[v]+=sum[x];
		c1[v]+=c1[x];
	}
	if(sum[v]==s/3)c1[v]++;
}

void cal2(int v)
{
	if(sum[v]==s/3)
	{
		c2[v]++;
	}
	for(auto x:ch[v])
	{
		c2[x]+=c2[v];
		cal2(x);
	} 
}

int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",data+i,f+i);
		s+=data[i];
		if(!f[i])rt=i;
		else ch[f[i]].push_back(i);
	}
	if(s%3)
	{
		puts("0");
		return 0;
	}
	cal(rt);
	cal2(rt);
	for(int i=1;i<=n;i++)
	{
		if(i==rt)continue;
		if(sum[i]==s/3)
		{
			ans1+=c1[rt]-c2[i]-c1[i]+1;
		}
		if(sum[i]==(s<<1)/3)
		{
			ans2+=c1[i]-(sum[i]==s/3);
		}
	}
	printf("%lld\n",(ans1>>1)+ans2);
	return 0;
} 
