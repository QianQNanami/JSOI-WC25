#include<bits/stdc++.h>
using namespace std;
int main(){
int i,n,m,z;
cin>>n>>m;
int s[i];
for(int i=0;i<n;i++){
	cin>>s[i];
}
for(int i=0;i<n;i++){
	if(s[i]>s[i-1]){
	z=i;	
	}
}
cout<<n-z+1;
}
