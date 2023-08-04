#include <iostream>
#include <conio.h>
using namespace std;

bool soNguyenTo(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;
    cout << "Nhập một số nguyên dương: ";
    cin >> num;

    if (soNguyenTo(num)) {
        cout << num << " là số nguyên tố." << endl;
    } else {
        cout << num << " không là số nguyên tố." << endl;
    }

    return 0;
}

