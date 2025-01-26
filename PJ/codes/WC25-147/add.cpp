#include<bits/stdc++.h>
using namespace std;
long long n,a[100000005],m,c,b,q;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int j=1;j<=m;j++){
		q=0;
		cin>>c>>b;
		for(int i=c;i<=b;i++){
			q+=a[i];
		}
		cout<<q<<endl;
	}
	return 0;
}
