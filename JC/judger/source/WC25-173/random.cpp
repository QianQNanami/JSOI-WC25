#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q,b,x,y;
	char a[1001];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>q;
	for(int i=0;i<=q+1;i++){
		cin>>b;
		if(b==1){
			cin>>x>>y;
			a[n+i+1]=x;
			a[n+i+2]=y;
		}
		if(b==2){
			a[n+i+1]=0;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
