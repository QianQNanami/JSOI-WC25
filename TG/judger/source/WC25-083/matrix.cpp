#include<bits/stdc++.h>
using namespace std;
#define itn int 
#define itnn int
int x[405][405][3],z[405][405];//x[][][0] 以...为右下角 1左下角 
inline int read(){
	int a=0,s=1;
	char d=getchar();
	while(d<'0'||d>'9'){
		if(d=='-') s=-1;
		d=getchar();
	} 
	while(d>='0'&&d<='9'){
		a=a*10+d-'0';
		d=getchar();
	}
	return a*s;
}

int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int a=read(),s=INT_MIN,d;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			z[i][j]=read();
			x[i][j][0]=z[i][j]+x[i-1][j-1][0];
			x[i][j][1]=z[i][j]+x[i-1][j+1][1];
		}
	}
	for(int i=1;i<=a-1;i++){
		for(int j=1;j<=a-1;j++){
			for(itn k=2;k<=min(a+1-i,a+1-j);k++){
				d=(x[i+k-1][j+k-1][0]-x[i-1][j-1][0])-(x[i+k-1][j][1]-x[i-1][j+k][1]);
				x[i][j][2]=max(x[i][j][2],d);
			}
			s=max(s,x[i][j][2]);
		}
	}
	cout<<s;
	return 0;
}
//freopen注释记得删 
/*
	3min	kun le(doge
	63min   T2 is easier than T1	T2  maybe 80-100pts
	112min	T1 bao li finished 		T1  maybe 50-70pts
	
*/
