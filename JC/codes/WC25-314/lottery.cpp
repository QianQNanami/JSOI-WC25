#include<bits/stdc++.h>
using namespace std;
int M,N,v=0;
int main(){
	cin>>M>>N;
	for(int j=M;j<=N;j++){
		for(int i=M;i<=N;i++){
	    if(j%i==1) v++;
		else  break();
	    }
    } 
	cout<<v;
	break
}

