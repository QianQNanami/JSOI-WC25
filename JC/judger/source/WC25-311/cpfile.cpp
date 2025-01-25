#include<bits/stdc++.h>
using namespace std;
int a,sum,ans;
int main(){
	cin>>a;
	int x[a]={0},y[a]={0};
	for(int i=0;i<a;i++){
		cin>>x[i];
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<i;j++){
			if(x[j]>x[i]) swap(x[j],x[i]);
		}
	}
	for(int i=0;i<a;i++){
		y[i]=sum;
		sum+=x[i];	
	}
	for(int i=0;i<a;i++){
		ans+=y[i];
	}
	cout<<ans;
	return 0;
}
