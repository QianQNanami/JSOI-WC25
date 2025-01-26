#include<bits/stdc++.h>
using namespace std;
int main(){
	int a1,a2,a3,a4,a5,a6;
	int cnt,sum;
	int i=1;
	while(cin>>a1>>a2>>a3>>a4>>a5>>a6){
		if(a1==0&&a2==0&&a3==0&&a4==0&&a5==0&&a6==0) break;
		cnt=(a1*1*1)+(a2*2*2)+(a3*3*3)+(a4*4*4)+(a5*5*5)+(a6*6*6);
		int s1=cnt/36;
		int s2=cnt%36/25;
		int s3=cnt%36%25/16;
		int s4=cnt%36%25%16/9;
		int s5=cnt%36%25%16%9/4;
		int s6=cnt%36%25%16%9%4/1; 
		cout<<s1+s2+s3+s4+s5+s6<<endl;
	}
	
	return 0;
} 
