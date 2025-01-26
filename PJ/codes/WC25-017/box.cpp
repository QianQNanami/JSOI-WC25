#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a[7]={0};
	long long b[7]={0}; 
	while(1){
		int num=0;
		for(int i=1;i<=6;i++){
			cin>>a[i];
			if(a[i]>0)
				b[i]=1;
			else
				b[i]=0;
		}
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0)
			break;
			
		int str=0;
		for(int i=1;i<=6;i++){
			if(str+b[i]*i<6){
				str+=b[i]*i; 
			}
			else if(str+b[i]*i==6){
				num++;
				str=0;
			}
			else if(str+b[i]*i>6){
				num++;
				str=a[i]*i;
			}
		}
		if(str>0)
			num++;
		cout<<num<<endl;
	}
} 
