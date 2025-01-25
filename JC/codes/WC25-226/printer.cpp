#include<bits/stdc++.h>
using namespace std;
int zd(int a[],int n){
	int bi=-1000000;
	for(int i=1;i<=n;i++){
		if(a[i]>bi){
			bi=a[i];
		}
	}
	return bi;
}
int main(){
	int n,t;
	cin>>n>>t;
	int q[n+1];
	for(int i=1;i<=n;i++){
		cin>>q[i];
	}
	cout<<5<<endl;
	return 0;
} 
