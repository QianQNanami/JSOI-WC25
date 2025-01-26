#include<bits/stdc++.h>
#define Writen using
#define by namespace
#define JSOI_WC25_396 std
Writen by JSOI_WC25_396;
string s;
int cnt;
int main(){
	while(getline(cin,s)){
		if(s=="0 0 0 0 0 0"){
			return 0;
		}
		for(int i=0;i<s.size();i++){
			int flag8=0,flag6=0,flag4=0,flag4_2=0;
			if(s[i]==' '){
				continue;
			}
			else if(i==10){
				if(s[i]-'0'==0){
					continue;
				}
				cnt+=(s[i]-'0');
			}
			else if(i==8){
				if(s[i]-'0'==0){
					continue;
				}
				cnt+=(s[i]-'0');
				if(s[i]-'0'>0){
					flag8=(s[i]-'0')*11;
				}
			}
			else if(i==6){
				if(s[i]-'0'==0){
					continue;
				}
				cnt+=(s[i]-'0');
				if(s[i]-'0'>0){
					flag6=(s[i]-'0')*20;
				}
			}
			else if(i==4){
				if(s[i]-'0'==0){
					continue;
				}
				cnt+=(s[i]-'0')/4;
				if((s[i]-'0')%4>0){
					if((s[i]-'0')%4==3){
						flag4=(s[i]-'0')%4*27;
						flag4_2=27;
					}
					else if((s[i]-'0')%4==2){
						flag4=(s[i]-'0')%4*18;
						flag4_2=18;
					}
					else if((s[i]-'0')%4==1){
						flag4=(s[i]-'0')%4*9;
						flag4_2=9;
					}
				}
			}
			else if(i==2){
				if(s[i]-'0'==0){
					continue;
				}
				if(flag6!=0){
					int mem=(s[i]-'0')*20;
					if(mem>flag6){
						mem=(mem-flag6)/20;
						if(flag4!=0){
							if(mem>flag4){
								cnt+=(mem-flag4)*(36-flag4_2);
							}
							else{
								flag4-=mem;
							}
						}
					}
					else{
						flag6-=mem;
					}
				}
			}
			else if(i==0){
				if(s[i]-'0'==0){
					continue;
				}
				if(flag8!=0){
					int mem=(s[i]-'0')*11;
					if(mem>flag8){
						mem=(mem-flag8)/20;
						if(flag6!=0){
							if(mem>flag6){
								mem=(mem-flag6)/20;
								if(flag4!=0){
									if(mem>flag4){
										cnt+=(mem-flag4)*(36-flag4_2);
									}
									else{
										continue;
									}
								}
							}
							else{
								continue;
							}
						}
					}
					else{
						continue;
					}
				}
			}
		}
		cout<<cnt<<endl;
		cnt=0;
	}
	return 0;
} 
