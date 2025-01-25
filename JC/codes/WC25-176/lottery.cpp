#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,x=0;
	cin>>m>>n;
	for(int i=0;i<=n-m;i++){
		if((n-m)!=x){
			x++;
		}
	}
	cout<<x;
	return 0;
}
