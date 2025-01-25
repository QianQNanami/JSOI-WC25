#include<bits/stdc++.h>
using namespace std;
struct node{
	int q,ch;
};
vector<int>b[100005];
int vis[100005],sq[100005];
int i,j;
int t(int a){
	int zhi=sq[a];
	vis[a]=1;
	for(int p=0;p<b[a].size();p++){
		if(vis[b[a][p]]!=1&&b[a][p]!=i&&b[a][p]!=j){
			zhi+=t(b[a][p]);
		}
	}
	return zhi;
}
int n(int a){
	int zhi=sq[a];
	vis[a]=1;
	for(int p=0;p<b[a].size();p++){
		if(vis[b[a][p]]!=1){
			zhi+=n(b[a][p]);
		}
	}
	return zhi;
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int a;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		int c,d;
		scanf("%d%d",&c,&d);
		b[d].push_back(i);
		sq[i]=c;
	}
	int ans=0,u=n(0);
	for(i=1;i<=a;i++){
		for(j=i+1;j<=a;j++){
			memset(vis,0,sizeof(vis));
			int h=t(i);
			memset(vis,0,sizeof(vis));
			int d=t(j);
			int z=u-h-d;
			if(h==d&&d==z){
				ans++;
			}

		}
	}
	printf("%d",ans);
	return 0;
}
