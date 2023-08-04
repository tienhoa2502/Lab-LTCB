#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Nhập a: ";
    cin >> a;
    cout << "Nhập b: ";
    cin >> b;
    cout << "Nhập c: ";
    cin >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Phương trình có 2 nghiệm:\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);
        cout << "Phương trình có nghiệp kép:\n";
        cout << "x = " << x << endl;
    } else {
        cout << "Phương trình vô nghiệm" << endl;
    }

    return 0;
}
