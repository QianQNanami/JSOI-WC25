#include<bits/stdc++.h>
using namespace std;
int isp(int x){
	if(x==1) return false;
	if(x==2) return true;
	for(int j=2;j*j<=x;j++){
		if(x%j==0) return false;
	}
	return true;
}
int main(){
	long long n,m,sum=0;
	bool f=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(isp(i)) sum++;
	}
	cout<<sum<<endl;
	
	return 0;
}
