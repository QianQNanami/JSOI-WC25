#include<bits/stdc++.h>
using namespace std;
int n;
long long int a[100005];
int m;
int l,r;
int s;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		for(int j=l;j<=r;j++){
				s+=a[j];
		}
		cout<<s<<endl;
		s=0;
	}
	return 0;
}
