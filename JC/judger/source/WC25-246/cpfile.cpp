#include<bits/stdc++.h>
using namespace std;
int a,a1=0,sum=0,i=2;
int main(){
	cin>>a;
	int b[a+1];
	int c[a+1];
	while(a1<a){
		cin>>b[a1];
		a1++;
	}
	sort(b,b+a);
	while(i<=a){
		c[i]=c[i-1]+b[i-1];
		sum+=c[i];
		i++;
	}
	cout<<sum-10;
	return 0;
}
