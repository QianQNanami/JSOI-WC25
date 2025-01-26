#include<bits/stdc++.h>
using namespace std;
int a[10];
int he(){
	int sum=0;
	for(int i=1;i<=6;i++){
		sum+=i*i*a[i];
	}
	if(sum%36==0) sum=sum/36;
	else sum=sum/36+1;
	return sum;
}
int main(){
	while(1){
		bool f=false;
		for(int i=1;i<=6;i++){
			cin>>a[i];
			if(a[i]!=0){
				f=true;
			}
		}
		if(!f) break;
		cout<<he()<<"\n";
	}
	return 0;
}
