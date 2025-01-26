#include<iostream>
using namespace std;
#define ll long long
ll a;
ll sum;
int main(){
	bool flag=1;
	while(flag){
		flag=0;
		sum=0;
		for(int i=1;i<=6;i++){
			cin>>a;
			sum+=a*i*i;
			if(a!=0){
				flag=1;
			}
		}
		if(flag){
			if(sum%36==0){
				cout<<sum/36<<endl;
			}
			else{
				cout<<sum/36+1<<endl;
			}
		}
	}
	return 0;
}
