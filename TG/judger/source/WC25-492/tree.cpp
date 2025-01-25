#include <iostream>
#include <stdlib.h>
#include <vector>
int arr[100005], f[100005];
std::vector< std::vector<int> > road;
int Vis(int now){
	for(int v : road[now]){
		arr[now] += Vis(v);
	}
	return arr[now];
}
int main(){
	freopen("tree.in", "r", stdin);
	freopen("tree.out", "w", stdout);
	int n, t, fa, root;
	std::cin >> n;
	road.resize(n +3);
	for(int i = 1; i <= n ; i ++){
		std::cin >> t >> fa;
		arr[i] = t;
		road[fa].push_back(i);
		f[i] = fa;
	}
	root = road[0][0];
	Vis(root);
	int val = arr[root] / 3, w = 0, spec = 0;
	for(int i = 1; i <= n; i++){
		if(arr[i] == val){
			w++;
			for(int s = f[i]; s != 0; s = f[s]){
				if(arr[s] == 2 * val){
					spec ++;
				}
			}
		}
	}
	if(arr[root] != 0){
		std::cout << w * (w - 1) / 2 + spec;
	}
	else{
		std::cout << (w-1)*(w-2)/2 + spec;
	}
	return 0;
}
