#include<bits/stdc++.h>
using namespace std;
int n,m,shulie[100005],qujian[100005][5];
long long he[100005]; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>shulie[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=2;j++){
			cin>>qujian[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=qujian[i][1];j<=qujian[i][2];j++){
			he[i]+=shulie[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<he[i]<<endl;
	}
	return 0;
}
