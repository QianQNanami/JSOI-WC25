#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,v[100005],fa[100005],f[100005],m,son[100005],ans,sum;
bool pd[100005],vis[100005];
queue<int>q;


int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>fa[i];
		if(fa[i]==0)m=i;
		pd[fa[i]]=1;
		f[i]=v[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(pd[i]==0)q.push(i);
		//cout<<pd[i]<<endl;
	}
	while(!q.empty())
	{
		int k=q.front();q.pop();
		//cout<<k;
		while(fa[k]!=0){
			f[fa[k]]+=f[k];
			//cout<<f[k]<<endl;
			k=fa[k];
			
		}
	}
	if(f[m]%3!=0){cout<<0;return 0;}
	m=f[m]/3;
	//cout<<m<<endl;
	for(int i=1;i<=n;i++)
	{
		if(!pd[i]){
			q.push(i);
			vis[i]=1;
		}
	}
	while(!q.empty())
	{
		int j=q.front();q.pop();
		if(vis[fa[j]]!=1&&fa[j]!=0)q.push(fa[j]);
		vis[fa[j]]=1;
		//cout<<j<<" "<<f[j]<<endl;
		if(f[j]==m&&fa[j]!=0){
			//cout<<-1<<endl;
			int k=fa[j];
			ans+=sum-son[j];
			sum++;
			while(fa[k]!=0){
				if(f[k]-f[j]==m){
					ans++;
				}
				son[k]++;
				k=fa[k];
			}
		}
	}
	cout<<ans;
	
	
}
