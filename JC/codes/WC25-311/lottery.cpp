#include<bits/stdc++.h>
using namespace std;
int a,b,sum,c;
int main(){
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(i==1) continue;
		if(i==2){
			c++;
			continue;
		}
		for(int j=2;j<i;j++){
			if(i%j==0){
				c--;
				break;
			}
		}
		c++;
	}
	cout<<c;
	return 0;
}
