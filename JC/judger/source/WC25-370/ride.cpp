#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	char c[10010];
	int n,m,x[10010],y[10010],w=0,v=0,k[10010],z[10010],g=0,f=0;
	cin>>a>>b;
	n=a.size();
	m=b.size();
	for(int i=0;i<=n;i++){
		x[i]=a[i];
		x[i]-64;
	}
	for(int i=0;i<=n;i+=2){
		y[w]=x[i]*x[i+1];
		w++;
		v=v+y[w];
	}
	for(int i=0;i<=m;i++){
		k[i]=b[i];
		k[i]-64;
	}
	for(int i=0;i<=n;i+=2){
		z[g]=k[i]*k[i+1];
		g++;
		f=f+z[g];
	}
	if(f==v){
		cout<<"GO";
	}
	else cout<<"STAY";
	return 0;
}
