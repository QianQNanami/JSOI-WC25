#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100000];
	int n,t=0,w=0,ys=-1,sc=0;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a[i];
	w++;
	}
	for(;;){
	for(int i=0;i<n;i++){
	if(a[t]<a[i]){
	a[w+1]=a[0];
	w++;
	t++;
	i++;
	}
	}
	a[t]=0;
	ys++;sc++;
	if(sc==n){
	break;
	}	
	}
	cout<<ys;
return 0;
}
