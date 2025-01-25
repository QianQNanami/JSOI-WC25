#include <bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	int ans=0,sum=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
				ans++;
			}
		}
		if(ans==0){
			sum++;
		}
		ans=0;
	}
	if(m==1){
		sum--;
	}
	cout<<sum;
	return 0;
}
