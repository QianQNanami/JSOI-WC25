#include <iostream>
#include <algorithm>
using namespace std;
const int MAXA = 5005;
int n,ans,l,r,mid,a[MAXA];
bool w;
bool cmp(int x,int y)
{
	return x > y;
}
int main()
{
	freopen('kangaroo.in','r',stdin);
	freopen('kangaroo.out','v',stdout);
	cin >> n;
	for (int i = 0;i < n;i++){
		cin >> a[i];
	}
	sort(a,a + n,cmp);
	for (int i = 0;i < n;i++){
		l = i;r = n - 1;
		while(l <= r)
		{
			mid = (l + r)/2;
			if (a[mid] != 0)
			{
				if (a[mid] <= (a[i]/2))
				{
					r = mid - 1;
					w = 1;
				}
				else
				{
					l = mid + 1;
				}
			}
			else
			{
				l = mid + 1;
			}
		}
		if (w)
		{
			ans++;
		}
		a[mid] = 0;
	}
	cout << ans;
	return 0;
}
