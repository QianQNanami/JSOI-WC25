#include<iostream>
using namespace std;
int main(){
	int a[1005],b,c,sum=0,sum1=0;
	cin>>b;
	for(int i=1;i<=b;i++){
		cin>>a[i];
	}
	for(int j=1;a[j]<=a[j+1];j++){
		for(int i=1;i<=b;i++){
			if(a[i]>=a[i+1]){
				a[i]=c;
				a[i]=a[i+1];
				a[i+1]=c;
			}
		}
	}
	for(int i=1;i<=b-1;i++){
		if(i==1){
			sum+=0;
		}
		else{
			sum+=a[i];
		}
		sum1=sum+a[i];
	}
	cout<<(sum1+1)*2;
	return 0;
} 
