#include <iostream>

using namespace std;

int main() {
    long a, b;
    cin >> a >> b;
    if ((a + b) % 2 > 0) {
        // ����� ��������� �� ������� �� ��� - �� ������
        cout << "-1";
    }
    else if (a == b) {
        if (a >= 0) {
            // �� ����� ����
            cout << "0";
        } else {
            // �� �������� ����� - 3
            cout << 3 << endl;
            // ������ ����� - ���������, �������
            long y = (b + a - 2) / 2;
            long x = y + 2;
            cout << x << " " << y << " H" << endl;
            // ������ ������ �� 1 1
            cout << "1 1 H" << endl;
            // ������ ������ �� 2 0
            cout << "2 0 V" << endl;
        }
    }
    else if (a > b) { 
        if (abs(a) > abs(b)) {
            // 1� �������� �� ���� - ���� ��������������
            long r = (a + b) / 2;
            cout << 1 << endl << r << " " << r << " H";
        }
        else {
            // 2� �������� �� ���� - ��� �����
            cout << 2 << endl;
            // ������ ������ �� 1 1, ����� �����
            cout << "1 1 H" << endl;
            // ������ �������
            long y = (b - a + 2) / 2;
            long x = 2 - y;
            cout << x << " " << y << " V" << endl;
        }
    }
    else
    { // a < b
        if (abs(a) < abs(b)) {
            // 4� �������� �� ���� - ���� ������������ �������
            cout << 1 << endl;
            long r = (a + b) / 2;
            cout << r << " " << r << " V";
        }
        else {
            // 3� �������� - ��� �����
            cout << 2 << endl;
            // ������ ������ �� 1 1, ����� �����
            cout << "1 1 V" << endl;
            // ������ �������
            long y = (b - a + 2) / 2;
            long x = 2 - y;
            cout << x << " " << y << " H" << endl;
        }
    }
    return 0;
}
