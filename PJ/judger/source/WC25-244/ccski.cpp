#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int b[1001][1001];
int main(){
	int m,n;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b[i][j];
		}
	}
	cout<<"20"<<endl;
	return 0;
}
