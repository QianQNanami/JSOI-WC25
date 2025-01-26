#include <bits/stdc++.h>

using namespace std;

long long a, b, c, d, e, f;

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	while(cin >> a >> b >> c >> d >> e >> f && a + b + c + d + e + f > 0){
		if((a * 1 + b * 4 + c * 9 + d * 16 + e * 25 + f * 36) % 36 == 0){
			cout << (a * 1 + b * 4 + c * 9 + d * 16 + e * 25 + f * 36) / 36 << endl;
		}
	}
	
	return 0;
}

