#include<bits/stdc++.h>
using namespace std;
int n,m,a[100001],b,c,summ[100001];
void cinn()
{
	cin>>n;
}
void cina()
{
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
}
void cinm()
{
	cin>>m;
}
void cinbc()
{
	for(int i=1;i<=m;i++)
	{
		summ[i]=0;
		cin>>b>>c;
		for(int j=b;j<=c;j++)
		{
			summ[i]+=a[j];
		}
	}
}
void coutt()
{
	for(int i=1;i<=m;i++)
	{
		cout<<summ[i]<<endl;
	}
}
int main()
{
	
	cinn();
	cina();
	cinm();
	cinbc();
	coutt();
	return 0;
 } 
