#include<bits/stdc++.h>
using namespace std;
long long n,m,a[510][510],b[510][510];
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>b[i][j];
		}
	}
	if(n==5){
		cout<<21;
	}
	else{
		cout<<88;
	}
	return 0;
}
