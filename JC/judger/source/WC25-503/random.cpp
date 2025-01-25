#include<bits/stdc++.h>
using namespace std;
long long n,a[10000005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];	
	}
	int Q;
	cin>>Q;
	for(int i=1;i<=Q;i++){
		int s;
		cin>>s;
		if(s==1){
			int x,y;
			cin>>x>>y;
			for(int j=1;j<=n;j++){
				if(a[j]==x){
					for(int k=n;k>j;k--){
						a[k+1]=a[k];	
					}
					a[j+1]=y;
					n++;
					break;
				}
			}
		}
		if(s==2){
			int e;
			cin>>e;
			for(int j=1;j<=n;j++){
				if(a[j]==e){
					for(int k=j+1;k<=n;k++){
						a[k-1]=a[k];
					}
					n--;
					break;
				}
			}	
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
