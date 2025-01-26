#include<iostream>
#include<queue>

using namespace std;

struct point{
    int x;
    int y;
    const point operator +(const point & other) const{
        point p;
        p.x = x + other.x;
        p.y = y + other.y;
        return p;
    }
    const bool operator ==(const point & other) const{
        return x == other.x && y == other.y;
    }
};

char a[301][301], c;
int n, m, t[301][301];
queue<point> q;
point begin_point, end_point;
const point add[4] = {{0, -1}, {-1, 0}, {1, 0}, {0, 1}};

bool out_of_map(point p){
    return p.x > n || p.y > m || p.x <= 0 || p.y <= 0;
}

int main(){
    scanf("%d%d", &n, &m);
    for(int i = 1;i <= n;i++){
        scanf("%c", &c);
        for(int j = 1;j <= m;j++){
            scanf("%c", &c);
            a[i][j] = c;
            if(c == 'Y') begin_point.x = i, begin_point.y = j;
            if(c == 'T') end_point.x = i, end_point.y = j;
        }
    }
    q.push(begin_point);
    while(!q.empty()){
        point pt = q.front();
        q.pop();
        if(pt == end_point) continue;
        for(int i = 0;i < 4;i++){
            point pa = pt+add[i];
            int w = (a[pa.x][pa.y] == 'B' ? 2 : 1);
            if(out_of_map(pa)) continue;
            if(a[pa.x][pa.y] == 'R' || a[pa.x][pa.y] == 'S') continue;
            if(t[pa.x][pa.y]) (t[pa.x][pa.y] = min(t[pa.x][pa.y], t[pt.x][pt.y]+w));
            else (t[pa.x][pa.y] = t[pt.x][pt.y]+w, q.push(pa));
        }
    }
    printf("%d", t[end_point.x][end_point.y]);
}
