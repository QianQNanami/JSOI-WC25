#include <bits/stdc++.h>
using namespace std;
int n,a[405][405],sum1[405][405];
int cul(int Rx,int Ry,int s){
	int x=0,y=0;
	for(int i=0;i<s;i++){
		x+=a[Rx+i][Ry+i];
		y+=a[Rx+i][Ry+s-i-1];
	}
	return x-y;
}
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=n-1;i>=1;i--){  //(1,i)
		for(int j=2;j<=(n-i+1);j++){
			sum1[]
		}
	}
	return 0;
}
