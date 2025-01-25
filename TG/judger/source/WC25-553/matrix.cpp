#include <bits/stdc++.h>
using namespace std;
int a[405][405];
int find(int n){
    int tmp=INT_MIN;
    for(int len=2;len<=n;len++){
        for (int i=0;i<=n-len;i++){
            for (int j=0;j<=n-len;j++){
                int sum1=0,sum2=0;
                for (int k=0;k<len;k++){
                    sum1+=a[i+k][j+k];
                    sum2+=a[i+k][j+len-1-k];
                }
                int sum=sum1-sum2;
                tmp=max(tmp,sum);
            }
        }
    }
    return tmp;
}
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		cin>>a[i][j];
		}
	}
    int ans=find(n);
    cout<<ans<<endl;
    return 0;
}
