#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,k,a[105],sum,sum1;
int main(){
	cin>>n;
	sum=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		sum--;
		sum1+=a[i]*sum;
	}
	cout<<sum1<<endl;
	return 0;
} 
