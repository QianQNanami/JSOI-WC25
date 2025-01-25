#include<bits/stdc++.h>
using namespace std;
int n,k,m,a[100005],t[35],cnt,leng,ans = 1e9,fl;
bool f[35];
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);	
	cin >> n >> k >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		t[a[i]]++;
	}
	for(int i = 1;i <= m;i++){
		int al;
		cin >> al;
		if(al == 1){
			int p,v;
			cin >> p >> v;
			t[a[p]]--;
			a[p] = v;
			t[v]++;
		}
		else{
			for(int j = 1;j <= k;j++){
				if(t[j] == 0){
					cout << "-1" << endl;
					fl = 1;
					break;
				}
			}
			if(!fl){
				for(int j = 1;j <= n;j++){
					for(int l = j;l <= n;l++){
						leng++;
						if(!f[a[l]]){
							cnt++;
							f[a[l]] = true;
							if(cnt == k){
								ans = min(leng,ans);
								cnt = 0;
								leng = 0;
								break;
							}
						}
					}
					cnt = 0;
					leng = 0;	
					for(int j = 1;j <= k;j++){
						f[j] = false;
					}
				} 
				cout << ans << endl;	
				ans = 1e9;
			}
			fl = 0;
		}
	}
	return 0;
} 
