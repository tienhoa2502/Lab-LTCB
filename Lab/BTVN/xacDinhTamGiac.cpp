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

    if (a + b > c && a + c > b && b + c > a) {
        cout << "a, b, c là 3 cạnh của tam giác";

        if (a == b && b == c) {
            cout << " đều." << endl;
        } else if (a == b || a == c || b == c) {
            cout << " cân." << endl;
        } else {
            double max_side = max(a, max(b, c));
            if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
                cout << " vuông." << endl;
            } else if (a*a > b*b + c*c || b*b > a*a + c*c || c*c > a*a + b*b) {
                cout << " tù." << endl;
            } else {
                cout << " nhọn." << endl;
            }
        }
    } else {
        cout << "a, b, c không phải là 3 cạnh của tam giác" << endl;
    }

    return 0;
}
