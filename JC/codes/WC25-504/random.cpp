#include<bits/stdc++.h>
using namespace std;
int main(){
	int l[10002];
	int n,a,x,y,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>l[i];
	}
	for(i=1;i<=n;i++){
		cin>>a;
		if(a==1){
			cin>>x>>y;
			for(i=n;i>=x;i++){
				a[i]=a[i-1];
			}
			a[]
		}
	}
	return 0;
}
