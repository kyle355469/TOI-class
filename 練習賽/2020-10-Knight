#include <iostream>
#include <queue>
#include <iomanip>
int chess[1000][1000];
int edx, edy;
int dx[8] = {1, 1, 2, 2, -1, -1, -2, -2};
int dy[8] = {2, -2, 1, -1, 2, -2, 1, -1};

struct point{
    int x;
    int y;
} p;
using namespace std;
int main(){
    int n, m, stx, sty;
    cin >> n >> m >> stx >> sty >> edx >> edy;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            chess[i][j] = -1;
        }
    }
    chess[stx][sty] = 0;
    queue<point> Q;
    Q.push(point{stx, sty});
    int check;
    while(!Q.empty()){
        point nowp = Q.front();
        Q.pop();
        for(int i = 0; i < 8; i++){
            int newx = nowp.x + dx[i];
            int newy = nowp.y + dy[i];
            if(newx >= 0 && newx < n &&
            newy >= 0 && newy < m && chess[newx][newy] == -1){
                chess[newx][newy] = chess[nowp.x][nowp.y] + 1;
                if(chess[edx][edy] != -1){
                    check = 1;
                    break;
                }
                Q.push(point{newx, newy});
            }
        }
        if(check) break;
    }
    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << setw(2) << chess[i][j];
        }
        cout << endl;
    }*/
    cout << chess[edx][edy];
}
