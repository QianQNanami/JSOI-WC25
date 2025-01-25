#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,k,c=0;
	cin>>n>>k;
	while(1){
		if(n>k){
			for(int i=1;;i++){
				n-=1;
				if(n-i==k){
					break;
				}
			}
			c++;
		}else{
			break;
		}
	}
	cout<<c;
	return 0;
}
