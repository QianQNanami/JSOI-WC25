#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,l=0,x=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(i<=1){
			continue;
		}
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				l++;
			}
		}
		if(l==0){
			x++;
		}
		l=0;
	}
	cout<<x; 
	return 0;
}

