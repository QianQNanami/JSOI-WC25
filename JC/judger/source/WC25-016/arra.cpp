#include<iostream>
using namespace std;
int main(){
	int n,k,sum=0,a=1;
	cin>>n>>k;
	int c=n+k;
	while(a!=0){
		if(c%2==0){
			if(n-c/2==k){
				sum++;
				n=n-c/2;
			}
			else{
				break;
			}
		}
		else{
			break;
		}
	}
	cout<<sum;
} 
