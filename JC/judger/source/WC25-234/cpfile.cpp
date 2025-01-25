#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int a[105];
	int sum=0;
	for(int i=1;i<=N;i++)
	{
		cin >> a[i];
		sort(a[i]);
		
	}
	sum+=a[i];
	cout << sum << endl;
	return 0;
