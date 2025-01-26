#include<bits/stdc++.h>
using namespace std;
int add[100001],n,m,a,b,sum[100001];
int main(){
	//freopen("".in,r,stdin)
	//freopen("".out,w,stdout)
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>add[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b;
		sum[i]=0;
		for(int j=a;j<=b;j++){
			sum[i]+=add[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<endl;
	}
	return 0;
}
