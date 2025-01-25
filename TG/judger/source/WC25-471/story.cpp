#include<bits/stdc++.h>
using namespace std;
const int N=30005;
int a[N];
bool f[35];
int n,k,m,st,ed;
void Add(){
	memset(f,0,sizeof(f));
	st=ed=-1;
	int sum=k;
	for(int i=0;i<n;i++){
		if(i+k>=n)return;
		for(int j=0;j<k;j++){
			if(!f[a[i+j]]){
				f[a[i+j]]=true;
				sum--;
			}
		}
		if(sum==0){
			st=i,ed=i+k-1;
			return;
		}
		for(int j=k;i+j+1<n;j++){
			if(!f[a[i+j]]){
				f[a[i+j]]=true;
				sum--;
			}
			if(sum==0){
				if((j+1)<(ed-st))st=i,ed=i+j;
				break;
			}
		}
	}
}
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	scanf("%d%d%d",&n,&k,&m);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	Add();
	for(int i=0;i<m;i++){
		int t;
		scanf("%d",&t);
		if(t==1){
			int p,v;
			scanf("%d%d",&p,&v);
			a[p-1]=v;
			if(p-1>=st&&p-1<=ed)Add();
		}
		if(t==2){
			if(st==ed&&st==-1)printf("-1\n");
			else printf("%d\n",ed-st+1);
		}
	}
	return 0;
}

