#include <iostream>
using namespace std;



// // - Bài 1
int main() {

    int n;
    int tich = 1;
    int tong = 0;
    do {
        cout << "Nhập N số nguyên ( 5 < n < 100): ";
        cin >> n;
    } while ( n <= 5 || n >= 100);

    for (int i = 1; i <= n; i++) {
        tich = tich*i;  
        tong = tong + tich;
    }
    cout << "Tổng S = " << tong << endl;

    return 0;
}




// - Bài 2
// //- Đếm số lượng các chữ số trong một số
// int demSLSo(int num) {
//     int demSo = 0;
//     while (num != 0) {
//         num /= 10;
//         demSo++;
//     }
//     return demSo;
// }

// int main() {

//     int num;
//     do {
//         cout << "Nhập số nguyên ( 0 < n < 20000): ";
//         cin >> num;
//     } while (num <= 0 || num >= 20000);

//     int soLuong = demSLSo(num);
//     cout << "Số " << num << " có " << soLuong << " chữ số" << endl;

//     return 0;
// }

