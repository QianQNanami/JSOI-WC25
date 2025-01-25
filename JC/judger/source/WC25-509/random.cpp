#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,q;
	cin>>n;
	int a[1000];
	memset(a,-1,sizeof(a)); 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>q;
	for(int i=0;i<q;i++){
		int z;
		cin>>z;
		if(z==1){
			int x,y;
			cin>>x>>y;
			for(int j=0;j!=x;j++){
				for(int l=n;l>j;l++){
					swap(a[l],a[l-1]);
				}
				a[j]=y;
			}
		}else{
			int x;
			cin>>x;
			for(int j=0;j!=x;j++){
				a[j]=-1;
				for(int l=j;l<n;l++){
					swap(a[l],a[l+1]);
				}
			}
		}
	}
	for(int i=1;a[i]!=-1;i++){
		cout<<a[i];
	}
	return 0;
}
