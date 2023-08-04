#include <iostream>

using namespace std;


//- Số nguyên tố
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

// - Mảng đối x ứng
bool checkMang(int n, int A[]) {
    for (int i = 0; i < n; i++) {
        if (A[i] != A[n - i - 1])
            return false;
    }
    return true;
}

// - Liệt kê giá trị xuất hiện 1 lần
void check(int mang[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (mang[i] == mang[j]) {
                count++;
            }
        }
        if (count == 1) { 
            cout << mang[i] << " ";
        }
    }
    cout << endl;
}

// - Xóa phần tử
int xoaPTu(int a[], int& n, int k) {
    if (k < 0 || k >= n) {
        return 0;
    }
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    return 1;
}
const int MAX_SIZE = 100;

int main() {

    int choice;

    do {
        cout << "=== Yêu cầu về mảng ===" << endl;
        cout << "1. Số nguyên tố trong mảng." << endl;
        cout << "2. Mảng đối xứng." << endl;
        cout << "3. Liệt kê giá trị xuất hiện 1 lần." << endl;
        cout << "4. Vị trí giá trị âm lớn nhất." << endl;
        cout << "5. Xóa phần tử k." << endl;
        cout << "0. Thoát." << endl;
        cout << "Chọn yêu cầu: ";
        cin >> choice;

        switch (choice) {
            case 1:
            {
                int n;

                do {
                cout << "Nhập số lượng phần tử: ";
                cin >> n;
                }while (n <= 0);       
            
                int* arr = new int[n];
                cout << "Nhập dãy tăng dần:\n";

                for (int i = 0; i < n; ++i) {
                    cin >> arr[i];

                    if (i > 0 && arr[i] <= arr[i - 1]) {
                        cout << "Dãy không thỏa mãn! Nhập lại dãy tăng dần " << (i + 1) << ": ";
                        --i;
                    }
                }

                cout << "Các số nguyên tố có trong mảng: ";
                for (int i = 0; i < n; ++i) {
                    if (soNguyenTo(arr[i])) {
                        cout << arr[i] << " ";
                    }
                }

                delete[] arr;

                break;
            }
            case 2:
            {
                int n;
                do {
                    cout << "Nhập số lượng phần tử ( > 0): ";
                    cin >> n;
                } while (n <= 0);

                int mang[100];
                cout << "Nhập phần tử: ";
                for (int i = 0; i < n; i++) {
                    cin >> mang[i];
                }

                if (checkMang(n, mang)) {
                    cout << "Mảng đối xứng";
                } else {
                    cout << "Không phải mảng đối xứng";
                }
                break;
            }
            case 3:
            {
                int n;
                cout << "Nhập số lượng phần tử: ";
                cin >> n;

                int mang[100];
                cout << "Nhập giá trị phần tử: ";
                for (int i = 0; i < n; i++) {
                    cin >> mang[i];
                }

                cout << "Các phần tử xuất hiện 1 lần là: ";
                check(mang, n);
                break;
            }
            case 4:
            {
                const int SIZE = 10;
                int mang[SIZE];
                
                cout << "Nhập mảng " << SIZE << " phần tử: ";
                for (int i = 0; i < SIZE; ++i) {
                    cin >> mang[i];
                }

                int soAm = -1;
                int viTri = -1;

                for (int i = 0; i < SIZE; ++i) {
                    if (mang[i] < 0 && (viTri == -1 || mang[i] > soAm)) {
                        soAm = mang[i];
                        viTri = i;
                    }
                }

                if (viTri != -1) {
                    cout << "Giá trị âm lớn nhất " << soAm << " ở vị trí " << viTri << endl;
                } else {
                    cout << "Không có giá trị âm trong mảng!" << endl;
                }
                break;
            }
            case 5:
            {
                int n;
                int a[MAX_SIZE];
                
                cout << "Nhập số lượng phần tử: ";
                cin >> n;

                cout << "Nhập " << n << " giá trị phần tử:" << endl;
                for (int i = 0; i < n; i++) {
                    cin >> a[i];
                }

                int k;
                cout << "Nhập vị trí muốn xóa: ";
                cin >> k;

                int result = xoaPTu(a, n, k);
                if (result == 1) {
                    cout << "Xóa tại vị trí " << k << " thành công." << endl;
                    cout << "Mảng sau khi xóa là:" << endl;
                    for (int i = 0; i < n; i++) {
                        cout << a[i] << " ";
                    }
                    cout << endl;
                } else {
                    cout << "Vị trí " << k << " nằm ngoài phạm vi xóa."<< endl;
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
