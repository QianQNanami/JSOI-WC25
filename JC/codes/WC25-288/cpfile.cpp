#include<bits/stdc++.h> 
#include<list>
using namespace std;
int main(){
	list<int>s;
	int n,a[n],t=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	swap(a[1],a[n]);
	for(int i=1;i<=n;i++){
		int s[i]={a[i],&(i+1)};
		if(i==n){
		    s[i]={a[i],0};
		}
	}
	for(int i=1;i<=n;i++){
		while((n-i)>0){
		    t=t+a[i]*(n-i);
		}
	}
	cout<<t;
	return 0;
}
