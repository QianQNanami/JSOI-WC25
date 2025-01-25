#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[100010],q,x,y,c,w;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>c;
		if(c==1){
			cin>>x>>y;
			for(int j=1;j<=n;j++){
				if(a[j]==x){
					w=j;
				}
			}
			for(int j=n;j>=w+1;j--){
				a[j+1]=a[j];
			}
			a[w+1]=y;
			n++;
		}
		if(c==2){
			cin>>x;
			for(int j=1;j<=n;j++){
				if(a[j]==x){
					w=j;
				}
			}
			for(int j=w+1;j<=n;j++){
				a[j-1]=a[j];
			}
			n--;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
} 
