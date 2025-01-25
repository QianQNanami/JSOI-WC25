#include<bits/stdc++.h>
using namespace std;
int n,a[50005],cnt,now,nowi;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a + 1,a + n + 1);
	now = n;
	for(int i = n;i >= 1;i--){
		for(int j = now;j >= 1;j--){
			if(a[j] * 2 <= a[i] && a[j]){
				cnt++;
				now = j - 1;
				a[j] = 0;
				break;
			}
		}
	} 
	cout << cnt << endl;
	return 0;
}
