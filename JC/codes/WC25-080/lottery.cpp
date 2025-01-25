#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,z,i;
cin>>n>>m;
z=m-n;
for(int i=m;i>n;i--){
	if(i%2==0||i%3==0){
		z--;
	}
	if(i==2||i==3){
		z++;
	}
	
}
cout<<z;
}
