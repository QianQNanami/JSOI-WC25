#include<bits/stdc++.h>
using namespace std;
int x[105],sum,y[105];
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	sort(x,x+n+1);
	for(int i=2;i<=n;i++){
		y[i]=y[i-1]+x[i-1];
		sum+=y[i];
	}
	cout<<sum;
	return 0;
}
