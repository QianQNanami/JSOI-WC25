#include <bits/stdc++.h>
using namespace std;
int n,num[5005],k,m,tong[35],cnt[5005],maxx=1e9;
int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin >> n >> k >> m;
	for(int i=1;i<=n;i++)
		cin >> num[i];
	for(int i=1;i<=m;i++)
	{
		int op;
		cin >> op;
		if(op==1)
		{
			int p,v;
			cin >> p >> v;
			num[p]=v;
		}
		else
		{
			maxx=-1e9;
			bool flag1=false;
			for(int w=1;w<=n;w++)
			{
				bool flag2=false;
				for(int j=1;j<=n;j++)
				{
					
					for(int o=j;o<=j+w-1;o++)tong[num[o]]++;
					bool flag=true;
					for(int o=1;o<=k;o++)
					{
						if(!tong[o]){
							flag=false;
							break;
						}
							 
					}
					if(flag){
						cout << maxx <<endl;
						flag1=true;
						flag2=true; 
					}
					if(flag2)break;
				}
				if(flag1)break;
			}
			if(!flag1)cout << -1 <<endl;
		}
	}
	return 0;
}

