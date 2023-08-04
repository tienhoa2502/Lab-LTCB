#include <iostream>

using namespace std;


//- Đếm số lượng các chữ số trong một số
int demSLSo(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// - Tổng các chữ số trong một số
int tongCacChuSo(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

// - Tổng các chữ số lẻ
int tongLe(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        num /= 10;
    }
    return sum;
}

// - Tổng các chữ số chẵn
int tongChan(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        num /= 10;
    }
    return sum;
}

int main() {

    int choice;

    do {
        cout << "Lựa chọn yêu cầu" << endl;
        cout << "1. Số lượng các chữ số." << endl;
        cout << "2. Tổng các chữ số" << endl;
        cout << "3. Tổng các chữ số lẻ" << endl;
        cout << "4. Tổng các chữ số chẵn" << endl;
        cout << "5. Số đảo ngược" << endl;
        cout << "0. Thoát." << endl;
        cout << "Chọn yêu cầu: ";
        cin >> choice;

        switch (choice) {
            case 1:
            {
                int num;
                cout << "Nhập số nguyên: ";
                cin >> num;

                int soLuong = demSLSo(num);
                cout << "Số lượng chữ số trong " << num << " là: " << soLuong << endl;
                break;
            }
            case 2:
            {
                int num;
                cout << "Nhập số nguyên: ";
                cin >> num;

                int sum = tongCacChuSo(num);
                cout << "Tổng các chữ số trong " << num << " là: " << sum << endl;
                break;
            }
            case 3:
            {
                int num;
                cout << "Nhập số nguyên: ";
                cin >> num;

                int sum = tongLe(num);
                cout << "Tổng các chữ số lẻ trong " << num << " là: " << sum << endl;
                break;
            }
            case 4:
            {
                int num;
                cout << "Nhập số nguyên: ";
                cin >> num;

                int sum = tongChan(num);
                cout << "Tổng các chữ số chẵn trong " << num << " là: " << sum << endl;
                break;
            }
            case 5:
            {
                int num;
                cout << "Nhập số nguyên: "<< endl;
                cin >> num;
                int arr[10], i = 0;

                while (num != 0) {
                    arr[i] = num % 10;
                    num /= 10;
                    i++;
                }
                cout << "Số đảo ngược là: "<< endl;
                for (int j = 0; j<i; j++) {
                    cout << arr[j];
                }
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
