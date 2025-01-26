#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,a[100005],m,x,y,b[100005],c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	b[0]=a[0];
	for(int i=1;i<n;i++){
		b[i]=b[i-1]+a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		c=b[y-1];
		if(x>1){
			c-=b[x-2];
		}
		cout<<c<<endl;
	}
	return 0;
}
