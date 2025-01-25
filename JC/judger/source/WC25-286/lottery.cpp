#include<bits/stdc++.h>
using namespace std;
int f(int n){
	int s=0;
	for(int i=1;i<=n;i++){
		if(n%i==0)s++;
	}
	if(s==2)return 1;
	else return 0;
}
int main(){
	int n,m,s=0;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		if(f(i)==1)s++;
	}
	cout<<s;
	return 0;
}
