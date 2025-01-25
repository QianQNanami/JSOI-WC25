#include<bits/stdc++.h>
using namespace std;
int a[50010],h[40];
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	int n,k,m,e,p,v,an=0;
	scanf("%d%d%d",&n,&k,&m);
	for(int i=1;i<=n;++i){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;++i){
		scanf("%d",&e);
		if(e==1){
			scanf("%d%d",&p,&v);
			if(a[p]!=v)an=0;
			a[p]=v;
		}
		else{
			if(an){
				printf("%d\n",an);
				continue; 
			}
			int ans=50010,u=0;
			for(int j=1;j<=n-k+1;++j){
				u=0;
				memset(h,0,sizeof(h));
				for(int s=j;s<=n;++s){
					if(!h[a[s]]){
						u++;
						h[a[s]]=1;
					}
					if(u==k){
						ans=min(ans,s-j+1);
						break;
					}
				}
				if(u<k||ans==k)break;
			}
			if(ans==50010)an=-1;
			else an=ans;
			printf("%d\n",an);
		}
	}
	return 0;
}

