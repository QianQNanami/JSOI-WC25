#include<bits/stdc++.h>
using namespace std;
int main (){
int n,m,b=1,k=0;
cin>>n;
cin>>m;
for(int j=n;j<m-1;j++){
for(int i=2;i<j;i++){
	if(j==2){
		k++;
		break;
	}
	if(j%i==0){
		b=0;
}
}
if(b==1){
	k++;
}
b=1;
}
cout<<k;
return 0;	
}
