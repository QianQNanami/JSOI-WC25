#include <stdio.h>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

int n,a[50008]={};

inline bool check(int x) {
	int j=x+1;
	for(int i=1;i<=x;i++) {
		if(j > n) return false;
		if(!(a[j]/2 >= a[i])) --i;
		++j;
	}
	return true;
}
 
inline int solve() {
	int left=1,right=n;
	int ret=-1;
	while(left <= right) {
		int middle = left+(right-left)/2;
		if(check(middle)) {
			left=middle+1;
			ret = middle;
		}
		else right=middle-1;
//		printf("%d,%d\n",left,right);
	}
	return ret;
}

int main() {
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",a+i);
	sort(a+1,a+n+1);
	printf("%d",solve());
}

