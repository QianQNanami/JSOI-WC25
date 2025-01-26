#include<bits/stdc++.h>
using namespace std;
struct node
{
	int a[6];
};
int main()
{
	node x={-1,-1,-1,-1,-1,-1};
	vector<int> answer;
	while(x.a[0]+x.a[1]+x.a[2]+x.a[3]+x.a[4]+x.a[5]!=0)
	{
		int s=0;
		for(int i=1;i<=6;i++)
		{
			cin>>x.a[i-1];
			s+=i*i*x.a[i-1];
		}
		answer.push_back(ceil(s/36));
	}
	for(int i=1;i<=answer.size()-1;i++)
	{
		cout<<answer[i-1]<<endl;
	}
	return 0;
}

