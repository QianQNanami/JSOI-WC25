#include<bits/stdc++.h>
using namespace std;
int s[1000];
int main(){
int i,s[i],h[i];
int N,K,s1,z;	
cin>>N>>K;
s[1]=N;
if((N+K)%2!=0){
	cout<<N;
}
for(int i=1;i<=K;i++){
	if((s[i*2+1]+K&&s[i*2]>K*2)%2==0){
	s[i*2+3]==(s[i*2+1]+3)/2;		
}else
z+=s[i*2+1];

	if((h[i*2]+K)%2==0&&h[i*2]>K*2){
	s[i*2+2]==(s[i*2+2]-3)/2;		
}else
z+=h[i*2];
}
cout<<z;
}

