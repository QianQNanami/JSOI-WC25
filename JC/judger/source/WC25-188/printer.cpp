#include<bits/stdc++.h>
using namespace std;
int main(){
	int d=0,a,b,c[10010];
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>c[i];
		if(c[i]==1){
			d++;
		}
	}
	cout<<d;
} 
