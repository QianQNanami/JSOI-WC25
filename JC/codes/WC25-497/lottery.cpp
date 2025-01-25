#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,box=0,i;
	cin>>m>>n;
	for(i=m;i<=n;i++){
		if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0){
			box++;
		}
		if(i==2)box++;
		else if(i==3)box++;	
		else if(i==5)box++;	
		else if(i==7)box++;	
		else if(i==1||i==0){
			if(box>0)box--;
			else box=0;
		}
		else box=box+0;
	}	
	cout<<box;
		
		
	return 0;
}
