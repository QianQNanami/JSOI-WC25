#include<bits/stdc++.h>
using namespace std;
int a[1000010];
int main () {
	int q,x,y,n,l,t,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>l;
		if(l==1){
			cin>>x>>y;
			for(int j=1;j<=n;j++){
				if(a[j]==x){
					t=j;
					break;
				}
			}
			for(int j=n;j>t;j--){
				a[j+1]=a[j];
			}
			a[t+1]=y;
			n++;
		}else{
			cin>>x;
			for(int j=1;j<=n;j++){
				if(a[j]==x){
					t=j;
					break;
				}
			}
			for(int j=t;j<=n;j++){
				a[j]=a[j+1];
			}
			n--;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
