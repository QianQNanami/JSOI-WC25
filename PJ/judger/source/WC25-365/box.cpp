#include<bits/stdc++.h>
using namespace std;
int a[30]={0,0,0,0,0,0,0,0};
bool f=true;
int ans;
int main(){
while(!0){
	f=false;
	for(int i=1;i<=6;i++){
	cin>>a[i];
	if(a[i]!=0){
		f=true;
	}
}	
if(f==false){
	break;
}
else{
 ans=floor((a[1]*1*1+a[2]*2*2+a[3]*3*3+a[4]*4*4+a[5]*5*5+a[6]*6*6)/36);
}
cout<<ans;
ans=0;
}
return 0;
}

