/**/
#include <stdio.h>
#include <string.h>

const int N=500008;

int n,m,k;
int a[N]={};

typedef int status;

int solve() {
	int ret=-1;
	for(int i=0;i<=n;i++) { 
		status s=0;
		for(int j=i+1;j<=n;j++) {
			int x=a[j];
			s |= 1<<x-1;
			if(s+1 == (1<<k)) {
				if(j-i < ret || ret==-1) ret=j-i;
				break;
			}
		}
	}
	return ret;
}

int main() {
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	scanf("%d%d%d",&n,&k,&m);
	for(int i=1;i<=n;i++) scanf("%d",a+i);
	while(m--) {
		int opt,p,v;
		scanf("%d",&opt);
		if(opt == 1) {
			scanf("%d%d",&p,&v);
			a[p]=v;
			continue;
		}
		printf("%d\n",solve());
	}
	return 0;
}

