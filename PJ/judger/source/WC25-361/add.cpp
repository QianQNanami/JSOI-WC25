#include<bits/stdc++.h>
using namespace std;

int a[100010],b[100010][3];
int c[100010];//´ð°¸ 

int n,m;

int main(){
    
    cin>>n;
    for(int i=1;i<=n;i++){
    	scanf("%d",&a[i]);
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin >> b[i][1] >> b[i][2];
	}
	
	for(int i=2;i<=n;i++){
		a[i] = a[i] + a[i-1];
	}
	
	for(int i = 1;i <= m;i++){
		if(b[i][1] == 1){
			c[i] = a[b[i][2]];
		}else{
			c[i] = a[b[i][2]] - a[b[i][1]-1];
		}
	}
    
    for(int i = 1;i <= m;i ++){
    	cout << c[i] << endl;
	}
    
	return 0;
}

