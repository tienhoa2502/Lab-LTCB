#include <iostream>
#include <string>

using namespace std;

int main() {
    string chuoi;
    cout << "Nhập chuỗi: ";
    getline(cin, chuoi);

    string kyTuCanXoa;
    cout << "Nhập kí tự: ";
    cin >> kyTuCanXoa;

    size_t pos = chuoi.find(kyTuCanXoa);
    while (pos != string::npos) {
        chuoi.erase(pos, kyTuCanXoa.length());
        pos = chuoi.find(kyTuCanXoa, pos);
    }

    cout << "Chuỗi sau khi xóa là: " << chuoi << endl;

    return 0;
}