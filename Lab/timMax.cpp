#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Nhập ba số: ";
    cin >> num1 >> num2 >> num3;

    int maxNumber = num1;

    if (num2 > maxNumber) {
        maxNumber = num2;
    }

    if (num3 > maxNumber) {
        maxNumber = num3;
    }

    cout << "Số lớn nhất là: " << maxNumber << endl;
    return 0;
}
