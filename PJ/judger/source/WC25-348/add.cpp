#include <bits/stdc++.h>
using namespace std;
int a[100010];
int n,m;
int op,ed;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		a[i]+=a[i-1];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		scanf("%d%d",&op,&ed);
		cout<<a[ed]-a[op-1]<<endl;
	}
	return 0;
}

