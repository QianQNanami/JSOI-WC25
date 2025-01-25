#include<bits/stdc++.h>
using namespace std;
int zs (int x){
	if(x==1)	return 0;
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
int main () {
	int m,n,t=0,k;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		k=i;
		if(zs(k)==1){
			t++;
		}
	}
	cout<<t<<endl;
	return 0;
}
