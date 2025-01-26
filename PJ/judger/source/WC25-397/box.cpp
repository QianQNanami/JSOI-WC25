#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f,s=0,ans;
    while(cin>>a>>b>>c>>d>>e>>f){
        if(a!=0&&b!=0&&c!=0&&d!=0&&e!=0&&f!=0){
            s=0;
            s+=a*1+b*4+c*9+d*16+e*25+f*36;
            if(s%36!=0){
                ans=s/36+1;
            }
            else{
                ans=s/36;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
