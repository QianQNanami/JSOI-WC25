#include<bits/stdc++.h>
using namespace std;

int n,maxn=-1,z,y,p,s,h;
int m[401][401];

int matrix(int c){
		z+=m[c][c];
		if(c!=n)
			y+=m[n-c+2][n+c-3];
		if(c==n)
			y+=m[n][1];
		p=z-y;
}
int matrix2(int c){
	h+=m[c][c];
	s+=m[n+c-2][n-c+1];
	p=h-s;
}

int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			scanf("%d",&m[i][j]);

	if(n==2)
		maxn=m[1][1]+m[2][2]-m[2][1]-m[1][2];	
	else{
		z=m[1][1];
		y=m[1][2];
	
		for(int i=2;i<=n;i++){
			matrix(i);
			if(p>=maxn)
				maxn=p;
		}
	
		h=m[n][n];
		s=m[n-1][n];
	
		for(int i=n-1;i>0;i--){
			matrix2(i);
			if(p>=maxn)
				maxn=p;
		}
	}
	
	printf("%d",maxn);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
