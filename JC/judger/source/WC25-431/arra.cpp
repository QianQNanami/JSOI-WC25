#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,a,b,r=0;
	cin>>n>>k;
	a=(n-k)/2;
	b=(n-k)/2+2;
	while(a!=0){
		a=(a-k)/2;}
	if(a==0) r++;
	while(b!=0){
		b=(b-k)/2;}
	if(b==0) r++;
	while(b!=0){
		b=(b-k)/2+2;}
	if(b==0) r++;
	cout<<r<<endl;
	return 0;
} 
