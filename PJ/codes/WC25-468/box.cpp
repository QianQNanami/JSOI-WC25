#include<bits/stdc++.h>
using namespace std;
int main(){
	long long k=0;
	while(1){
		int a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		k=a+4*b+9*c+16*d+25*e+36*f;
		if(k<36){
			cout<<1<<endl;
		}
		if(k%36==0){
			cout<<k/36<<endl;
		}else{
			cout<<k/36+1<<endl;
		}
	}
}
