#include<bits/stdc++.h>
using namespace std;

int main(){
	int j,k,ans;
	cin>>j;
	int a[j];
	for(int i=1;i<=j;i++){
		cin>>a[i];
		k=i;
	}
	if(k>a[j]){
		k=a[1];	
	}
	ans=a[k]*j;
	cout<<ans;
	return 0;
}
