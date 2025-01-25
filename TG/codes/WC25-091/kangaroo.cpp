#include<bits/stdc++.h>
using namespace std;
struct a{
	int c;
	int t;
} a[50055];
int n,cnt=0;
int main(){ 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].t;
		a[i].c=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i].t>a[j].t)
				swap(a[i],a[j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=n/2;j<=n;j++){
			if(a[i].t>=2*a[j].t && a[i].c==1 && a[j].c==1){
				a[i].c=0;
				a[j].c=0;
				cnt++;
		}
	}
}
	cout<<cnt;
	return 0;
}
