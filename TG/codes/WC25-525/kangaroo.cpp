#include <bits/stdc++.h>
#define int long long
using namespace std;

template<typename T>
T read(T x){
    T opt = 1, sum = 0;
    char ch = getchar();
    while(!isdigit(ch)) opt = (ch == '-') ? -1 : 1, ch = getchar();
    while( isdigit(ch)) sum = (sum << 1) + (sum << 3) + (ch ^ 48), ch = getchar();
    return opt * sum;
}
#define read read(0ll)

const int N = 1e5 + 5;
int a[N];
signed main()
{
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
	int n = read;
	for(int i = 1;i <= n;i ++ ) a[i] = read;
	sort(a + 1,a + 1 + n);
	int f;
	for(int i = n;i >= 1;i -- ){
		if(a[i] <= a[n] / 2){
			f = i;break;
		}
	}
	cout << min(f, n - f) << endl;
    return 0;
}
