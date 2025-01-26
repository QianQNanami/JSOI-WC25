#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >>n;
	int a[100001],b[100001];
	for(int i=0;i<n;i++){
		cin >>a[i];
		if(i==0){
			b[i]=a[i];
		}else{
			b[i]=a[i]+b[i-1];
		}
	}
//	for(int i=0;i<n;i++){
//		cout<<b[i]<<" ";
//	}
	int m;
	cin >>m;
	int c[m]; 
	for(int i=1;i<=m;i++){
		int a1,a2;
		cin >>a1>>a2;
		c[i-1]=b[a2-1]-b[a1-2];
	}
	for(int i=0;i<m;i++){
		cout<<c[i]<<endl;
	}
	return 0;
}

