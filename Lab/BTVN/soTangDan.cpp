#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Nhập số thứ nhất a: ";
    cin >> a;

    cout << "Nhập số thứ hai b: ";
    cin >> b;

    cout << "Nhập số thứ ba c: ";
    cin >> c;

    if (a > b) {
        int sosanh = a;
        a = b;
        b = sosanh;
    }

    if (a > c) {
        int sosanh = a;
        a = c;
        c = sosanh;
    }

    if (b > c) {
        int sosanh = b;
        b = c;
        c = sosanh;
    }

    cout << "Thứ tự tăng dần: " << a << ", " << b << ", " << c << endl;

    return 0;
}
