#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,a=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		if(n%k==0){
			a++;
		}	
	}
	cout<<a/2;
	return 0;
}
