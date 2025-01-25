#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A,B,C,D,Q,X;
int main()
{  
    cin<<A<<B<<C<<D<<X;
	a=1;b=2;c=3;d=4;e=5;f=6;g=7;h=8;i=9;j=10;
	k=11;l=12;m=13;n=14;o=15;p=16;q=17;r=18;s=19;t=20;u=21;
	v=22;w=23;x=24;y=25;z=26;
	Q=A*B*C*D;
	A=a~z;
	B=a~z;
	C=a~z;
	D=a~z;
	X=A*B*C*D;
	if(Q=X) cout"STAY"<<endl;
	else(Q!=X) cout"GO"<<endl;
	return 0;	 
}
