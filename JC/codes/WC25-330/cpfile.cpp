#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, ans = 0;
    cin >> n;
    int a[n+5];
    for(int i = 0;i < n;i++)
    {
    	cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0;i < n;i++)
	{
		sum += ans;
		ans += a[i];
	}
	cout << sum<<endl;
	return 0;
}

