#include<bits/stdc++.h>
using namespace std;

int a[10], sum[10], ans, s;

int main(){
	while(1){
		memset(sum, 0, sizeof(sum));
		s = 0;
		for(int i = 1;i <= 6;i++){
			cin >> a[i];
		}
		if(a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 0 && a[6] == 0){
			continue;
		}
		for(int i = 1;i <= 6;i++){
			sum[i] = a[i] * (i * i);
			s += sum[i];
		}
		ans = a[6];
		if(s % 36 == 0) ans = s / 36;
		else ans = s / 36 + 1;
		cout << ans << "\n";
	}
	return 0;
}
