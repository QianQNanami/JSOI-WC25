#include <bits/stdc++.h>
using namespace std;

//bl
int f[100003],a[100003],n,m,l,r;

int main()
{
	//freopen("add.in","r",stdin);
	//freopen("add.out","w",stdout);
	cin >>n;
	f[0] = 0;
	//Ԥ����f����Ϊǰ׺�ͣ��Կռ任ʱ�� 
	for (int i = 1;i <= n;i++)
	{
		cin >>a[i];
		f[i] = f[i - 1] + a[i];
	}
	cin >>m;
	//ѯ��ʱֱ��������� 
	for (int i = 1;i <= m;i++)
	{
		cin >>l>>r;
		cout <<(f[r] - f[l - 1])<<endl;//=)������ 
	}
	/*
	for (int i = 1;i <= n;i++)
	{
		cout <<f[i]<<" ";
	}
	*/
	return 0;
}
