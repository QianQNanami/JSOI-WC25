#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,x,i; 
	cin>>m>>n;
	x=n-m;
	if(x==2){
		cout<<"1"; 
	}
	else if(x==1){
		cout<<"0";
	}
	else if(x%3!=0){
		if(x%5!=0){
			if(x%2!=0){
				i++;
			}
		}
		cout<<i;
	}
	return 0;
}
