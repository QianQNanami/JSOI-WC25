#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,k,sum,sum1;
int pdcs(int n){
	if(n<2) return 0;
	for(int i=2;i<=n-1;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	cin>>m;
	cin>>n;
	for(int i=m;i<=n;i++){
		if(pdcs(i)==1){
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
} 
