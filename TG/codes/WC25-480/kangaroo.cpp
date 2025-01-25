/*
2 2 4 5 6 7 8 9
2 5 6 7 8 9
 1 2 3 4 5 6 6 7 8 20
3
4
8
2 5 7 6 9 8 4 2
2 2 4 5 6 7 8 9
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,ans;
int num[500006];
bool f[500006];
signed main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin >> n;
	memset(f,false,sizeof(f));
	for(int i = 1;i <= n;i++){
		cin >> num[i];
	}
	sort(num + 1,num + 1 + n);
	for(int i = n;i >= 1;i--){
		for(int j = i;j >= 1;j--){
			if(num[j] * 2 <= num[i] && num[j + 1] * 2 > num[i] && f[j] == false){
				ans++;
				f[j] = true;
				f[i] = true;
				//cout << num[i] << " " <<num[j] <<endl;
			}
		}
	}
//	int lft = 1;
//	int rgt = n;
//	while(rgt < lft){
//		cout << rgt << endl;
////		if(f[1] == true){
////			cout << ans << endl;
////			return 0;
////		}
//		if(num[lft] * 2 <= num[rgt] && f[lft + 1] == false){
//			lft++;
//		}
//		cout << lft << " " << rgt <<endl;
//		if(num[lft] * 2 <= num[rgt] && num[lft + 1] * 2 > num[rgt]){
//			f[lft] = true;
//			f[rgt] = true;
//			rgt--;
//			lft = 1;
//			ans++; 
//		}
//	}
	cout << ans <<endl;
	return 0;
}
/*
7
 5 7 6 9 8 4 2
2 2 4 6  7 8 9
*/
