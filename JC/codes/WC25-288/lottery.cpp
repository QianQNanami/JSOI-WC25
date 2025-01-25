#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,j=0;
	cin>>m>>n;
	int k=n-m+1-2;
	while(k>=0&&k>2){
		k=k-2;
		j++;
		if(k<=2){
			break;
		}
	}
	cout<<j;
	return 0;
}
