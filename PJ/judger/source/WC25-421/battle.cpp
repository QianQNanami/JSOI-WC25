#include<bits/stdc++.h>
using namespace std;
int m,n;
char q[305][305];
int a[305][305];
int t;
int main(){
	cin >> m >> n;
	for (int i = 1;i <= m;i++){
		for (int j= 1;j <= n;j++){
			cin >> q[i][j];
			if (q[i][j]=='Y'){
				a[i][j]=1;
			}
			if (q[i][j]=='T'){
				a[i][j]=2;
			}
			if (q[i][j]=='S' || q[i][j] =='R'){
				a[i][j]==3;
			}
			if (q[i][j]=='E'){
				a[i][j]=0;
				t++;
			}
			if (q[i][j]=='B'){
				a[i][j]=-1;
				t++;
			}
		}
	}
	cout << t;
	return 0;
}
