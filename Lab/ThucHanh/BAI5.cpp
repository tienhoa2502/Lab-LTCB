#include <iostream>
#include <algorithm>
using namespace std;

///-------CƠ BẢN--------- 


// Hàm nhập mảng Bài5
void nhapMang(int A[], int N) {
    cout << "Nhập phần tử: "<<endl;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
}

// Hàm xuất mảng Bài5
void xuatMang(int A[], int N) {
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
}

// Hàm hủy n phần tử từ vị trí p trong mảng Bài5
void huyNPhanTu(int A[], int &N, int p, int n) {
    if (n <= 0 || p < 0 || p >= N) {
        cout << "Không hủy " << n << " được. Phần tử từ vị trí " << p << endl;
        return;
    }

    for (int i = p; i < N - n; ++i) {
        A[i] = A[i + n];
    }
    N = N - n;
}

// - Bài 1b: Số nguyên tố
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

    int choice;

    do {
        cout << "=== Lựa chọn yêu cầu ===." << endl;
        cout << "======= CƠ  BẢN ========." << endl;
        cout << "1. " << endl;
        cout << "2. " << endl;
        cout << "3. " << endl;
        cout << "4. " << endl;
        cout << "5. " << endl;
        cout << "6. " << endl;
        cout << "7. " << endl;
        cout << "8. " << endl; 
        cout << "9. " << endl;
        cout << "======= ỨNG DỤNG ========." << endl;
        cout << "10. ." << endl;

        cout << "0. Thoát." << endl;
        cout << "=== Chọn yêu cầu: ";
        cin >> choice;

        switch (choice) {
            case 1:
            {
                int n;
                do {
                    cout << "Nhập N số lượng phần tử (n <= 100): ";
                    cin >> n;
                } while ( n <= 0 || n > 100 );

                int mang[100];
                cout << "Nhập phần tử: ";
                for (int i = 0; i < n; i++) {
                    cin >> mang[i];
                }

                // int tbcAm, tbcDuong;
                // for (int i = 1; i <= n; i++){
                //     if (mang[i] > 0){
                //         tbcDuong += mang[i];
                //         cout << "Tổng số dương trong mảng là: "<< tbcDuong << endl;             
                //     }
                // }

                // for (int i = 1; i <= n; i++){
                //     if (mang[i] < 0){
                //         tbcAm += mang[i];
                //         cout << "Tổng số dương trong mảng là: "<< tbcAm << endl;             
                //     }
                // }
                
                cout << "Các số nguyên tố có trong mảng: ";
                for (int i = 0; i <= n; ++i) {
                    if (soNguyenTo(mang[i])) {
                        cout << mang[i] << " ";
                    }
                }

                sort(mang, mang + n, less<int>());
                cout << "Mảng sau khi sắp xếp số dương theo thứ tự lớn dần: "<< endl;
                for (int i = 0; i <= n; ++i) {
                    if (mang[i] > 0) {
                        cout << mang[i] << " ";
                    }
                }

                break;
            }
            case 2:
            {
                int n, x;
                bool timKiem = false;
                int count = 0;

                do {
                    cout << "Nhập n số lượng phần tử có trong mảng A (n <= 100): ";
                    cin >> n;
                } while ( n <= 0 || n > 100 );

                int mang[100];
                cout << "Nhập phần tử mảng A: ";
                for (int i = 0; i < n; i++) {
                    cin >> mang[i];
                }

                cout << "Nhập số nguyên X: ";
                cin >> x;
                
                for (int i = 0; i < n; ++i) {
                    if (mang[i] == x) {
                        timKiem = true;
                        ++count;
                        for (int j = i; j < n - 1; ++j) {
                            mang[j] = mang[j + 1];
                        }
                        --n;
                        --i;
                    }
                }

                if (timKiem) {
                    cout << "Số lần xuất hiện của " << x << " là: " << count << endl;
                    cout << "Mảng sau khi xóa " << x << " là: ";
                    for (int i = 0; i < n; ++i) {
                        cout << mang[i] << " ";
                    }
                } else {
                    cout << x << " không có trong mảng" << endl;
                }


                break;
            }
            case 3:
            {
                int n;
                do {
                    cout << "Nhập N số lượng phần tử (n <= 100): ";
                    cin >> n;
                } while ( n <= 0 || n > 100 );

                int mang[100];
                cout << "Nhập phần tử: ";
                for (int i = 0; i < n; i++) {
                    cin >> mang[i];
                }

                sort(mang, mang + n, less<int>());
                cout << "Mảng sau khi sắp xếp số dương theo thứ tự lớn dần: "<< endl;
                for (int i = 0; i <= n; ++i) {
                        cout << mang[i] << " ";
                }




                break;
            }
            case 4:
            {

                break;
            }
            case 5:
            {
                int N, p, n;
                cout << "Nhập số phần tử mảng A: ";
                cin >> N;

                int A[100];

                nhapMang(A, N);

                cout << "Nhập vị trí p: ";
                cin >> p;
                cout << "Nhập số n phần tử cần hủy: ";
                cin >> n;

                huyNPhanTu(A, N, p, n);

                cout << "Mảng sau khi hủy " << n << " phần tử từ vị trí " << p << ": ";
                xuatMang(A, N);
                break;
            }
            case 6:
            {
                int N, M, p;
                cout << "Nhập số phần tử mảng A và B: ";
                cin >> N;

                int A[200], B[100];

                cout << "Nhập mảng A:" << endl;
                nhapMang(A, N);

                cout << "Nhập mảng B:" << endl;
                nhapMang(B, N);

                cout << "Nhập vị trí p: ";
                cin >> p;

                chenMang(A, N, B, N, p);

                cout << "Mảng A sau khi chèn mảng B tại vị trí " << p << ": ";
                xuatMang(A, N);
                break;
            }
            case 7:
            {

                break;
            }
            case 8:
            {
                

                break;
            }
            case 9:
            {
                break;
            }
            case 10:
            {
                break;
            }
            case 0:
                break;
            default:
                cout << "Vui lòng chọn lại" << endl;
        }
    } while (choice != 0);

    return 0;
}
