#include<bits/stdc++.h>
using namespace std;
int h=0,d=0;
int main(){
	int n;
	int a[100010];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=n;j>0;j--){
		for(int i=1;i<j;i++){
			if(a[i]>=a[i+1]) swap(a[i],a[i+1]);
			}	
		} 

		for(int i=1;i<=n;i++){
				d=a[i]*(n-i);
				h=d+h;
		}
	
	cout<<h;
	return 0;
}
