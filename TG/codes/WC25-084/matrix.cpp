#include<bits/stdc++.h>
using namespace std;
int n;
int s[123456789];
void check(){
	for(int i=1;i<=n;i++){
		cout<<s[i]<<" ";
	}
}
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
//eg 8 2 5 7 6 9 8 4 2 
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>s[i];
	} 
	sort(s,s+n+1);
//	check();
    int cont=0;
    int point=2;
    for(int i=1;i<n;i++){
    	bool jud=false;
        for(int j=point+1;j<=n&&(!jud);j++){
        	if(s[j]>s[i]*2&&s[i]!=-1){
        		cont++;
//           		cout<<s[i]<<"->"<<s[j]<<endl; 		
        		s[j]=-1;
                point=j;
        		jud=true;
			}
		}
	}
	cout<<cont<<endl;
	//
	return 0;
}
