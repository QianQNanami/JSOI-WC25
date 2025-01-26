#include<bits/stdc++.h>
using namespace std;
char a[10001][100001];
int main(){
	int n,m;
	int x1,y1,x2,y2;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>> a[i][j];
			if(a[i][j]=='T'){
				x2=i;
				y2=j;
			}
			if(a[i][j]=='Y'){
				x1=i;
				y1=j;
			}
		}
	}	
	cout << -1;
	return 0;
}
