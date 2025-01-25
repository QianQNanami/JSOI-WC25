#include <bits/stdc++.h>
using namespace std;
int a[50005], b[35], n, k, m;
int main(){
	scanf("%d%d%d", &n, &k, &m);
	for(int i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	int c, p, v;
	for(int i=1; i<=m; i++){
		scanf("%d", &c);
		if(c==1){
			scanf("%d%d", &p, &v);
			a[p]=v;
		}else{
			for(int j=1; j<=k; j++){
				b[j]=0;
			}
			b[a[1]]=1; int cnt=1, j=2, s=1, res=1e9+7;
			while(j<=n){
				while((j<=n)&&(cnt<k)){
					if((a[j]>=1)&&(a[j]<=k)){
						if(!b[a[j]]){cnt++;}
						b[a[j]]++;
					}
					j++;
				}
				while(cnt==k){
					b[a[s]]--;
					if(!b[a[s]]){
						break;
					}
					s++;
				}
				cnt--;
				if(cnt==k-1){res=min(res, j-s+1);}
			}
			if(res<1e9+7){
				printf("%d\n", res);
			}else{
				printf("-1\n");
			}
		}
	}
	return 0;
}

