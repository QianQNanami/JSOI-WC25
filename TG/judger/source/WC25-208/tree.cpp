#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
struct node
{
	int data,fa;
}t[N*4];
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int n;
	scanf("%d",n);
	for(int i=1;i<=n;i++)
	{
		int data,fa;
		scanf("%d%d",&data,&fa);
		t[i].data=data;
		t[i].fa=fa;
	}
	printf(0);
}
