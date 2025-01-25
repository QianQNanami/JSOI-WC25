#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,g;
	cin>>n>>m;
	if(n==1) n++;
	for(int i=n;i<=m;i++){
		for(int j=2;j*j<i;j=j+2){
			
			if(i%j==0) {
				g++;
				break;
			}	
		}
	
	}
	cout<<g;
	return 0;
}
