#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,x;
	cin>>m>>n;
	for(int i=2;i<=n-1;i++){
		for(x=2;x<=n-1;x++){
			if(x%i==0)
			cout<<(n-3)/x;
			break;
		}
	}
	return 0;
}
