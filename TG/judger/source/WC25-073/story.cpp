#include<bits/stdc++.h>
using namespace std;

const int N=50009;
int n,k,m;
int x,p,v;
int a[N];
bool h[N];
int len,num;

int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	scanf("%d %d %d",&n,&k,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	while(m--)
	{
		scanf("%d",&x);
		if(x==1)
		{
			scanf("%d %d",&p,&v);
			a[p]=v;
		}
		else
		{
			memset(h,0,sizeof(0));
			num=0;
			len=0;
			for(int i=1;i<=n;i++)
			{
				if(a[i]<=k)
				{
					if(h[a[i]])
					{
						len++;
					}
					else 
					{
						h[a[i]]=1;
						len++;
						num++;
					}
				}
				if(num==k)
				{
					printf("%d\n",len);
					break;
				}
			}
			if(num!=k) printf("-1\n");
		}
	}
	fclose(stdin);
    fclose(stdout);
	return 0;
}

