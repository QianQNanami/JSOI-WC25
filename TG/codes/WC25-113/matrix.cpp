#include <stdio.h>

int n,area[808][808]={};
int ans=0;

int calc(int bx,int by,int side) {
	if(bx+side-1/*最大可达*/>n || by+side-1>n) return -2147483647;
	int a=0,b=0;
	for(int i=0;i<side;i++) {
		/* 左上到右下 */
		a += area[bx+i][by+i];
		b += area[bx+side-i-1][by+i];
	}
	return a-b;
}

int main() {
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			scanf("%d",&area[i][j]);
		}
	}
	for(int s=2;s<=n;s++) { /* 枚举边长 */
		for(int bx=1;bx<=n;bx++) {
			for(int by=1;by<=n;by++) {
				int tmp = calc(bx,by,s);
				if(tmp > ans) ans = tmp;
			}
		}
	}
	printf("%d",ans);
}

