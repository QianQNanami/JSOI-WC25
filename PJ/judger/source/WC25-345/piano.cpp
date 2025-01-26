#include<cstdio>
using namespace std;
int n,a[1001][20];
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++) 
    {
    	int m;
    	scanf("%d",&m);
    	for(int j=1;j<=m;j++) scanf("%d",&a[i][j]);
	}
	printf("-1");
	return 0;
}

