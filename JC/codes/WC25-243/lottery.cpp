#include<bits/stdc++.h>
using namespace std;
bool pd(int n){
	if(n==1) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n==2) return true;
		if(n%i==0) return false;
	}
	return true;
}
int work(int x,int y){
	int sum=0;
	for(int i=x;i<=y;i++){
		if(pd(i)) sum++;
	}
	return sum;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<work(a,b);
	return 0;
}
