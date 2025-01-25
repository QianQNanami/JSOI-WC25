#include<bits/stdc++.h>
using namespace std;
int s=0;
int x,n,m;
cin >>x>>n>>m;
int main(){
	x==(1000001-m)-(1000000-n);
    for (int i=1; i<=x; i++){
    	for (int j=2; j<i; j++){
	        if (i%j!=0){
	        	s=s+1;
			}
		}
	}
	cout << s;	
	return 0;
}
