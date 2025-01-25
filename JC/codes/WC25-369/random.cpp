#include<bits/stdc++.h>
using namespace std;
int ans=0;
struct nobe{
	int zhi;
	int next;
}a[200000];
struct nobe{
	int zhi;
	int *next;
}jia[200000];

int main(){
	int n,q,cz,x,y;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].zhi;
		a[i].next=&a[i+1];
	}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>cz;
		if(cz==1){
			cin>>x>>y;
			while ()
		}
		else if(cz==2){
			cin>>x;
		}
	}
	return 0;
}
