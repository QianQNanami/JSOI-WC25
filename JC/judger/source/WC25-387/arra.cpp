#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,cnt=0;
	cin>>n>>k;
	if(n>k){
		for(int i=1;i<=n;i+k){
			while(n-k>k){
				for(int j=1;j<=n;j++){
					cnt++;
				}
				if(n-k<=k){
				break;
			}
			}
		}
	}
	cout<<cnt;
	return 0;
} 
