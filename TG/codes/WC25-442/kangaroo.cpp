#include<bits/stdc++.h>
using namespace std;
int n;
int kan[50010]; 
int putin[50010];
int mid(int l,int r)
{
	return int((l+r+1)/2);
}
void half_f_putin(int n)
{
	int l=0,r=n-1;
	while(l!=r)
	{
		int m=mid(l,r);
		if(kan[m]*2>kan[n]) r=m-1;
		else		          l=m;
	}
	putin[r]++;
}
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	int ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>kan[i];
	sort(kan+1,kan+n+1);
	for(int i=1;i<=n;i++)
		half_f_putin(i);
	for(int i=n;i>=0;i--)
	{
		if(putin[i])
		{
			int k=0;
			for(int j=i-1;j>=0;j--)
			{
				if(putin[j])
				{
					k=max(k,j);
					if(putin[j]>1)
					{
						if(putin[j]<=putin[i])
						{
							putin[j]=1;
							putin[i]-=putin[j]-1;
							ans++;
						}
						else 
						{
							putin[j]-=putin[i];
							putin[i]=0;
							ans++;
						}
					}
				}
			}
			if(putin[i]&&k)
			{
				ans++;
				putin[k]--;
			}
			if(!k) break;
		}
	}
	cout<<ans;
	return 0;
}

