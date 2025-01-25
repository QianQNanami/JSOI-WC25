#include<bits/stdc++.h>
using namespace std;
typedef long long LL 

vector<LL> vec;
int n;

int bs(LL l, LL r, LL tgt)
{
	LL L = l, R = r;
	while (R - L > 1)
	{
		LL mid = (L + R) / 2;
		if(vec[mid] == tgt)
			return mid;
		if(vec[mid] < tgt)
			L = mid;
		else
			R = mid;
	}
	return L; 
}

int main()
{
	freopen("kangaroo.in", "r", stdin);
	freopen("kangaroo.out", "w", stdout);
	scanf("%lld", &n);
	for (int i = 1; i <= n; i++)
	{
		LL x;
		scanf("%lld", &x);
		vec.push_back(x);
	}
	sort(vec.begin(), vec.end());
	LL pos = bs(0, n, 2 * vec[0]);
	LL res = 0;
	for (LL i = 0, j = pos + 1; i <= pos && j < vec.size(); i++, j++)
	{
		if(vec[i] * 2 <= vec[j])
			res++;
		else
			i--;
	}
	printf("%lld\n", res);
	return 0;
}
