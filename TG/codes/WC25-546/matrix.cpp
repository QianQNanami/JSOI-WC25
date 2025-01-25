//matrix
#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
int a[405][405],s[405][405];//s1[405],s2[405];
int main() {
    ios::sync_with_stdio(false);
    freopen("matrix.in", "r", stdin);
    freopen("matrix.out", "w", stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			//if(i==j)s1[i]=s1[i-1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		s[1][i]=a[1][i];
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<=n;j++){
			s[i][j]=s[i-1][j+1]+a[i][j];
		}
	}int d=-0x3f;
	for(int i=2;i<=n;i++){
		for(int k=2;k<=i;k++){
			for(int j=n-k+1;j;j--){
				d=max(d,a[i-k+1][j]+a[i][j+k-1]-(s[i][j]-s[i-k][j+k]));
			}
		}
	}
	cout<<d;
    return 0;
}
//3
//-3 4 5
//7 9 -2
//1 0 -6
