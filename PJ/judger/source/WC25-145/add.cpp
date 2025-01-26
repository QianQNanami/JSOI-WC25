#include <bits/stdc++.h>
using namespace std;
const int MAXN=100000;
inline int read()
{
	int x=0,f=1;
	char ch=getchar();
	while (isdigit(ch)){
    	x=x*10+ch-48;
	    ch=getchar();
	}
	return x*f;
}
int n,m,a[MAXN+5],y[MAXN+5],s[MAXN+5];
int main(){
	y[0]=0;
	n=read();
	for (int i=1;i<=n;i++)
		s[i]=s[i-1]+(a[i]=read());
	m=read();
	for (int i=1;i<=m;i++)
	{
		int l=read(),r=read();
		y[i]=s[r]-s[l-1];
	}
	for(int i=1;i<=m;i++)
	    cout<<y[i]<<endl; 
	return 0;
}
