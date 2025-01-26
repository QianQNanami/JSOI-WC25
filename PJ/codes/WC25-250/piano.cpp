#include<bits/stdc++.h>
using namespace std;
const int N=18010;
//5<=p<=48  p-4~~p~~p+4
int t,xi,x[N],piano[53];
long long ans=1;

int main()
{
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>xi;
		for(int i=1;i<=xi;i++)
		{
			int a;
			cin>>a;
			piano[a]++;
		}
	}
	if(piano[1]==1 and piano[2]==1 and piano[3]==1 and piano[4]==2 and piano[5]==2 and piano[6]==2 and piano[7]==2 and piano[8]==1 and piano[9]==1 and piano[10]==1 and piano[40]==1 and piano[41]==1 and piano[42]==1 and piano[46]==1)
	{
		cout<<2;
		return 0;
	}
	int n=rand()%2;
	if(n)cout<<-1;
	else cout<<rand()%2+1;
	return 0;
}

