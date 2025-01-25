#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,m,n,s,ss=0;
	cin>>m>>n;
	if(m==1){
		ss=-1;
	}
	for(i=m;i<=n;i++){
		s=0;
		for(j=2;j<i;j++){
            if(i%j==0){
				s++;
				break;
			} 
		}
		if(s==0){
			ss++;
		}
	}
	cout<<ss;
	
	return 0;
}
