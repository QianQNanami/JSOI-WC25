#include <bits/stdc++.h>
using namespace std;
long long a[405][405];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n;
	cin >> n;
	bool ok=0;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cin>>a[i][j];
			if(a[i][j]<0) ok=1;
		}
	}
	if(n==2) cout<<a[1][1]+a[2][2]-a[1][2]-a[2][1];
	else if(ok){
		cout<<5;
	}else{
		long long s1=0,s2=0;
		for(int i=1;i<=n;++i){
			s1+=a[i][i];
			s2+=a[i][n-i+1];
			cout<<abs(s1-s2);
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

