#include <bits/stdc++.h>
using namespace std;

int k(int n)
{
	int cnt=0;
	if(n==1)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
	
		
	
}
int main()
{
	int sum=0;
	int M,N;
	cin >> M >> N;
	for(int i=M;i<=N;i++)
	{
		if(k(i))
			sum++;
	}
	cout << sum << endl;	
	return 0;
}

