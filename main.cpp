#include <iostream>

using namespace std;

int main() {
    int y1, x1, y2, x2;
    cin >> x1 >> y1 >> x2 >> y2;
    long x3, y3, r, n = 0, now = 1, stx, sty, sy = y1, sx = x1;
    cin >> x3 >> y3 >> r;
    long fin = r * 4 + (r - 1) * (r - 1) * 4 + 1;
    stx = x3 - r;
    sty = y3;
    while (now <= fin){
        x1 = sx;
        y1 = sy;
        while (x1 != x2 && y1 != y2){
            if (x1 == stx && y1 == sty){
                n += 1;
            }
            if (y1 < y2){
                y1 += 1;
            }
            if (y1 == y2){
                x1++;
                y1 = sy;
            }
        }
        if (now == 1){
            stx = stx + 1;
            sty = sty + (r - 1);
            now++;
        } else if (now == fin - 1) {
            stx += 1;
            sty = y3;
            now += 1;
        } else if (sty != y3 - (r - 1) || stx != x3){
            sty -= 1;
            now += 1;
        } else if (sty != y3 - r && stx == x3){
            sty -= 1;
            now += 1;
        } else if (stx != x3 && stx != x3 + (r - 1)){
            stx += 1;
            sty += r * 2 - 1;
            now += 1;
        } else {
            stx += 1;
            sty += r * 2;
            now += 1;
        }
    }
    cout << n;

    return 0;
}