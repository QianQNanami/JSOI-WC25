#include <bits/stdc++.h>
using namespace std;
long long a[100005][7],b[6][6];
int main(){
	long long i,y,j,n=0,s=0,x=0,f,f2;
	while(1>0){
		n++;
		s=0;
		for(i=1;i<=6;i++){
			cin>>a[n][i];
			if(a[n][i]==0){
				s++;
				if(s==6){
					return 0;
				}
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=6;j++){
			for(int p=1;p<=a[i][j];p++){
				for(int k=1;k<=6-j+1;k++){
					for(int l=1;l<=6-j+1;l++){
						f=0,f2=1;
						for(int t=k;t<=k+j;t++){
							for(int h=l;h<=l+j;h++){
								if(b[t][h]==1){
										f=1;
									break;
								}
							}
							if(f==1) break;
						}
						if(f==0){
							f2=0;
							for(int u=k;u<=k+j;u++){
								for(int y=l;y<=l+j;y++){
									b[u][y]=1;
								}	
							}
						}
					}
				}
				if(f2==1) s++;
				for(int g=1;g<=6;g++){
					for(int m=1;m<=6;m++){
						b[g][m]=0;
					}
				}
			}
		}
	}
	cout<<s;
	return 0;
}
