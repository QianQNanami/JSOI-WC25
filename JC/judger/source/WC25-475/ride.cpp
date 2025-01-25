#include<bits/stdc++.h>
using namespace std;
int a[1000+5],b[1000+5];
string x,y;
int main(){
    cin>>x>>y;
    int l=x.size(),t=1;
    for(int i=0;i<l;i++){
        if(x[i]=='A'){a[t]=1;t++;continue;}
        if(x[i]=='B'){a[t]=2;t++;continue;}
        if(x[i]=='C'){a[t]=3;t++;continue;}
        if(x[i]=='D'){a[t]=4;t++;continue;}
        if(x[i]=='E'){a[t]=5;t++;continue;}
        if(x[i]=='F'){a[t]=6;t++;continue;}
        if(x[i]=='G'){a[t]=7;t++;continue;}
        if(x[i]=='H'){a[t]=8;t++;continue;}
        if(x[i]=='I'){a[t]=9;t++;continue;}
        if(x[i]=='J'){a[t]=10;t++;continue;}
        if(x[i]=='K'){a[t]=11;t++;continue;}
        if(x[i]=='L'){a[t]=12;t++;continue;}
        if(x[i]=='M'){a[t]=13;t++;continue;}
        if(x[i]=='N'){a[t]=14;t++;continue;}
        if(x[i]=='O'){a[t]=15;t++;continue;}
        if(x[i]=='P'){a[t]=16;t++;continue;}
        if(x[i]=='Q'){a[t]=17;t++;continue;}
        if(x[i]=='R'){a[t]=18;t++;continue;}
        if(x[i]=='S'){a[t]=19;t++;continue;}
        if(x[i]=='T'){a[t]=20;t++;continue;}
        if(x[i]=='U'){a[t]=21;t++;continue;}
        if(x[i]=='V'){a[t]=22;t++;continue;}
        if(x[i]=='W'){a[t]=23;t++;continue;}
        if(x[i]=='X'){a[t]=24;t++;continue;}
        if(x[i]=='Y'){a[t]=25;t++;continue;}
        if(x[i]=='Z'){a[t]=26;t++;continue;}
    }
    /* cout<<"debug:\n";
    for(int i=1;i<t;i++)cout<<a[i]<<' ';
    */
    int ll=y.size(),tt=1;
    for(int i=0;i<ll;i++){
        if(y[i]=='A'){b[tt]=1;tt++;continue;}
        if(y[i]=='B'){b[tt]=2;tt++;continue;}
        if(y[i]=='C'){b[tt]=3;tt++;continue;}
        if(y[i]=='D'){b[tt]=4;tt++;continue;}
        if(y[i]=='E'){b[tt]=5;tt++;continue;}
        if(y[i]=='F'){b[tt]=6;tt++;continue;}
        if(y[i]=='G'){b[tt]=7;tt++;continue;}
        if(y[i]=='H'){b[tt]=8;tt++;continue;}
        if(y[i]=='I'){b[tt]=9;tt++;continue;}
        if(y[i]=='J'){b[tt]=10;tt++;continue;}
        if(y[i]=='K'){b[tt]=11;tt++;continue;}
        if(y[i]=='L'){b[tt]=12;tt++;continue;}
        if(y[i]=='M'){b[tt]=13;tt++;continue;}
        if(y[i]=='N'){b[tt]=14;tt++;continue;}
        if(y[i]=='O'){b[tt]=15;tt++;continue;}
        if(y[i]=='P'){b[tt]=16;tt++;continue;}
        if(y[i]=='Q'){b[tt]=17;tt++;continue;}
        if(y[i]=='R'){b[tt]=18;tt++;continue;}
        if(y[i]=='S'){b[tt]=19;tt++;continue;}
        if(y[i]=='T'){b[tt]=20;tt++;continue;}
        if(y[i]=='U'){b[tt]=21;tt++;continue;}
        if(y[i]=='V'){b[tt]=22;tt++;continue;}
        if(y[i]=='W'){b[tt]=23;tt++;continue;}
        if(y[i]=='X'){b[tt]=24;tt++;continue;}
        if(y[i]=='Y'){b[tt]=25;tt++;continue;}
        if(y[i]=='Z'){b[tt]=26;tt++;continue;}
    }
    /* cout<<"debug:\n";
    for(int i=1;i<tt;i++)cout<<b[i]<<' ';
    */
    int th=1,thh=1;
    for(int i=1;i<t;i++)th*=a[i];
    for(int i=1;i<tt;i++)thh*=b[i];
    if(th%47==thh%47)cout<<"GO\n";
    else cout<<"STAY\n";
    return 0;
}
