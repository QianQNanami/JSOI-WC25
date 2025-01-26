#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,i,k,g,h,d,f,s;
	long long a[6],b[10000];
	for(d=1;d<=7;d++)
	b[d]=0;
	while(1)
{
	for(i=1;i<=6;i++)
	cin>>a[i];
	if(a[1]+a[2]+a[3]+a[4]+a[5]+a[6]==0)
	break;
	else
	for(n=1;n<=6;n++)
	{
	d++;
	//a[n]:ÊýÁ¿
	//n:³ß´ç 
	h=36;
	if(a[n]!=0)
	{
	if(n*n*a[n]>=h)
	b[d]++;
	else
	if(a[n]>6/n)
	h=6*(6-a[n]*n/6);
	if(6/n!=0)
	h=36-6*n;	
}
}
}
	for(s=2;s<=d;s++)
	cout<<b[s]<<endl;
return 0;
}
