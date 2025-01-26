#include<bits/stdc++.h>
using namespace std;
int a[10000],s[10000],n,m,l,r,t;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
	 	cin>>a[i];
	 	s[i]=s[i-1]+a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		if(l==1){
			cout<<s[r];
		}
		else{
			if(l>r){
				t=l-r;
			}
			else{
				t=r-l;
			}
			cout<<a[l]+a[t+1]+a[r];
		}
	}
	return 0;
}
//好不容易写的 给点分吧QwQ 
