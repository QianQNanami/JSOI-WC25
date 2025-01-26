#include<bits/stdc++.h>
using namespace std;
long long cnt;
long long thing[7];
signed main() {
	while(true) {
		long long sum = 0;
		cnt = 0;
		for(int i = 1; i <= 6; i ++) {
			scanf("%d",&thing[i]);
			sum += thing[i] * i * i;
		}
		if(sum == 0) {
			break;
		}
		cnt += sum / 36;
		if(sum % 36 != 0){
			cnt ++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}
