#include<bits/stdc++.h>
using namespace std;
int n,m,k,act,mn,mx,c;
int a[50004];
int s[32][50004];
int lowbit(int x){
	return (x&(-x));
}
int sum(int num,int p){
	int r=0;
	for (int i=p;i;i-=lowbit(i)){
		r+=s[num][i];
	}
	return r;
}
void add(int num,int p,int x){
	for (int i=p;i<=n;i+=lowbit(i)){
		s[num][i]+=x;
	}
	return;
}
int find(int num,int x){
	int L=1,R=n,mid;
	while (L <= R){
		mid=((L+R)>>1);
		if (sum(num,mid) <= x){
			L=mid+1;
		}
		else {
			R=mid-1;
		}
	}
	if (sum(num,R) != x){
		return -1;
	}
	return R;
}
int p;
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	scanf("%d %d %d",&n,&k,&m);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		add(a[i],i,1);
	}
	//for (int i=1;i<=n;i++){
	//	printf("%d%c",sum(1,i)," \n"[i == n]);
	//}
	for (int M=1;M<=m;M++){
		scanf("%d",&act);
		if (act == 2){
			mx=0;
			mn=n+1;
			for (int i=1;i<=k;i++){
				p=find(i,1);
				//printf("%d:%d\n",i,p);
				mn=min(mn,p);
				mx=max(mx,p);
				if (mn == -1){
					break;
				}
			}
			if (mn != -1){
				printf("%d",mx-mn+1);
			}
			else{
				printf("%d",mn);	
			}
			printf("\n");
		}
		else {
			scanf("%d %d",&p,&c);
			add(a[p],p,-1);
			add(c,p,-1);
			a[p]=c;
		}
	}
	return 0;
}
