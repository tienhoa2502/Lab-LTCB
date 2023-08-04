#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int choice, n;
    int tich = 1;
    double sum = 0.0;

    do {
        cout << "Lựa chọn yêu cầu" << endl;
        cout << "1. Tính S = 1/2 + 1/4 +...+ 1/2n" << endl;
        cout << "2. Tính S = 1 + 1.2 + 1.2.3....n" << endl;
        cout << "3. Liệt kê các số nguyên tố nhỏ hơn N (N>100)" << endl;
        cout << "4. Tính tổng các chữ số trong 1 số." << endl;
        cout << "0. Thoát." << endl;
        cout << "Chọn yêu cầu: ";
        cin >> choice;
        cout << "Nhập N = ";
        cin >> n;

        switch (choice) {
            case 1:
            {
                for (int i = 1; i <= n; i++) {
                 sum += 1.0 / (2 * i);
                }
                cout << "Tổng S = " << sum << endl;
                break;
            }
            case 2:
            {
                for (int i = 1; i <= n; i++) {
                tich *= i;  
                sum += 1.0 / tich;
                }
                cout << "Tổng S = " << sum << endl;
                break;
            }
            case 3:
            {
                if (n < 2) {
                cout << "Không có số nguyên tố nào nhỏ hơn " << n << endl;
                } else {
                    cout << "Các số nguyên tố nhỏ hơn " << n << " là: ";
                    for (int i = 2; i < n; i++) {
                        bool isPrime = true;
                        for (int j = 2; j * j <= i; j++) {
                            if (i % j == 0) {
                                isPrime = false;
                                break;
                            }
                        }
                        if (isPrime) {
                        cout << i << " ";
                        }
                    }       
                    cout << endl;
                }
                break;
            }
            case 4:
            {
                while (n != 0) {
                int digit = n % 10;
                sum += digit;
                n /= 10;
                }
                cout << "Tổng các chữ số của n là: " << sum << endl;
                break;
            }
            case 0:
                cout << "Thoát" << endl;
                break;
            default:
                cout << "Vui lòng chọn lại" << endl;
        }
    } while (choice != 0);

    return 0;
}
