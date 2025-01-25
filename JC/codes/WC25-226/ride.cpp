#include<bits/stdc++.h>
using namespace std;
int main(){
	string b,a;
	int x[100000],y[100000];
	int ans1=1,ans2=1;
	cin>>a>>b;
	for(int i=0;i<(sizeof(a))/2;i++){
		x[i]=a[i]-64;
		y[i]=a[i]-64;
		ans1=ans1*x[i];
		ans2=ans2*y[i];
	}
	if(ans1==(ans2%47)){
		cout<<"STAY"<<endl;
	}else{
		cout<<"GO"<<endl;
	}
	return 0;
} 
