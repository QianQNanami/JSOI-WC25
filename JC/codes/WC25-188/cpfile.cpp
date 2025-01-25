#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main(){
	int n;
	cin>>n;
	int b=0;
	for(int i=1;i<=n-1;i++){
		cin>>a[i];
		b=(n-1)*a[i];
	}
	cout<<b;
} 
