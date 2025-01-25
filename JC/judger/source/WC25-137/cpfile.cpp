#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b[110],c,d;
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b[i];
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			if(b[i]>b[j])
				c=max(b[i],b[j]);
				break;
		}
	}
	for(int i=1;i<=a;i++){
		d=b[i]*i;
	}
	cout<<d;
	return 0;
}
