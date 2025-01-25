#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,g=0;
	bool sf;
	cin>>m>>n;
	for(int i=m+1;i<=n;i++){
		sf=1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				sf=0;
			}
		}
		if(sf==1)g++;
	}
	cout<<g;
	return 0;
}
