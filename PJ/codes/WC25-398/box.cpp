#include<bits/stdc++.h>
using namespace std;
int flag=0,a[10];
int main(){
	while(flag<=5){
		int sum=0; 
		flag=0;
		for(int i=1;i<=6;i++){
			cin>>a[i];
			if(a[i]==0){
				flag++;
			}
			else{
			a[i]=a[i]*i*i;
			sum+=a[i]; 
			}
		}
		if(flag==6)break;
		if(sum%36==0)
		cout<<sum/36<<endl;
		else cout<<sum/36+1<<endl;
	}
	return 0;
}
