#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[10], ans;
int main(){
	while(1){
		ans = 0;
		bool f = false;
		for(int i = 1;i <= 6;i++){
			cin >> a[i];
			if(a[i]){
				f = true;
			}
		}
		if(!f){
			return 0;
		}
		int s = 0, num = 0;
		ans += a[6] + a[5] + a[4];
		num = a[1] - a[5] * 11;
		a[1] = max(0, num);
		s = a[4] * 20;
		if(s > a[2] * 4){
			s -= a[2] * 4;
			a[2] = 0;
			num = a[1] - s;
			a[1] = max(0, num);
			s = 0;
		}
		else if(a[2] * 4 > s){
			a[2] -= s / 4;
			s = 0;
		}
		else{
			a[2] = 0;
			s = 0 ;
		}
		ans += a[3] / 4 + 1;
		a[3] %= 4;
		if(a[3] == 1){
			s = 5;
			if(a[2] >= s){
				a[2] -= s;
				s = 0;
			}
			else{
				s -= a[2];
				a[2] = 0;
			}
			s *= 4;
			s += 7;
			num = a[1] - s;
			a[1] = max(0, num);
		}
		else if(a[3] == 2){
			s = 3;
			if(a[2] >= s){
				a[2] -= s;
				s = 0;
			}
			else{
				s -= a[2];
				a[2] = 0;
			}
			s *= 4;
			s += 6;
			num = a[1] - s;
			a[1] = max(0, num);
		}
		else if(a[3] == 3){
			s = 1;
			if(a[2] >= s){
				a[2] -= s;
				s = 0;
			}
			else{
				s -= a[2];
				a[2] = 0;
			}
			s *= 4;
			s += 5;
			num = a[1] - s;
			a[1] = max(0, num);
		}
		else{
			ans--;
		}
		ans += a[2] / 9;
		a[2] %= 9;
		if(a[2] != 0){
			ans++;
			s = 36 - a[2] * 4;
			num = a[1] - s;
			a[1] = max(0, num);
		}
		ans += a[1] / 36;
		a[1] %= 36;
		if(a[1] != 0){
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
