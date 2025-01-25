#include<iostream>
using namespace std;
int main(){
	int m,n,sum=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(i==0||i==1){
			sum+=1;
		}
		else if(i==2){
			sum+=0;
		}
		else{
			for(int j=i-1;j>=2;j--){
				if(i%j==0){
					sum++;break;
				}
			}
		}
	}
	cout<<n-(m-1)-sum;
	return 0; 
}
