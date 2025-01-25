#include<bits/stdc++.h>
using namespace std;
int main(){
    int ci=1,n,k,a,b;
    bool l=0;
    cin>>n>>k;
    do{
    	if(n%2==0&&k%2==0){
    		a=n/2-k/2;
    		b=a+2;
    		n=b;
    		if(a%2==0&&a%2==0||a%2==1&&a%2==1) ci++;
    		ci++;
		}
		if(n%2==1&&k%2==0){
			l=1;
		}
		if(n%2==0&&k%2==1){
			l=1;
		}
		if(n%2==1&&k%2==1){
			a=n/2-k/2;
			b=a+k;
			n=b;
			if(a%2==0&&a%2==0||a%2==1&&a%2==1) ci++;
			ci++;
		}	
	}
	while(l==1);
	cout<<ci;
	return 0;
}
