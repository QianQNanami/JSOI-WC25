#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	
	int a[n+1];
	
	cin>>a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		a[i]=a[i-1]+a[i];
	}
	
	int m;
	cin>>m;
	
	int b[m+1],c[m+1],ans[m+1];
	
	for(int i=0;i<m;i++){
		cin>>b[i]>>c[i];
		if(b[i]==1) ans[i]=a[c[i]-1];
		else ans[i]=a[c[i]-1]-a[b[i]-2];
	}
	
	for(int i=0;i<m;i++)
		cout<<ans[i]<<endl;
	
	 return 0;
}
