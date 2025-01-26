#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	int b=0;
	for(int i=0;i<m;i++){
		int l,r;
		cin>>l>>r;
		for(int j=l-1;j<r;j++){
			b=b+a[j];
		}
		cout<<b<<endl;
		b=0;
	}
	return 0;
}
