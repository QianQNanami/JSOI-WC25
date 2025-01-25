#include<bits/stdc++.h>
using namespace std;
long long a[10010];
int main(){
	long long n,q,f1=0;
	cin>>n;
	long long n1=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}cin>>q;
	while(q!=0){
		int x;
		q--;
		cin>>x;
		if(x==1){
			int p;
			int j,k;
			cin>>j>>k;
			for(int i=1;i<=n;i++){
				if(a[i]==j){
					p=i;
				}
			}
			for(int i=p+1;i<=n;i++){
				a[i+1]=a[i];
			}
			a[p+1]=k;
			n1++;
		}
		else{
			int j,p;
			cin>>j;
			for(int i=1;i<=n;i++){
				if(a[i]==j){
					p=i;
				}
			}
			for(int i=p;i<=n-1;i++){
				a[i]=a[i+1];
			}
			n1--;
		}
	}
	for(int i=1;i<=n1;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
