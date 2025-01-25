#include<bits/stdc++.h>
using namespace std;

float halfn;
int n,k[50005],ans=0;

int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&k[i]);
	}
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(k[i]<k[j])
				swap(k[i],k[j]);
		}
	}
		
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(k[j]<=k[i]/2){
				if(k[j]==-1) continue;
				ans++;
				k[i]=-1;
				k[j]=-1;
			}
		}
		if(k[i]==-1) continue;
	}
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
