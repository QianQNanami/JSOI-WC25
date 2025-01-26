#include<iostream>
using namespace std;
int a[7],ans;
bool P(){
	for(int i = 1;i<7;i++){
		if(a[i]!=0)return 1;
	}
	return 0;
}
int main(){
	for(;cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];){
		ans=0;
		if(P()==0)break;
		for(int i = 1;i<=6;i++){
			ans+=a[i]*i*i;
		}
		ans = ans/36+(ans%6!=0);
		cout<<ans<<endl;
	} 
	return 0;
}
