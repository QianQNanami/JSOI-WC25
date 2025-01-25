#include <bits/stdc++.h>
using namespace std;
int m,n;

int main(){
	cin>>m>>n;
	int k;
	bool ans=false;
	for(int i=m;i<=n;i++){
		if(i==1) ans=true;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				ans=true;
			}
		}
		if(ans==false) k++;
		ans=false;
	}
	cout<<k;
	return 0;
}
