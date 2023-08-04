#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Nhập giá trị của a: ";
    cin >> a;
    cout << "Nhập giá trị của b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "Phương trình vô số nghiệm." << endl;
        } else {
            cout << "Phương trình vô nghiệm." << endl;
        }
    } else {
        double x = -b / a;
        cout << "Nghiệm của phương trình là: " << x << endl;
    }

    return 0;
}
