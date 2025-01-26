#include<cstdio>
#include<cstring>
using namespace std;
int ans[70001];
int main(){
    int n1,n2,n3,n4,n5,n6,i=1;
    memset(ans,0,sizeof(ans));
    while(true){
    	scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6);
    	if(n1==0&&n2==0&&n3==0&&n4==0&&n5==0&&n6==0) break;
    	ans[i]+=n6;
    	if(n5){
    		ans[i]+=n5;
    		if(n1>=n5*11) n1-=n5*11;
    		else n1=0;
		}
		if(n4){
			ans[i]+=n4;
			if(n2>=n4*5) n2-=n4*5;
			else{
				while(n2>=5) n2-=5;
				if(n2){
					int t=36-n2*4;
					if(n1){
						if(n1>=t) n1-=t;
						else n1=0;
					}
				}
			}
		}
		if(n3){
			int t;
			if(n3<4){
				t=4-n3;
				ans[i]++;
			}
			else{
				t=n3%4;
				n3-=t;
				ans[i]+=n3/4+1;
				if(t==0) ans[i]--;
			}
			if(t==1){
				if(n2){
					n2--;
					t=5;
				}
				else t=9;
				if(n1){
					if(n1>=t) n1-=t;
					else n1=0;
				}
			}
			if(t==2){
				if(n2){
					if(n2>=3){
						n2-=3;
						t=6;
					}
					else{
						t=18-n2*4;
						n2=0;
					}
					if(n1){
						if(n1>=t) n1-=t;
						else n1=0;
					}
				}
			}
			if(t==3){
				if(n2){
					if(n2>=5){
						n2-=5;
						t=11;
					}
					else{
						t=27-n2*4;
						n2=0;
					}
					if(n1){
						if(n1>=t) n1-=t;
						else n1=0;
					}
				}
			}
		}
		if(n2){
			int t;
			if(n2<9){
				t=9-n2;
				ans[i]++;
			}
			else{
				t=n2%9;
				n2-=t;
				ans[i]+=n2/9+1;
				if(t==0) ans[i]--;
			}
			t*=4;
			if(n1){
				if(n1>=t) n1-=t;
				else n1=0;
			}
		}
		if(n1){
			if(n1>=36){
				int t=n1%36;
				ans[i]+=n1/36+1;
				if(t==0) ans[i]--;
			}
			else ans[i]++;
		}
		i++;
	}
	for(int j=1;j<=i-1;j++) printf("%d\n",ans[j]);
	return 0;
}
