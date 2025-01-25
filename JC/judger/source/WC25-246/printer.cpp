#include<bits/stdc++.h>
using namespace std;
int a,b,a1,dui[1000],data=0,rear=0,big=-1,sum=0;
int main(){
	cin>>a>>b;
	a1=0;
	int c[a];
	while(a1<a){
		cin>>dui[a1];
		if(dui[a1]>big) {
		big = dui[a1];
	}
		rear++;
		a1++;
	}
	a1=0;
	if(dui[a1]<big){
		data++;
		rear++;
		dui[rear]=dui[a1];
	}
	else {
		sum++;
		big=dui[a1];
	}
	cout<<sum;
	return 0;
}
