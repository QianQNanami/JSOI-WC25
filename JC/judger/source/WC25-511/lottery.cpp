#include <bits/stdc++.h>
using namespace std;
int main(){
	int M,N,j,i,s=0,f=1,k;
	cin>>M>>N;
	for(i=M;i<=N;i++){
		for(j=2;j*j<i;j++){
			if(i%j==0){
				break;
			}else{
				f=0;
			}		
		}
		if(f==0 &&i!=1){
			s++;
			f=1;
		}	
		
	}
	cout<<s;
	return 0;
}


