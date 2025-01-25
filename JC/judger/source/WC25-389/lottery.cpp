#include<bits/stdc++.h>
using namespace std;
int c,d;
int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		for(int j=1;j<=sqrt(i);j++){
		if(i%j==0) c++;}
		if(i==1) d=d+0;
		else if(c==1) d=d+1;
		c=0;
	}
	cout<<d;
	return 0;
}
