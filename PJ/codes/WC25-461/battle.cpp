#include<bits/stdc++.h>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	int a[r+1][c+1];
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[i][j];
		}
	}
	cout<<"-1";
	return 0;
}
