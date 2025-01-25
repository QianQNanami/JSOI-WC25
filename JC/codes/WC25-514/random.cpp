#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	int n,q,i,j,x,y,p,s=0,z;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>q;
	for(i=1;i<=q;i++){
		cin>>z;
		if(z==1){
			cin>>x>>y;
			for(j=1;j<=n;j++){
				if(a[j]==x){
					p=j;
					break;
				}
			}
			for(j=n;j>p;j--){
				a[j+1]=a[j];
			}
			a[p+1]=y;
			s++;
		}else{
			cin>>x;
			for(j=1;j<=n;j++){
				if(a[j]==x){
					p=j;
					break;
				}
			}
			for(j=p;j<=n;j++){
				a[j]=a[j+1];
			}
			s--;
		}
	}
	for(i=1;i<=n+s;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
