#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,b=0,c=0;
	cin>>n>>m;
	for(int i=2;i<=n-1;i++){
		if(i%2==1||i==2){
			c++;
			b++;
		}
	}
	if(n>2){
		b=b+0;
	}
	for(int j=2;j<=m;j++){
		if(j%2==1){
			b++;
		}else if(j%2!=1||n==2){
			b=b+0;
		}
	}
	b=b-c;
	cout<<b-1;
} 
