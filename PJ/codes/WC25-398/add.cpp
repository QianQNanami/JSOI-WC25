#include<bits/stdc++.h>
using namespace std;
long long n,b,m,l,r,a[10010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		int sum=0;
		for(int j=l;j<=r;j++){
		sum+=a[j];
	}
	cout<<sum<<endl;
	}
	return 0;
}
/*4
4 3 2 1
2
1 3
2 4*/

