#include <iostream>
using namespace std;

bool checkMang(int n, int A[]) {
    for (int i = 0; i < n; i++) {
        if (A[i] != A[n - i - 1])
            return false;
    }
    return true;
}

int main() {
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

    return 0;
}



// //-----Liệt kê giá trị xuất hiện 1 lần--------
// void check(int mang[], int n) {
//     for (int i = 0; i < n; i++) {
//         int count = 0;
//         for (int j = 0; j < n; j++) {
//             if (mang[i] == mang[j]) {
//                 count++;
//             }
//         }
//         if (count == 1) { 
//             cout << mang[i] << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Nhap so luong phan tu cua mang: ";
//     cin >> n;

//     int mang[100];
//     cout << "Nhap cac phan tu cua mang: ";
//     for (int i = 0; i < n; i++) {
//         cin >> mang[i];
//     }

//     cout << "Cac gia tri xuat hien dung 1 lan trong mang: ";
//     check(mang, n);

//     return 0;
// }