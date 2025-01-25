#include <iostream>
#include <stdlib.h>
#include <time.h>
int ar[5005];
int main(){
	freopen("story.in", "r", stdin);
	freopen("story.out", "w", stdout);
	int n, k;
	srand(time(0));
	std::cin >> n >> k;
	for(int i=0;i<n; i++){
		std::cout << rand()%2 ? k : -1;
	}
}
