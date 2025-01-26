#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
	int cnt=1;
	for(int i=1;;i++){
		int sum=0;
		for(int j=1;j<=6;j++){
			cin>>a[i];
			sum+=a[i]*j*j;
		}
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0){
			break;
		}
		if(sum%36==0){
			cout<<sum/36<<endl;
		}else{
			cout<<sum/36+1<<endl;
		}
	}
	return 0;
}

