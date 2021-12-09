#include <iostream>

using namespace std;
// задача С
int main() {
    int y1, x1, y2, x2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3, y3, r, n = 0, now = 1, stx, sty, sy = y1, i = 0, p = 0;
    cin >> x3 >> y3 >> r;
    long fin = r * 4 + (r - 1) * (r - 1) * 4;
    stx = x3 - r;
    sty = y3;
    long a = abs(x2 - x1), b = abs((y2 - y1)), c = a * b;
    long long arr[a][c];
    while (x1 != x2 && y1 != y2){
        if (y1 < y2){
            arr[p] = x1;
            arr[p][i] = y1;
            y1++;
            i++;
        } else {
            x1++;
            y1 = sy;
        }
    }
    while (now != fin){
        i = 0;
        p = 0;
        if (arr[p] == stx && arr[i] == sty){
            n++;
        }
        if (now == 1){
            stx = stx + 1;
            sty = sty + (r - 1);
            now++;
        } else if (sty != y3 - (r - 1) && stx != x3){
            sty--;
            now++;
        } else if (sty != y3 - r && stx == x3){
            sty--;
            now++;
        } else if (stx != x3 && stx != x3 + (r - 1)){
            stx += 1;
            sty += r * 2 - 1;
            now++;
        } else {
            stx += 1;
            sty += r * 2;
            now++;
        }
    }
    cout << n;
    return 0;
}
