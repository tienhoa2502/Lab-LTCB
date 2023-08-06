#include <iostream>
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


int main(){
    const int MAX_SIZE = 100;
    int n;
    int a[MAX_SIZE];

    nhapMang(a, n);
    xuatMang(a, n);

    return 0;

}