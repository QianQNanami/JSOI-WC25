#include <bits/stdc++.h>
using namespace std;
int main()
{
	int M,N,m=0,n=0,js=0;
	cin>>M>>N;
	m=M;
	n=N;
	for(int i=m;i<=n;i++)
	{
		if(i%2!=0||i%3!=0||i%5!=0||i%7!=0)
		{
			js++;
		}
	}
	cout<<js;
	return 0;
}
