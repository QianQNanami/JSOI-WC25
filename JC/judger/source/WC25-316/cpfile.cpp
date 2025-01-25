#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k[100],y=-100,t=0;
	cin>>n;
	for( int i=0;i<n;i++){
		cin>>k[i];
		for(int s=0;s<n;s++){
				for( int z=s;z<n;z++){
			if(k[z]>y)y=k[z];}
		}
		for(int x=0;x<i;x++){
			t=k[x]+t;
		}
	}	
		cout<<t;
	return 0;
}
//5
//2 3 1 5 4
