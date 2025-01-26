#include<bits/stdc++.h>
using namespace std;
int m,n,a[10010],l[10010],r[10010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l[i]>>r[i];
	}
	for(int i=1;i<=m;i++){
		int summ=0;
		for(int j=l[i];j<=r[i];j++){
			summ=summ+a[j];
		}
		cout<<summ<<endl;
	}
	return 0;
}
