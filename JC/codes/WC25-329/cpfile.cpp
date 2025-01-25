#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n-1;i++){
		for(int j=i;j<=n;j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(i==1) s+=0;
		else{
			for(int j=1;j<i;j++){
				s+=a[j];
			}
		}
	}cout<<s;
	
	return 0;
}
