#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[10000], sum = 0, b[10000], x;
	while(a[1] == 0&& a[2] == 0&&a[3] == 0&&a[4] == 0 && a[5] == 0 && a[6] == 0){
		for (int i = 1; i <= 6; i++){
			cin >> a[i];
			sum +=a[i] * i * i;
		}
		b[x] = sum / 36;
		if (sum % 36 != 0){
			b[x] += 1;
		}
		sum = 0;
		x++;
	}
	return 0;
}
