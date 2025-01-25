#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,a=0,d[N];
	int ans;
	cin>>N;
	for(int i=0;i<=N;i++){
		cin>>d[i];
	}
	for(int i;i<N;i++){
		if(d[i]>d[i+1]){
			a=d[i];
			d[i]=d[i-1];
			d[i-1]=a;
		}
	}
	for(int i=0;i<N;i++){
		d[i]*=(i-1);
		ans+=d[i];
	}
	cout<<ans;
	return 0;
}
