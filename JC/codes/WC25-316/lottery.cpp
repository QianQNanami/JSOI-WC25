#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
int s=0,a=0 ,z=0,u=0;
cin>>n>>m;
	for(int i=n;i<m;++i){
		for(int c=2;c<i;c++){
			if(i%c!=0) a=-1;
			else {
			a=0;z=z+1;}
	}
		if(a==-1&&z==0) {
		s=s+1;}
		else {
		s=s;}
	}
	cout<<s+1;
	return 0;
}
