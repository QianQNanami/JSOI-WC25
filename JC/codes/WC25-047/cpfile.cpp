#include<bits/stdc++.h>
using namespace std;
int n;
int a[10000];
int main(){
	int s = 0;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			sort(a[i],a[i+1]);
		}
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			s += a[i];
		}
	}
	cout<<s;
	return 0;
}
