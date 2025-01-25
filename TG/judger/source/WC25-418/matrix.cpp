#include <bits/stdc++.h>
using namespace std;
int n,a[410][410],maxx = -3000;
int f(int j,int k,int i){
	int s = 0;
	for(int x = j,y = k;x<j+i && y<k+i;x++,y++){
		s+=a[x][y];
	}
	for(int x = j+i-1,y = k;x>=j && y<k+i;x--,y++){
		s-=a[x][y];
	}
	return s;
}
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    cin >> n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
        	cin >>a[i][j];
        }
    }
    for(int i = 2;i<=n;i++){
    	for(int j = 1;j+i-1<=n;j++){
            for(int k = 1;k+i-1<=n;k++){
                int s = f(j,k,i);
                if(s>maxx)maxx = s;
            }
		}
	}
	cout <<maxx;
	return 0;
}
