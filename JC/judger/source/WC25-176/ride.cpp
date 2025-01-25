#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[70],b[70],n;
	cin>>a>>b;
	for(int i=0;i<=n;i++){
		if(a[i]==b[i]){
			cout<<"GO";
		}else{
			cout<<"STAY";
		}
	}
	return 0;
}
