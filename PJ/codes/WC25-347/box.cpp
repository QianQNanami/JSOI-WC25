#include <bits/stdc++.h>
using namespace std;
int a[7] , x , y , z;
int main (){
	while (1){
		bool ff = false;
		int all = 0;
		for(int i = 1;i <= 6;i ++){
			scanf("%d" , &a[i]);
			all += a[i] * i * i;
			if (a[i])	ff = true;
		}
		if (!ff) break;	
		ff = false;
		int cnt = 0;
		cnt += a[6];
		all -= cnt * 36;
		cnt += all / 36;
		all %= 36;
		if (all){
			cnt ++;
		}
		printf ("%d" , cnt);
	}
	return 0;
}

