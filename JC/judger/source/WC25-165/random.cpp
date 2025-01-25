#include <bits/stdc++.h>
using namespace std;

const long long N=1e5+10;

long long a[N];

int main(){
	int n,q;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	cin>>q;
	while(q--){
		int t;
		cin>>t;
		if(t==1){
			int c,b;
			cin>>c>>b;
			for(int i=c;i<=n;i++){
				a[c+1]=a[b];
				a[i+1]=a[i];
			} 
		}if(t==2){
			int x;
			cin>>x;
			for(int i=x;i<=n;i++){
				a[x]=a[x+1]; 
				a[i-1]=a[i];
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
