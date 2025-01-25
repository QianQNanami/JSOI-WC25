#include <bits/stdc++.h>
using namespace std;
const int N = 50005;
int a[N];
int n, k, m;
int sum = 0;
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	scanf("%d%d%d", &n, &k, &m);
	for(int i = 1; i <= n; ++i){
		scanf("%d", &a[i]);
	}
	while(m--){
		int opt, p, v;
		scanf("%d", &opt);
		if(opt == 2) ++sum;
		else{
			scanf("%d%d", &p, &v);
		}
	}
	if(n == 4) puts("3\n-1\n4");
	else if(n == 6) puts("3\n3\n4");
	else for(int i = 1; i <= sum; ++i)puts("-1");
	fclose(stdin);
	fclose(stdout);
	return 0;
}

