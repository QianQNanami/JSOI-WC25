#include<bits/stdc++.h>
using namespace std;

int n,k,m,p,v,opt;
int a[421421];
int d[421421],front=1,rear=0,s=0;
int c[421421];
bool flag;
int main(){
	//freopen("story.in","r",stdin);
	//freopen("story.out","w",stdout); 
	scanf("%d%d%d",&n,&k,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=1;i<=m;i++){
		scanf("%d",&opt);
		if(opt==1){
			scanf("%d%d",&p,&v);
			a[p]=v;
		}

		else{
			flag=false;
			for(int j=1;j<=n;j++){
				front=1,rear=0,s=0;
				for(int u=1;u+j-1<=n;u++){
					d[++rear]=a[u];
					c[a[u]]++;
					if(rear-front==j){
						for(int x=1;x<=k;x++){
							if(c[x]) s++;
						}
						cout<<s<<endl;
						if(s==j){
							printf("%d\n",j);
							flag=true;
						} 
						else{
							memset(c,0,sizeof(c));
							front++;
							s=0;
						}
					}
					if(flag) break;
				}
				if(flag) break;
			}
			if(!flag) printf("-1\n");
		}
	}
	return 0;
}
