#include<bits/stdc++.h>
using namespace std;
int f(int a){
	for(int i=2;i<a;i++){
		if(a%i==0){
			return 0;
		}
		else{
			return 1;
		}
	}
	if(a==2){
		return 1;
	}
}
int main(){
	int n,m,sum=0;
	cin>>n>>m;
	for (int i=n;i<=m;i++){
		if(f(i)==1){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
