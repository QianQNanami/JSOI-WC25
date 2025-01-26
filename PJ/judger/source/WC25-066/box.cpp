#include <bits/stdc++.h>
using namespace std;
int va[6];
int zuixiao(){
	int sum;
	for(int i=1;i<=6;i++){
		sum+=i*i*va[i];
	}
	if(sum%36==0) sum=sum/36;
	else sum=sum/36+1;
	return sum;
}
int main(){
	while(1){
		bool f=false;
		for(int i=1;i<=6;i++){
			cin>>va[i];
			if(va[i]!=0){
			f=true;
			}
		}
		if(!f)break;
		cout<<zuixiao()<<"\n";
	}
	return 0;
}

