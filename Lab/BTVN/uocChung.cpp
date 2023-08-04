#include <iostream>
using namespace std;

int main() {
    int a, b;
    int ucln = 1;

    cout << "Nhập hai số nguyên a: ";
    cin >> a;
    cout << "Nhập hai số nguyên b: ";
    cin >> b;

    int minNum = (a < b) ? a : b;

    for (int i = 1; i <= minNum; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }

    cout << "Ước chung lớn nhất của " << a << " và " << b << " là: " << ucln << endl;

    return 0;
}
