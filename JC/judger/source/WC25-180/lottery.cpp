#include<iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int sum=n-m;
	for(int i=m;i<=n;i++){
		for(int y=2;y<i;y++){
			if(i%y==0){
				sum--;  
				break;
			}else{
				continue;
			}
		}
	}if(m!=1){
		sum++;
	}
	cout<< sum;
	return 0;
} 
