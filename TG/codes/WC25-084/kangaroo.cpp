#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//2 1 -2 4 5 
// 3 1 2 3 4 5 6 7 8 9 

ll n,ans=0;
ll num[450][450];
ll u[450][450];//受方 
ll v[450][450];//瓜受方 

void vFunc(int x,int y){
	ll nx=x,ny=y;
	for(;nx>=1&&ny<=n;){
		v[nx][ny]=num[nx][ny]+v[nx+1][ny-1];
		nx--;
		ny++;
	}
}

void uFunc(int x,int y){
	int uX=x,uY=y;
	for(;uX<=n||uY<=n;){
		u[uX][uY]=num[uX][uY]+u[uX-1][uY-1];
		uX++;
		uY++;
	}
}

void check(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<u[i][j]<<" ";
		}
		cout<<endl;
	}
}

void func(){
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			for(int k=1;i+k<=n&&j+k<=n;k++){

				ll bag=(u[i+k][j+k]-u[i-1][j-1])-(v[i][j+k]-v[i+k+1][j-1]);
//				cout<<" ["<<i<<","<<j<<"] "<<k<<"-->"<<bag<<endl;				
				ans=max(ans,bag);
			}
		}
	}
}

int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	
	memset(u,0,sizeof(u));
	memset(v,0,sizeof(v));
	
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>num[i][j];
			if(i==n||j==1){
				v[i][j]=num[i][j];
			}
			if(i==1||j==1){
				u[i][j]=num[i][j];
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		vFunc(i,2);
		vFunc(n-1,i);
	}
	for(int i=2;i<=n;i++){
		uFunc(2,i);
		uFunc(i,2);
	}
	
//   	check();    
    func();

    cout<<ans<<endl;
	
	

//
	return 0;
}
