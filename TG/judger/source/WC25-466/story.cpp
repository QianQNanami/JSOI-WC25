#include<bits/stdc++.h>
using namespace std;

int n,k,m;
int a[50009];
int f[100];
int num;

int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n>>k>>m;
	int op,p,w;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int ans;
	while(m--)
	{
		cin>>op;
		if(op==1)
		{
			cin>>p>>w;
			a[p]=w;
		}
		else 
		{
			memset(f,0,sizeof(f));
			num=0;ans=0x7fffffff;
			for(int i=1,j=1;i<=n;)
			{
				while(j<=n&&num<k)
				{
					if(!f[a[j]])
					{
						num++;
					}
					f[a[j]]++;
					j++;
				}
				if(num<k)break;
				ans=min(ans,j-i);
				
				f[a[i]]--;
				if(f[a[i]]==0)num--;
				i++;
			}
			
			if(ans==0x7fffffff)cout<<-1<<endl;
			else cout<<ans<<endl;
		}
	}
	
	return 0;
}
