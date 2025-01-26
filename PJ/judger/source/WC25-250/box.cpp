#include<bits/stdc++.h>
using namespace std;
const int N=10000007;
int biggel[N],a,area[10]={0,1,4,9,16,25,36};
bool f;
long long k=1;
int main()
{
	while(1)
	{
		f=1;//
		k=1;
		biggel[1]=6;
		for(int i=1;i<=6;i++)
		{
			cin>>a;
			if(a)
			{
				f=0;//
				bool flag=1;
				for(int j=1;j<=k;j++)
				{
					if(biggel[j]-i>=0)
					{
						biggel[j]-=i;
						flag=0;
						break;
					}
				}
				if(flag)
				{
					biggel[++k]=6-i;
				}
			}
		}
		if(f) break;//
		cout<<k<<endl;
	}
	return 0;
}

