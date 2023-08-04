#include <iostream>
#include <cctype>

using namespace std;

// Hàm nhập mảng
void nhapMang(int a[], int& n) {
    cout << "Nhập số lượng: ";
    cin >> n;

    cout << "Nhập " << n << " phần tử:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

// Hàm xuất mảng
void xuatMang(int a[], int n) {
    cout << "Mảng: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Hàm xuất kí tự hoa
void xuatKiTuHoa(const string& str) {
    cout << "Cac ki tu in hoa trong chuoi la: ";
    for (char ch : str) {
        if (isupper(ch)) {
            cout << ch << " ";
        }
    }
    cout << endl;
}

// Đảo kí tự chuỗi
void reverseString(string& str) {
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {

    int choice;

    do {
        cout << "=== Lựa chọn yêu cầu ===" << endl;
        cout << "1. Nhập/Xuất mảng." << endl;
        cout << "2. Xuất kí tự in hoa trong chuỗi" << endl;
        cout << "3. Đảo ngược các kí tự trong chuỗi" << endl;
        cout << "4. Đổi chữ xen kẻ 1 chữ hoa và 1 chữ thường" << endl;
        cout << "5. Đếm một kí tự xuất hiện bao nhiêu lần trong chuỗi" << endl;
        cout << "6. Tìm kiếm xem kí tự nào xuất hiện nhiều nhất" << endl;
        cout << "7. Kiểm tra chuỗi đối xứng" << endl;
        cout << "8. Nhập vào một từ và xóa từ đó tỏng chuỗi đã cho" << endl;
        cout << "0. Thoát." << endl;
        cout << "=== Chọn yêu cầu: ";
        cin >> choice;

        switch (choice) {
            case 1:
            {
                const int MAX_SIZE = 100;
                int n;
                int a[MAX_SIZE];

                nhapMang(a, n);
                xuatMang(a, n);
                break;
            }
            case 2:
            {
                string nhap;
                cout << "Nhap chuoi: ";
                getline(cin, nhap);

                xuatKiTuHoa(nhap);
                break;
            }
            case 3:
            {
                string inputStr;
                cout << "Nhap chuoi: ";
                getline(cin, inputStr);

                reverseString(inputStr);

                cout << "Chuoi sau khi dao nguoc: " << inputStr << endl;
                break;
            }
            case 4:
            {
                
                break;
            }
            case 5:
            {
                
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
