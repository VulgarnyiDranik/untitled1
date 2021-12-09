#include <iostream>

using namespace std;

int main() {
    long a, b;
    cin >> a >> b;
    if ((a + b) % 2 > 0) {
        // сумма координат не делится на два - не попадём
        cout << "-1";
    }
    else if (a == b) {
        if (a >= 0) {
            // на линии луча
            cout << "0";
        } else {
            // на обратной линии - 3
            cout << 3 << endl;
            // первое слева - последнее, считаем
            long y = (b + a - 2) / 2;
            long x = y + 2;
            cout << x << " " << y << " H" << endl;
            // первое всегда на 1 1
            cout << "1 1 H" << endl;
            // второе всегда на 2 0
            cout << "2 0 V" << endl;
        }
    }
    else if (a > b) { 
        if (abs(a) > abs(b)) {
            // 1й квадрант от луча - одно горизонтальное
            long r = (a + b) / 2;
            cout << 1 << endl << r << " " << r << " H";
        }
        else {
            // 2й квадрант от луча - два нужно
            cout << 2 << endl;
            // первое всегда на 1 1, чтобы ближе
            cout << "1 1 H" << endl;
            // второе считаем
            long y = (b - a + 2) / 2;
            long x = 2 - y;
            cout << x << " " << y << " V" << endl;
        }
    }
    else
    { // a < b
        if (abs(a) < abs(b)) {
            // 4й квадрант от луча - одно вертикальное зеркало
            cout << 1 << endl;
            long r = (a + b) / 2;
            cout << r << " " << r << " V";
        }
        else {
            // 3й квадрант - два нужно
            cout << 2 << endl;
            // первое всегда на 1 1, чтобы ближе
            cout << "1 1 V" << endl;
            // второе считаем
            long y = (b - a + 2) / 2;
            long x = 2 - y;
            cout << x << " " << y << " H" << endl;
        }
    }
    return 0;
}
