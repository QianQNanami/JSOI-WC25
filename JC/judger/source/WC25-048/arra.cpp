#include<bits/stdc++.h>
using namespace std;//6,2->4;3,2->-1
double arra(double n,double k){
	if((((n-k)/2)*1.0>1)&&((((n-k)/2)*1.0)/1==((n-k)/2)*1.0))return n-((n-k)/2);
	else return -1;
}
int main(){
	double n,k,a=0;
	cin>>n>>k;
	while(true){
		if(arra(n,k)!=-1){
			a++;
			n=max((arra(n,k)),(n-arra(n,k)));
		}
		else break;
	}
	cout<<a;
	return 0;
}
