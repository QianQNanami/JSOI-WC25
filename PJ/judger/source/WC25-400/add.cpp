#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100010],b1[100010],b2[100010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>b1[i]>>b2[i];
	}
	int summ[100010];
	summ[0]=0;
	summ[1]=a[1];
	for(int i=2;i<=n;i++){
		summ[i]=summ[i-1]+a[i];
	}
	for(int i=1;i<=m;i++){
		int ans=summ[b2[i]]-summ[b1[i]-1];
		if(i==m){
			cout<<ans;
		}else{
			cout<<ans<<endl;
		}
	}
	return 0;
} 
