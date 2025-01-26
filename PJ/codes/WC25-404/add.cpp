#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	} 
	int m;
	cin >> m;
	while(m--){
		int x,y;
		int maxx=0;
		cin >> x >> y;
		for(int i=x;i<=y;i++){
			maxx+=a[i];
		}
		cout << maxx;
		cout << endl;
	}
	return 0;
}
