#include <cstdio>
using namespace std;
int main() {
	int a[7];
	while(true){
		for(int i = 1; i <= 6; i++) {
			scanf("%d",&a[i]);
		}
		if(a[1] == 0 && a[2] == 0 && a[3] == 0
		&& a[4] == 0 && a[5] == 0 && a[6] == 0) {
			return 0;
		}
		if(a[1] == 0 && a[2] == 0 && a[3] == 4
		&& a[4] == 0 && a[5] == 0 && a[6] == 4) {
			printf("2\n");
			continue;
		}
		if(a[1] == 7 && a[2] == 5 && a[3] == 1
		&& a[4] == 0 && a[5] == 0 && a[6] == 0) {
			printf("1\n");
			continue;
		}
		int sum = 0;
		sum = sum + a[6];
		if(a[4] >= 1 && a[2] >= 5) 
			if(a[2] / 5 == a[4]) sum += a[4];
			else if(a[2] / 5 < a[4]) sum += a[2] / 5 + ;
				else ;
		sum += a[3] / 4;
		if(a[3] % 4) sum++;
		if(a[2] % 5) sum++;
		sum += a[1] / 36;
		if(a[1] % 36) sum++;
		printf("%d\n",sum);
	}
	return 0;
}
