#include<iostream>
#include<queue>
using namespace std;
int n,m,fx,fy,ex,ey;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int v[310][310];
char world[310][310];
struct t{
	int x,y,k;
};
queue<t> q;
void bfs(){
	for(;q.empty()==0;){
		t f = q.front();
		v[f.x][f.y]==1;
		q.pop();
		if(f.x==ex&&f.y==ey){
			cout<<f.k;
			return;
		}
		t s = f;
		for(int i = 0;i<4;i++){
			s = f;s.x+=dx[i];s.y+=dy[i];s.k++;
			if(world[s.x][s.y]=='E'||world[s.x][s.y]=='T'&&v[s.x][s.y]==0)q.push(s);
		}
		for(int i = 0;i<4;i++){
			s = f;s.x+=dx[i];s.y+=dy[i];s.k+=2;
			if(world[s.x][s.y]=='B'&&v[s.x][s.y]==0)q.push(s);
		}
	}
	cout<<-1;
}
int main(){
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			cin>>world[i][j];
			if(world[i][j]=='R'||world[i][j]=='S')v[i][j] = 1;
			if(world[i][j]=='Y'){
				fx = i;
				fy = j;
			}
			if(world[i][j]=='T'){
				ex = i;
				ey = j;
			}
			
		}
	}
	//cout<<fx<<" "<<fy<<" "<<ex<<" "<<ey<<" ";
	t fr = {fx,fy,0};
	q.push(fr);
	bfs();
	return 0;
}
/*
3 4
YBEB
EERE
SSTE

TBBBBBBBBBBBBBBBBBBB
ESSSSSSSSSSSSSSSSSBS
ESBBBBBBBBBBBBBBBBBS
ESBSSSSSSSSSSSSSSSSE
ESBSEEEEEEEEEEEEEBEE
ESBSEEEEEEEEEEEEEBSE
ESBSSSSSSSSSSSSSSBSE
ESBSSEEYBBBBBBBBSBSE
ESBSSESSSSSSSSRBSBSE
ESBSSESSSSSSSSSBEBSE
ESBSSERRRRRRRRRRRRRE
ESBSSEEEEBBBBBBBBESE
ESBSSSSSSSSSSSSSBESE
ESBSEEEEEEEEEEEEEESE
ESBSESSSSSSSSSSSSSSE
ESBSEEBBBBBBBEEEBESE
ESBSSSSSSSSSSSSSSESE
ESBEEEEEEEEEEEEEEESE
ESSSSSSSSSSSSSSSSSSE
EEEEEEEEEEEEEEEEEEEE
*/
