#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	int xy,q,n,x,y;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>xy;
		if(xy==1){
			cin>>x>>y;
			for(int i1=1;i1<=n;i1++)
				if(a[i1]==x){
					for(int i2=n;i2>=i1;i2--)
						a[i2+1]=a[i2];
					a[i1]=y;
					n++;
				}
		}
		else{
			for(int i1=1;i1<=n;i1++)
				if(a[i1]==x){
					for(int i2=i1;i2<=n;i2++)
						a[i2]=a[i2+1];
					n--;
				}
		}
	}
	for(int i=1;i<n;i++)
		cout<<a[i]<<" ";
	cout<<a[n]<<endl;
	return 0;
}

