#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,cnt=0;
	cin>>n;
	int x[n+2];
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	cin>>m;
	int a[m+2][5];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=2;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=a[i][1];j<=a[i][2];j++){
			cnt=cnt+x[j];
		}
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
}

