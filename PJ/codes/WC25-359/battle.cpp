#include<bits/stdc++.h>

using namespace std;

int main(){
	char a[301][301];
	int  m, n, x = 0;
	cin >> n >> m;
	for (int i = 1; i <= n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	cout <<a[2][3];
	return 0;
}
