#include<bits/stdc++.h>
using namespace std;
int n;
int a,b,c,d,e,f;
int main(){
	cin>>a>>b>>c>>d>>e>>f;
	while(a||b||c||d||e||f){
		double x;
		if(5*d<=b){
			if(11*e<=a)x=(a%11*1.0+b%5*4.0+c%4*9.0)/36.0+c/4+d+e+f;
			else x=(b%5*4.0+c%4*9.0)/36.0+c/4+d+e+f;
		}else if(20*d<=4*b+a){
			if(a/4%5*4+a%4>=11*e)x=((a/4%5*4+a%4)%11*1.0+c%4*9.0)/36.0+c/4+d+e+f;
			else x=c%4/4.0+c/4+d+e+f;
		}else x=c%4/4.0+c/4+d+e+f;
		if((int)x < x)x=(int)x+1;
		cout<<x;
		cin>>a>>b>>c>>d>>e>>f;
	}
	return 0;
}
