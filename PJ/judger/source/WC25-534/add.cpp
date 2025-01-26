#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,i,j,m,sum,l,r;
	cin>>N;
	int a[N+5];
	for(i=1;i<=N;i++)
	cin>>a[i];
	cin>>m;
	for(i=1;i<=m;i++){
		cin>>l>>r;
		sum=0;
		for(j=l;j<=r;j++)
		sum+=a[j];
		cout<<sum;
	}
	return 0;
}
