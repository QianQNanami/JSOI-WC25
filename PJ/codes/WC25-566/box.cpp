#include <bits/stdc++.h>
using namespace std;
int a[70005];
int total[70005];
int main (){
    string s;
    int cnt = 0;
    while (true){
        getline(cin,s);
        if (s == "0 0 0 0 0 0"){
            break;
        }
        for (int i = 0; i < s.size();i++){
            if (i % 2 == 0){
                a[i] = s[i];
            }
            int sum = 0;
            for (int j = 1+cnt; j <= 6+cnt;j++){
                if (a[j] != 0){
                    sum += (a[j] - 48)*(j-cnt)*(j-cnt);
                }
            }
            total[cnt/6] = sum/36+1;
        }
        cnt+= 6;
    }
    for (int i = 0; i < cnt/6;  i++){
        cout << total[i] << endl;
    }
    return 0;
}
