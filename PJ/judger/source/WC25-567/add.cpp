#include <bits/stdc++.h>
using namespace std;
int a[100005],sum2[100005];
int main (){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	int x,y,z=m;
	while(m>0){
		int sum=0;
		cin>>x>>y;
		for(int i=x;i<=y;i++){
			sum+=a[i];
		}sum2[m]=sum;
		m--;
	}
	for(int i=z;i>=1;i--){
		if(sum2[i]!=0)cout<<sum2[i]<<endl;
	}
	return 0;
}
