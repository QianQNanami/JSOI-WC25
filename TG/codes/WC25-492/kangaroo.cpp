#include <iostream>
#include <stdlib.h>
#include <algorithm>
int d[50005];
int main(){
	freopen("kangaroo.in", "r", stdin);
	freopen("kangaroo.out", "w", stdout);
	int n;
	std::cin >> n;
	for(int i= 0; i< n; i ++){
		std::cin >>d[i];
	}
	std::sort(d, d + n);
//	for(int i= 0; i< n; i ++){
//		std::cout<<d[i];
//	}
	int j = n/2, ans = 0;
	for(int  i = n -1; i >= n/2 && j >=0; i--){
		while(2*d[j] > d[i] && j >=0) j--;
		if(j >=0){
			ans++;
			j--;
		}
	}
	std::cout << ans;
	return 0;
}
