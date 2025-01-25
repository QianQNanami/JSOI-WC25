#include<bits/stdc++.h>
using namespace std;
int main(){	
	int m,n,a;
	cin>>m>>n;
	if(m>n)a=m-n;
	else a=n-m;
	int x[a];
	for(int i=0;i<=a;i++){
		x[i]=i;
	}
	int y=0;
	for(int i=0;i<=a;i++){
			if(x[i]%2==0||x[i]%3==0||x[i]%5==0||x[i]%7==0||x[i]%4==0||x[i]%6==0||x[i]%8==0||x[i]%9==0||x[i]%10==0)y=y+0;
			else y++;
		
	}
	if(7<a)cout<<y-1+4<<endl;
	if(5<a)cout<<y-1+3<<endl;
	if(3<a)cout<<y-1+2<<endl;
	if(2<a)cout<<y-1+1<<endl;
	
}
