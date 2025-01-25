#include<bits/stdc++.h>
using namespace std;

int pdss(int x){
	if(x==2||x==3)return 1;
	for(int i=2;i<x/2+1;i++){
		if(x%i==0)return 0;
	}return 1;
}

int main(){
	int m,n,ans=0;
	cin>>m>>n;
	for(int j=m+1;j<n;j++){
		if(pdss(j))ans++;
	}
	cout<<ans<<endl;
	return 0;
}
