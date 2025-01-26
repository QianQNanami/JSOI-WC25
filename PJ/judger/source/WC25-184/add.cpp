#include<bits/stdc++.h>
using namespace std;
int n,x,t;
long long a[100010],ans[100010]; 
long long add(int l,int r){
	long long s=0;
	for(int i=l;i<=r;i++)
		s+=a[i];
	return s;
}
int main(){
	int l,r;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>x;
	for(int i=1;i<=x;i++){
		cin>>l>>r;
		ans[++t]=add(l,r);
	}
	for(int i=1;i<=t;i++) cout<<ans[i]<<endl;
	return 0;
}
