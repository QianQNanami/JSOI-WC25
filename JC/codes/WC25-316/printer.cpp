#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k[100],y=-100,t=0;
	cin>>n;
	for( int i=0;i<n;i++){
		cin>>k[i];
		for(int s=0;s<n;s++){
				for( int z=s;z<n;z++){
			if(k[z]>k[s])k[s]=k[z];}
		}
			for( int w=0;w<n;w++){
			if(k[w]>k[0])k[w]=k[0];w=w;}
		}
		for(int x=0;x<w;x++){
			t=k[x]+t;
		}
	}	
		cout<<t;
	return 0;
}
