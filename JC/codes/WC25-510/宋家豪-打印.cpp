#include<bits/stdc++.h>
using namespace std;
char a[10010];
int main(){
	int n,i,t=0,s=0,j,x,tt;
	cin>>n>>t;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
			if(a[j]>a[0]){
				s++;
				a[0]=tt;
				for(x=i+1;x<n;x++){
					a[x]=a[x-1];
				}
				a[n]=tt;
			}
		}
	}
	cout<<t+n-s;
	return 0;
}
