#include <iostream>

using namespace std;

int a() { // (long a, long b) {
    long a, b;
    cin >> a >> b;
    if ((a + b) % 2 != 0) {
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
            // второе считаем
            long y = (b - a + 2) / 2;
            long x = 2 - y;
            cout << x << " " << y << " H" << endl;
            // первое всегда на 1 1, чтобы ближе
            cout << "1 1 V" << endl;
        }
    }
    return 0;
}

int amain() {
    //cout << endl << "Test: 10, 5 = -1" << endl;
    //a(10, 5);
    //cout << endl << "Test: 4, 4 = 0" << endl;
    //a(4, 4);
    //cout << endl<< "Test: 5, -1 = 2 2 H" << endl;
    //a(5, -1);
    //cout << endl << "Test: 0, -2 = 1 1 H, 2 0 V" << endl;
    //a(0, -2);
    //cout << endl << "Test: 2, -2 = 1 1 H, 3 -1 V" << endl;
    //a(2, -2);
    //cout << endl << "Test: -2 -2 = -1 -3 H | 1 1 H | 2 0 V" << endl;
    //a(-2, -2);
    //cout << endl << "Test: -2 4 = 1 1 V" << endl;
    //a(-2, 4);
    //cout << endl << "Test: -2 0 = 1 1 V | 0 2 H" << endl;
    //a(-2, 0);
    //cout << endl << "Test: -2 2 = 1 1 V | -1 3 H" << endl;
    //a(-2, 2);

    return 0;
}
