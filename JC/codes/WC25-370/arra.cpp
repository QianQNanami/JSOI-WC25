#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10010],n,m,f=0,r=0,o=0;
	double s,x,y;
	cin>>n>>m;
	s=m/2;
	x=n/2-s;
	y=n/2+s;

		if(n-(n/2+s)!=m){
			cout<<1;
		
		}
		
		if(x-(x/2+s)==m){
			f++;
			r++;
		}
		if(y-(x/2+s)==m){
			f++;
			o++;
			
		}
		if(r+o==2){
			cout<<4;
			
		}
		else if(r==0&&o==1){
			cout<<3;
			
		}
		else if(r==1&&o==0){
			cout<<3;
			
		}
		
	
	return 0;
}
