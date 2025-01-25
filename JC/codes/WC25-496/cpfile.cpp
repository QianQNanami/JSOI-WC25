#include<bits/stdc++.h>
using namespace std;
int n,x,i,j=1,box=0;
int t[101];
int p[100001];
int main(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>x;
		p[x]=1;
	}
	for(i=1;i<=n;i++){
		while(p[j]!=1){
			j++;
		}
		t[i]=j;
		j++;
	}
	for(i=1;i<n;i++){
		box=box+t[i]*(n-i);
	}
	cout<<box;
	return 0;
}
