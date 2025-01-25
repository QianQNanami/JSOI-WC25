#include <iostream>
#include <string.h>
using namespace std;

int n,m,k;
const int N=5e5+10;
int a[N];
bool vis[40];

int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=m;i++)
	{
		int op,p,v;
		cin>>op;
		if(op==1)
		{
			cin>>p>>v;
			a[p]=v;
		}
		else
		{
			int ans=1e9;
			for(int j=1;j+k-1<=n;j++)
			{
				for(int x=j+k-1;x<=n;x++)
				{
					memset(vis,0,sizeof(vis));
					bool fg=1;
					for(int y=j;y<=x;y++)
						vis[a[y]]=1;
					for(int y=1;y<=k;y++)
					{
						if(!vis[y])
						{
							fg=0;
							break;
						}
					}
					if(fg) ans=min(ans,x-j+1);
					if(ans==k) break;
				}
				if(ans==k) break;
			}
			if(ans==1e9) cout<<"-1\n";
			else cout<<ans<<endl;	
		}
	}
	return 0;
}
