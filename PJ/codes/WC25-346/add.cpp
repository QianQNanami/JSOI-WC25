#include<bits/stdc++.h>
using namespace std;
struct node
{
	int l,r;
};
int main()
{
	int n,m;
	cin>>n;
	int a[n+1];
	int sum[n+1];
	sum[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	cin>>m;
	vector<int> answer;
	for(int i=1;i<=m;i++)
	{
		node x;
		cin>>x.l>>x.r;
		answer.push_back(sum[x.r]-sum[x.l-1]);
	}
	for(int i=1;i<=m;i++)
	{
		cout<<answer[i-1]<<endl;
	}
	return 0;
}

