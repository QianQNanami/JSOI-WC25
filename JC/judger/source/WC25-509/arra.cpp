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
		int d1;
		cin>>d1;
		if(d1==1){
			int x,y;
			cin>>x>>y;
			for(int j=0;j<n;j++){
				if(a[j]==x){
					for(int k=j;k<n;k++){
						swap(a[k],a[k+1]);
					}
					a[j]=y;
				}
			}
		}else if(d1==2){
			int x;
			cin>>x;
			for(int j=0;j<n;j++){
				if(a[j]==x){
					for(int k=j;k<n;k++){
						swap(a[k+1],a[k]);
					}
				}
			}
		}
	}
	for(int i=0;a[i]!=-1;i++){
		cout<<a[i];
	}
	return 0;
}
