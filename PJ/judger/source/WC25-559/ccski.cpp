#include<bits/stdc++.h>
using namespace std;
int h[505][505];
bool a[505][505];
int main(){
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>h[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	cout<<" "<<endl;
	return 0;
} 
